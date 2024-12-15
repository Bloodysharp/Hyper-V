#include "Mem.hpp"

using namespace std;


CMemory* CMemory::Memory;


CMemory::CMemory()
{
}


bool Compare(BYTE* data, BYTE* sign, const char* mask)
{
    for (; *mask; mask++, sign++, data++)
    {
        if (*mask == 'x' && *data != *sign)
            return false;
    }
    return true;
}

void CMemory::ScanMem(DWORD64 start, DWORD64 end, BYTE* sign, const char* mask, std::vector<DWORD_PTR>& foundAddresses, int _count)
{
    MEMORY_BASIC_INFORMATION mbi = { 0 };
    DWORD64 offset = 0;
    int count = 0;
    bool found = false;

    while (start + offset < end && !found)
    {
        VirtualQueryEx(processHandle, (LPCVOID)(start + offset), &mbi, sizeof(MEMORY_BASIC_INFORMATION));
        if (mbi.State != MEM_FREE)
        {
            BYTE* buffer = new BYTE[mbi.RegionSize];
            ReadProcessMemory(processHandle, mbi.BaseAddress, buffer, mbi.RegionSize, NULL);
            for (int i = 0; i < mbi.RegionSize && !found; i++)
            {
                if (Compare(buffer + i, sign, mask))
                {
                    DWORD64 foundAddress = (DWORD64)mbi.BaseAddress + i;
                    foundAddresses.push_back(foundAddress);
                    count++;
                    if (count >= _count) {
                        found = true;
                        break;
                    }
                }
            }
            delete[] buffer;
        }
        offset += mbi.RegionSize;
    }
}

void CMemory::Start(int pid)
{
    int threadCount = 0;
    processId = pid;
    if (!processId)
    {
        HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        PROCESSENTRY32 pe;
        pe.dwSize = sizeof(PROCESSENTRY32);
        Process32First(hSnap, &pe);
        while (Process32Next(hSnap, &pe))
        {
            if (_tcsicmp(pe.szExeFile, "HD-Player.exe") == 0)
                if (pe.cntThreads > threadCount)
                    threadCount = pe.cntThreads; pid = pe.th32ProcessID;
        }
        processId = pid;
    }

    if (processId)
    {



        HANDLE ntStatus = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);


        processHandle = ntStatus;
    }
}

int CMemory::GetProcessID()
{
    int pid = 0;
    int threadCount = 0;
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    PROCESSENTRY32 pe;
    pe.dwSize = sizeof(PROCESSENTRY32);
    Process32First(hSnap, &pe);
    while (Process32Next(hSnap, &pe))
    {
        if (_tcsicmp(pe.szExeFile, "HD-Player.exe") == 0)
        {
            if ((int)pe.cntThreads > threadCount)
            {
                threadCount = pe.cntThreads;
                pid = pe.th32ProcessID;
            }
        }
    }
    return pid;
}


CMemory::~CMemory()
{
}

CMemory* CMemory::Initialize()
{
    if (!Memory)
        Memory = new CMemory();
    return Memory;
}
