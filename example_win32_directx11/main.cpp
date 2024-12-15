#define IMGUI_DEFINE_MATH_OPERATORS

#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include <d3d11.h>
#include <tchar.h>

#include "imgui_edited.hpp"
#include "textures.h"
#include "font.h"
#include <ShObjIdl_core.h>
#include <chrono>
#include <algorithm>
#include <functional>
#include "auth/auth.hpp"
#include <vector>
#include <random>
#include <math.h>
#include <dwmapi.h>
#include "DiscordRPC/Discord.h"
#include "DiscordSDK/src/discord_rpc.h"
#include "Memory2\RojasMemory.h"
#include "Memory2\Mem.hpp"
#include <thread>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
#include <iomanip>  // Para std::put_time
#include <sstream>  // Para std::stringstream


std::string description_test = "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.";






std::string name = "OPEN NEW"; // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = "rRHiQ3aMNN"; // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = "fd63b92cddeb5ad5bbf7d6047466f36d3b00872cf64281901ed39e919d51f019"; // app secret, the blurred text on licenses tab and other tabs
std::string version = "2.0"; // leave alone unless you've changed version on website

std::string url = "https://keyauth.win/api/1.2/";

HWND hwnd;
RECT rc;
using namespace KeyAuth;
KeyAuth::api KeyAuthApp(name, ownerid, secret, version, url);
bool authenticed = false;




// Función para generar un valor aleatorio dentro de un rango
auto RandomRange = [](int min, int max) -> int {
    return min + rand() % (max - min + 1);
    };

// Función ficticia para obtener el país actual
std::string GetCurrentCountry()
{
    // Implementa la lógica para obtener el país actual aquí
    // Por ejemplo, podrías usar alguna API externa o configuración del sistema
    return "United States"; // Ejemplo de país
}

std::string tm_to_readable_time(tm ctx);
static std::time_t string_to_timet(std::string timestamp);
static std::tm timet_to_tm(time_t timestamp);
static int64_t timeuptd = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

std::string tm_to_readable_time(tm ctx) {
    char buffer[80];

    strftime(buffer, sizeof(buffer), "%m/%d/%y", &ctx);

    return std::string(buffer);
}

static std::time_t string_to_timet(std::string timestamp) {
    auto cv = strtol(timestamp.c_str(), NULL, 10); // long

    return (time_t)cv;
}

static std::tm timet_to_tm(time_t timestamp) {
    std::tm context;

    localtime_s(&context, &timestamp);

    return context;
}

bool sg, internet, xd, xd1, xd2;

namespace Rojas {
    bool sg, internet, xd, xd1, xd2;

}

static int dakelagRojas = 0;

namespace texture
{
    ID3D11ShaderResourceView* logoo = nullptr;
    ID3D11ShaderResourceView* preview = nullptr;
    ID3D11ShaderResourceView* previe11w = nullptr;
    ID3D11ShaderResourceView* ragebot = nullptr;
    ID3D11ShaderResourceView* legitbot = nullptr;
    ID3D11ShaderResourceView* visuals = nullptr;
    ID3D11ShaderResourceView* misc = nullptr;
    ID3D11ShaderResourceView* world = nullptr;
    ID3D11ShaderResourceView* settings = nullptr;
    ID3D11ShaderResourceView* logRojass = nullptr;
}

namespace esp_preview
{
    bool money = true;
    bool nickname = true;
    bool weapon = true;
    bool zoom = true;

    bool c4 = true;
    bool HP_line = true;
    bool hit = true;
    bool box = true;
    bool bomb = true;

    float box_color[4] = { 255 / 255.f, 255 / 255.f, 255 / 255.f, 1.f };
    float nick_color[4] = { 255 / 255.f, 255 / 255.f, 255 / 255.f, 1.f };
    float money_color[4] = { 255 / 255.f, 255 / 255.f, 255 / 255.f, 1.f };
    float zoom_color[4] = { 255 / 255.f, 255 / 255.f, 255 / 255.f, 1.f };
    float c4_color[4] = { 255 / 255.f, 255 / 255.f, 255 / 255.f, 1.f };
    float bomb_color[4] = { 255 / 255.f, 255 / 255.f, 255 / 255.f, 1.f };
    float hp_color[4] = { 255 / 255.f, 0 / 255.f, 0 / 255.f, 1.f };
    float hp_line_color[4] = { 255 / 255.f, 0 / 255.f, 0 / 255.f, 1.f };
    float weapon_color[4] = { 255 / 255.f, 255 / 255.f, 255 / 255.f, 1.f };
    float hit_color[4] = { 255 / 255.f, 255 / 255.f, 255 / 255.f, 1.f };

    int hp = 85;

    bool active_esp_preview = true;
}


namespace var
{
    static float tab_alpha = 0.f; /* */ static float tab_add; /* */ static int active_tab = 0;

    bool interactive = false;
    float tab_right = 0, tab_left = 0;

    bool check[40], value[40];

    bool triangleparticle666 = true;

    float col0[4] = { 1.0f, 0.0f, 0.0f, 1.0f };   
    float col1[4] = { 0.0f, 1.0f, 0.0f, 1.0f };   
    float col2[4] = { 0.0f, 0.0f, 1.0f, 1.0f };   
    float col3[4] = { 1.0f, 1.0f, 0.0f, 1.0f };   
    float col4[4] = { 1.0f, 0.0f, 1.0f, 1.0f };   
    float col5[4] = { 0.0f, 1.0f, 1.0f, 1.0f };   
    float col6[4] = { 1.0f, 0.5f, 0.0f, 1.0f };  
    float col7[4] = { 0.5f, 0.0f, 1.0f, 1.0f };  
    float col8[4] = { 0.0f, 0.5f, 1.0f, 1.0f };  
    float col9[4] = { 0.5f, 1.0f, 0.0f, 1.0f };  
    float col10[4] = { 1.0f, 0.0f, 0.5f, 1.0f }; 
    float col11[4] = { 0.0f, 1.0f, 0.5f, 1.0f }; 
    float col12[4] = { 0.5f, 0.0f, 1.0f, 1.0f }; 
    float col13[4] = { 0.0f, 0.5f, 1.0f, 1.0f }; 
    float col14[4] = { 1.0f, 0.5f, 0.5f, 1.0f }; 
    float col15[4] = { 0.5f, 1.0f, 0.5f, 1.0f }; 

    int slider_value[40], key[40], m[40], select[40];

    int selected[40];
    const char* items[5] = {"Select", "Camera Hack", "Vision Hack", "Vision 8x", "Camera Up" };

    const char* pageNames[] = { "Aimbot", "Visuals","Exploits" , "Settings","Settings" /*"Misc",*/ /*"World",*/ /*"Settings"*/};

    const ImVec2 buttonSize(125, 35);
    int page = 0;

    char search[120] = { "" };
}

static bool checkbox[300];

static int key66 = VK_INSERT;

int key1, key2, key3, key4, key5, key6, key7, key8;

int lag1, lag2, lag3, lag4, lag5, lag6, lag7, lag8, lag9, lag10;

static ID3D11Device* g_pd3dDevice = nullptr;
static ID3D11DeviceContext* g_pd3dDeviceContext = nullptr;
static IDXGISwapChain* g_pSwapChain = nullptr;
static UINT                     g_ResizeWidth = 0, g_ResizeHeight = 0;
static ID3D11RenderTargetView* g_mainRenderTargetView = nullptr;

bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);



namespace ImGui
{
    int rotation_start_index;
    void ImRotateStart()
    {
        rotation_start_index = ImGui::GetWindowDrawList()->VtxBuffer.Size;
    }

    ImVec2 ImRotationCenter()
    {
        ImVec2 l(FLT_MAX, FLT_MAX), u(-FLT_MAX, -FLT_MAX); // bounds

        const auto& buf = ImGui::GetWindowDrawList()->VtxBuffer;
        for (int i = rotation_start_index; i < buf.Size; i++)
            l = ImMin(l, buf[i].pos), u = ImMax(u, buf[i].pos);

        return ImVec2((l.x + u.x) / 2, (l.y + u.y) / 2); // or use _ClipRectStack?
    }


    void ImRotateEnd(float rad, ImVec2 center = ImRotationCenter())
    {
        float s = sin(rad), c = cos(rad);
        center = ImRotate(center, s, c) - center;

        auto& buf = ImGui::GetWindowDrawList()->VtxBuffer;
        for (int i = rotation_start_index; i < buf.Size; i++)
            buf[i].pos = ImRotate(buf[i].pos, s, c) - center;
    }
}
void Trinage_background()
{
    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };

    static ImVec2 partile_pos[100];
    static ImVec2 partile_target_pos[100];
    static float partile_speed[100];
    static float partile_size[100];
    static float partile_radius[100];
    static float partile_rotate[100];

    for (int i = 1; i < 70; i++)
    {
        if (partile_pos[i].x == 0 || partile_pos[i].y == 0)
        {
            partile_pos[i].x = rand() % (int)screen_size.x + 1;
            partile_pos[i].y = 15.f;
            partile_speed[i] = 1 + rand() % 35;
            partile_radius[i] = rand() % 4;
            partile_size[i] = rand() % 8;

            partile_target_pos[i].x = rand() % (int)screen_size.x;
            partile_target_pos[i].y = screen_size.y * 2;
        }

        partile_pos[i] = ImLerp(partile_pos[i], partile_target_pos[i], ImGui::GetIO().DeltaTime * (partile_speed[i] / 60));
        partile_rotate[i] += ImGui::GetIO().DeltaTime;

        if (partile_pos[i].y > screen_size.y)
        {
            partile_pos[i].x = 0;
            partile_pos[i].y = 0;
            partile_rotate[i] = 0;
        }
        float randomRed = static_cast<float>(rand()) / RAND_MAX;
        float randomGreen = static_cast<float>(rand()) / RAND_MAX;
        float randomBlue = static_cast<float>(rand()) / RAND_MAX;
        ImVec4 randomColor = ImVec4(255, 0, 0, 1.0f);

        randomRed = static_cast<float>(rand()) / RAND_MAX;
        randomGreen = static_cast<float>(rand()) / RAND_MAX;
        randomBlue = static_cast<float>(rand()) / RAND_MAX;


        ImVec4 randomLineColor = ImVec4(255, 0, 0, 1.0f);



        ImGui::ImRotateStart();
        ImGui::GetWindowDrawList()->AddCircleFilled(partile_pos[i], partile_size[i], ImColor(c::accent), 1);
        ImGui::GetWindowDrawList()->AddShadowCircle(partile_pos[i], 8.f, ImColor(c::accent), 58.f + partile_size[i], ImVec2(0, 0), 0, 1);
        ImGui::ImRotateEnd(partile_rotate[i]);
    }
}

void DrawLogo(ImDrawList* draw_list, ImVec2 center, float size, ID3D11ShaderResourceView* texture)
{
    ImVec2 top_left = ImVec2(center.x - size * 0.5f, center.y - size * 0.5f);
    ImVec2 bottom_right = ImVec2(center.x + size * 0.5f, center.y + size * 0.5f);
    ImVec2 uv_min = ImVec2(0.0f, 0.0f);                 // Top-left of the texture
    ImVec2 uv_max = ImVec2(1.0f, 1.0f);                 // Bottom-right of the texture

    draw_list->AddImage((void*)texture, top_left, bottom_right, uv_min, uv_max);
}

void LogoParticles()
{
    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };

    static ImVec2 particle_pos[100];
    static ImVec2 particle_target_pos[100];
    static float particle_speed[100];
    static float particle_size[100];
    static float particle_rotate[100];

    for (int i = 1; i < 50; i++)
    {
        if (particle_pos[i].x == 0 || particle_pos[i].y == 0)
        {
            particle_pos[i].x = rand() % (int)screen_size.x + 1;
            particle_pos[i].y = 15.f;
            particle_speed[i] = 1 + rand() % 35;
            particle_size[i] = 20 + rand() % 20; // Adjust size for visibility

            particle_target_pos[i].x = rand() % (int)screen_size.x;
            particle_target_pos[i].y = screen_size.y * 2;
        }

        particle_pos[i] = ImLerp(particle_pos[i], particle_target_pos[i], ImGui::GetIO().DeltaTime * (particle_speed[i] / 60));
        particle_rotate[i] += ImGui::GetIO().DeltaTime;

        if (particle_pos[i].y > screen_size.y)
        {
            particle_pos[i].x = 0;
            particle_pos[i].y = 0;
            particle_rotate[i] = 0;
        }

        ImDrawList* draw_list = ImGui::GetWindowDrawList();
        ImGui::ImRotateStart();
        DrawLogo(draw_list, particle_pos[i], particle_size[i], texture::logRojass);
        ImGui::GetWindowDrawList()->AddShadowCircle(particle_pos[i], 8.f, ImGui::GetColorU32(c::accent), 58.f + particle_size[i], ImVec2(0, 0), 0, 1);
        ImGui::ImRotateEnd(particle_rotate[i]);
    }
}

void DrawHeart(ImDrawList* draw_list, ImVec2 center, float size, ImU32 color)
{
    const int num_segments = 100;
    std::vector<ImVec2> points;
    points.reserve(num_segments);

    for (int i = 0; i < num_segments; ++i)
    {
        float theta = 2.0f * IM_PI * float(i) / float(num_segments);
        float x = size * 16 * sin(theta) * sin(theta) * sin(theta);
        float y = -size * (13 * cos(theta) - 5 * cos(2 * theta) - 2 * cos(3 * theta) - cos(4 * theta));
        points.push_back(ImVec2(center.x + x, center.y + y));
    }

    draw_list->AddConvexPolyFilled(points.data(), points.size(), color);
}

void Heart()
{

    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };

    static ImVec2 partile_pos[100];
    static ImVec2 partile_target_pos[100];
    static float partile_speed[100];
    static float partile_size[100];
    static float partile_radius[100];
    static float partile_rotate[100];

    ImU32 main_color = IM_COL32(255, 255, 255 , 255); // Red color for hearts

    for (int i = 1; i < 50; i++)
    {
        if (partile_pos[i].x == 0 || partile_pos[i].y == 0)
        {
            partile_pos[i].x = rand() % (int)screen_size.x + 1;
            partile_pos[i].y = 15.f;
            partile_speed[i] = 1 + rand() % 35;
            partile_radius[i] = rand() % 4;
            partile_size[i] = 1 - rand() % 1; // Adjusted to make the hearts more visible

            partile_target_pos[i].x = rand() % (int)screen_size.x;
            partile_target_pos[i].y = screen_size.y * 2;
        }

        partile_pos[i] = ImLerp(partile_pos[i], partile_target_pos[i], ImGui::GetIO().DeltaTime * (partile_speed[i] / 60));
        partile_rotate[i] += ImGui::GetIO().DeltaTime;

        if (partile_pos[i].y > screen_size.y)
        {
            partile_pos[i].x = 0;
            partile_pos[i].y = 0;
            partile_rotate[i] = 0;
        }

        ImGui::ImRotateStart();
        DrawHeart(ImGui::GetWindowDrawList(), partile_pos[i], partile_size[i], ImGui::GetColorU32(c::accent));
     
        ImGui::GetWindowDrawList()->AddCircleFilled(partile_pos[i], partile_size[i], ImGui::GetColorU32(c::accent), 1);
        ImGui::GetWindowDrawList()->AddShadowCircle(partile_pos[i], 10.f, ImGui::GetColorU32(c::accent), 100.f + partile_size[i], ImVec2(0, 0), 0, 1);
        ImGui::ImRotateEnd(partile_rotate[i]);
    }
}

void DrawBear(ImDrawList* draw_list, ImVec2 center, float size, ImU32 color)
{
    const float bearHeadSize = size * 0.4f;
    const float earSize = size * 0.2f;     

    draw_list->AddCircleFilled(center, bearHeadSize, color);

    draw_list->AddCircleFilled(ImVec2(center.x - bearHeadSize * 0.5f, center.y - bearHeadSize * 0.5f), earSize, color);
    draw_list->AddCircleFilled(ImVec2(center.x + bearHeadSize * 0.5f, center.y - bearHeadSize * 0.5f), earSize, color);
    float eyeSize = size * 0.08f;
    draw_list->AddCircleFilled(ImVec2(center.x - bearHeadSize * 0.2f, center.y - bearHeadSize * 0.2f), eyeSize, IM_COL32(0, 0, 0, 255));
    draw_list->AddCircleFilled(ImVec2(center.x + bearHeadSize * 0.2f, center.y - bearHeadSize * 0.2f), eyeSize, IM_COL32(0, 0, 0, 255)); 
    draw_list->AddCircleFilled(ImVec2(center.x, center.y + bearHeadSize * 0.1f), eyeSize * 1.2f, IM_COL32(0, 0, 0, 255));
}

void Bear()
{
    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };

    static ImVec2 particle_pos[100];
    static ImVec2 particle_target_pos[100];
    static float particle_speed[100];
    static float particle_size[100];
    static float particle_rotate[100];

    ImU32 main_color = IM_COL32(150, 75, 0, 255); 

    for (int i = 1; i < 50; i++)
    {
        if (particle_pos[i].x == 0 || particle_pos[i].y == 0)
        {
            particle_pos[i].x = rand() % (int)screen_size.x + 1;
            particle_pos[i].y = 15.f;
            particle_speed[i] = 1 + rand() % 35;
            particle_size[i] = 20.f;

            particle_target_pos[i].x = rand() % (int)screen_size.x;
            particle_target_pos[i].y = screen_size.y * 2;
        }

        particle_pos[i] = ImLerp(particle_pos[i], particle_target_pos[i], ImGui::GetIO().DeltaTime * (particle_speed[i] / 60));
        particle_rotate[i] += ImGui::GetIO().DeltaTime;

        if (particle_pos[i].y > screen_size.y)
        {
            particle_pos[i].x = 0;
            particle_pos[i].y = 0;
            particle_rotate[i] = 0;
        }

        ImGui::ImRotateStart();
        DrawBear(ImGui::GetWindowDrawList(), particle_pos[i], particle_size[i], ImGui::GetColorU32(c::accent));
  
        ImGui::GetWindowDrawList()->AddCircleFilled(particle_pos[i], particle_size[i] * 0.4f, ImGui::GetColorU32(c::accent), 1);
        ImGui::GetWindowDrawList()->AddShadowCircle(particle_pos[i], 8.f, ImGui::GetColorU32(c::accent), 100.f + particle_size[i], ImVec2(0, 0), 0, 1);
        ImGui::ImRotateEnd(particle_rotate[i]);
    }
}

void DrawWorm(ImDrawList* draw_list, ImVec2 center, float size, ImU32 color)
{
    const int num_segments = 10; 
    float segment_length = size / num_segments;

    for (int i = 0; i < num_segments; ++i)
    {
        float theta = (float)i / (num_segments - 1) * IM_PI;
        float offset = sinf(theta * 2) * (size * 0.2f); 
        ImVec2 segment_center = ImVec2(center.x + offset, center.y + i * segment_length);
        draw_list->AddCircleFilled(segment_center, segment_length * 0.5f, color);
    }
}

void Worm()
{
    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };

    static ImVec2 particle_pos[100];
    static ImVec2 particle_target_pos[100];
    static float particle_speed[100];
    static float particle_size[100];
    static float particle_rotate[100];

    ImU32 main_color = IM_COL32(0, 255, 0, 255);

    for (int i = 1; i < 50; i++)
    {
        if (particle_pos[i].x == 0 || particle_pos[i].y == 0)
        {
            particle_pos[i].x = rand() % (int)screen_size.x + 1;
            particle_pos[i].y = 15.f;
            particle_speed[i] = 1 + rand() % 35;
            particle_size[i] = 30.f; 

            particle_target_pos[i].x = rand() % (int)screen_size.x;
            particle_target_pos[i].y = screen_size.y * 2;
        }

        particle_pos[i] = ImLerp(particle_pos[i], particle_target_pos[i], ImGui::GetIO().DeltaTime * (particle_speed[i] / 60));
        particle_rotate[i] += ImGui::GetIO().DeltaTime;

        if (particle_pos[i].y > screen_size.y)
        {
            particle_pos[i].x = 0;
            particle_pos[i].y = 0;
            particle_rotate[i] = 0;
        }

        ImGui::ImRotateStart();
        DrawWorm(ImGui::GetWindowDrawList(), particle_pos[i], particle_size[i], ImGui::GetColorU32(c::accent));
      
        ImGui::GetWindowDrawList()->AddCircleFilled(particle_pos[i], particle_size[i] * 0.3f, ImGui::GetColorU32(c::accent), 1);
        ImGui::GetWindowDrawList()->AddShadowCircle(particle_pos[i], 8.f, ImGui::GetColorU32(c::accent), 100.f + particle_size[i], ImVec2(0, 0), 0, 1);
        ImGui::ImRotateEnd(particle_rotate[i]);
    }
}

void DrawBlackHole(ImDrawList* draw_list, ImVec2 center, float size, ImU32 color)
{
    const int num_segments = 100; 
    const float inner_radius = size * 0.3f; 
    const float outer_radius = size; 

 
    for (int i = 0; i < num_segments; ++i)
    {
        float theta = 2.0f * IM_PI * float(i) / float(num_segments);
        float x = cos(theta) * inner_radius;
        float y = sin(theta) * inner_radius;
        ImVec2 inner_point = ImVec2(center.x + x, center.y + y);

        draw_list->AddLine(inner_point, ImVec2(center.x + x * (outer_radius / inner_radius), center.y + y * (outer_radius / inner_radius)),
            IM_COL32(0, 0, 0, 255));
    }


    draw_list->AddCircleFilled(center, inner_radius, IM_COL32(0, 0, 0, 255));
}

void BlackHole()
{
    ImVec2 screen_size = { (float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN) };

    static ImVec2 particle_pos[100];
    static ImVec2 particle_target_pos[100];
    static float particle_speed[100];
    static float particle_size[100];
    static float particle_rotate[100];

    ImU32 main_color = IM_COL32(0, 0, 0, 255);

    for (int i = 1; i < 50; i++)
    {
        if (particle_pos[i].x == 0 || particle_pos[i].y == 0)
        {
            particle_pos[i].x = rand() % (int)screen_size.x + 1;
            particle_pos[i].y = 15.f;
            particle_speed[i] = 1 + rand() % 35;
            particle_size[i] = 40.f; 

            particle_target_pos[i].x = rand() % (int)screen_size.x;
            particle_target_pos[i].y = screen_size.y * 2;
        }

        particle_pos[i] = ImLerp(particle_pos[i], particle_target_pos[i], ImGui::GetIO().DeltaTime * (particle_speed[i] / 60));
        particle_rotate[i] += ImGui::GetIO().DeltaTime;

        if (particle_pos[i].y > screen_size.y)
        {
            particle_pos[i].x = 0;
            particle_pos[i].y = 0;
            particle_rotate[i] = 0;
        }

        ImGui::ImRotateStart();
        DrawBlackHole(ImGui::GetWindowDrawList(), particle_pos[i], particle_size[i], main_color);
        ImGui::GetWindowDrawList()->AddCircleFilled(particle_pos[i], particle_size[i] * 0.1f, ImGui::GetColorU32(c::accent), 1);
        ImGui::GetWindowDrawList()->AddShadowCircle(particle_pos[i], 15.f, ImGui::GetColorU32(c::accent), 100.f + particle_size[i], ImVec2(0, 0), 0, 1);
        ImGui::ImRotateEnd(particle_rotate[i]);
    }
}

int APIENTRY WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    KeyAuthApp.init();


    WNDCLASSEXW wc;
    wc.cbSize = sizeof(WNDCLASSEXW);
    wc.style = CS_CLASSDC;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = NULL;
    wc.cbWndExtra = NULL;
    wc.hInstance = nullptr;
    wc.hIcon = LoadIcon(0, IDI_APPLICATION);
    wc.hCursor = LoadCursor(0, IDC_ARROW);
    wc.hbrBackground = nullptr;
    wc.lpszMenuName = L"HyperV";
    wc.lpszClassName = L"HyperV";
    wc.hIconSm = LoadIcon(0, IDI_APPLICATION);

    RegisterClassExW(&wc);

   
    hwnd = CreateWindowExW(
        WS_EX_TOOLWINDOW,
        wc.lpszClassName,
        L"HyperV",
        WS_POPUP, 
        0, 0,                  
        1920, 1080,
        0,
        0,
        wc.hInstance,
        0
    );


   
    MARGINS margins = { -1 };
    DwmExtendFrameIntoClientArea(hwnd, &margins);


    ShowWindow(hwnd, SW_SHOWDEFAULT);
    UpdateWindow(hwnd);

    POINT mouse;
    rc = { 0 };
    GetWindowRect(hwnd, &rc);

    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        ::UnregisterClassW(wc.lpszClassName, wc.hInstance);
        return 1;
    }

    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;   
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;    

    ImFontConfig cfg;
    cfg.FontBuilderFlags = ImGuiFreeTypeBuilderFlags_ForceAutoHint | ImGuiFreeTypeBuilderFlags_LightHinting | ImGuiFreeTypeBuilderFlags_LoadColor | ImGuiFreeTypeBuilderFlags_Bitmap;

    font::inter_medium_widget = io.Fonts->AddFontFromMemoryTTF(inter_medium, sizeof(inter_medium), 14.5f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    font::inter_medium_small = io.Fonts->AddFontFromMemoryTTF(inter_medium, sizeof(inter_medium), 14.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    font::inter_medium_big = io.Fonts->AddFontFromMemoryTTF(inter_bold, sizeof(inter_bold), 25.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    font::inter_bold = io.Fonts->AddFontFromMemoryTTF(inter_bold, sizeof(inter_bold), 17.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    font::icomoon = io.Fonts->AddFontFromMemoryTTF(icomoon, sizeof(icomoon), 17.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());
    font::icomoon_default = io.Fonts->AddFontFromMemoryTTF(icomoon, sizeof(icomoon), 20.f, &cfg, io.Fonts->GetGlyphRangesCyrillic());

    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);

    D3DX11_IMAGE_LOAD_INFO info; ID3DX11ThreadPump* pump{ nullptr };
 
    if (texture::ragebot == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, ragebot, sizeof(ragebot), &info, pump, &texture::ragebot, 0);
   if (texture::legitbot == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, legitbot, sizeof(legitbot), &info, pump, &texture::legitbot, 0);

    if (texture::visuals == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, visuals, sizeof(visuals), &info, pump, &texture::visuals, 0);
    if (texture::misc == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, misc, sizeof(misc), &info, pump, &texture::misc, 0);
    if (texture::world == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, world, sizeof(world), &info, pump, &texture::world, 0);
    if (texture::settings == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, settings, sizeof(settings), &info, pump, &texture::settings, 0);
    if (texture::logoo == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, logoo, sizeof(logoo), &info, pump, &texture::logoo, 0);
    if (texture::logRojass == nullptr) D3DX11CreateShaderResourceViewFromMemory(g_pd3dDevice, logoo, sizeof(logoo), &info, pump, &texture::logRojass, 0); 
    bool show_demo_window = true;
    bool show_another_window = false;

    bool done = false;
    while (!done)
    {
        MSG msg;
        while (::PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE))
        {
            ::TranslateMessage(&msg);
            ::DispatchMessage(&msg);
            if (msg.message == WM_QUIT)
                done = true;
        }
        if (done)
            break;

        if (g_ResizeWidth != 0 && g_ResizeHeight != 0)
        {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, g_ResizeWidth, g_ResizeHeight, DXGI_FORMAT_UNKNOWN, 0);
            g_ResizeWidth = g_ResizeHeight = 0;
            CreateRenderTarget();
        }

        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
        {
            notificationSystem.DrawNotifications();

            ImGui::SetNextWindowSize(c::bg::size);

            ImGuiStyle* style = &ImGui::GetStyle();

      

            style->WindowPadding = ImVec2(10, 10);
            style->ItemSpacing = ImVec2(20, 20);
            style->WindowBorderSize = 0;
            style->ScrollbarSize = 10.f;

            static float color[4] = { 0.863f, 0.741f, 0.510f, 1.0f };


            c::accent = { color[0], color[1], color[2], 1.f };

            static float color1[4] = { 0.165f, 0.859f, 0.059f, 1.f };
            c::esplinecolor = { color1[0], color1[1], color1[2], 1.f };


            static float color2[4] = { 1.0f, 1.0f, 1.0f, 1.0f };

            c::EspBoxolor = { color2[0], color2[1], color2[2], 1.f };

            static float color3[4] = { 0.165f, 0.859f, 0.059f, 1.f };
            c::espglowcolor = { color3[0], color3[1], color3[2], 1.f };

            ImGui::Begin("Benig", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_NoBringToFrontOnFocus);
            {
              

                static bool hide = true;
                static int opticaly = 255;
                opticaly = ImLerp(opticaly, opticaly <= 255 && hide ? 300 : 0, ImGui::GetIO().DeltaTime * 100.f); 
                if (opticaly > 255) opticaly = 255;
                SetLayeredWindowAttributes(hwnd, RGB(0, 0, 0), opticaly, LWA_ALPHA);
                ShowWindow(hwnd, opticaly > 0 ? SW_SHOW : SW_HIDE);
                if (GetAsyncKeyState(key66) & 0x1) hide = !hide;




                std::time_t CurrentTime = std::time(0);
                std::string expiryTimestamp = KeyAuthApp.data.expiry;
                int seconds, hours, minutes, days, weeks;
                string time = KeyAuthApp.data.expiry;
                int totalSecond = atoi(time.c_str());
                minutes = (totalSecond % 3600) / 60;
                hours = (totalSecond % 86400) / 3600;
                days = totalSecond / (24 * 3600);
                string days_S = to_string(days).c_str();

                std::string expiry = tm_to_readable_time(timet_to_tm(string_to_timet(KeyAuthApp.data.expiry)));

         
         

                if (GetAsyncKeyState(VK_DELETE) & 1)
                {
                    exit(0);
                }

                


                ImGuiStyle* style = &ImGui::GetStyle();

                const ImVec2& pos = GetWindowPos();
                const ImVec2& region = GetContentRegionMax();
                const ImVec2& spacing = style->ItemSpacing;



           

                ImGui::GetBackgroundDrawList()->AddRectFilledMultiColor(pos, pos + region, GetColorU32(c::bg::topbar, 1.f), GetColorU32(c::bg::topbar, 1.f), GetColorU32(c::black, 0.4f), GetColorU32(c::black, 0.4f), c::bg::rounding);

                ImGui::GetBackgroundDrawList()->AddRectFilled(pos + ImVec2(145, 60), pos + region, GetColorU32(c::bg::container), c::bg::rounding, ImDrawFlags_RoundCornersBottomRight);
                ImGui::GetBackgroundDrawList()->AddRectFilled(pos + ImVec2(145, 0), pos + ImVec2(region.x, 60), GetColorU32(c::bg::topbar), c::bg::rounding, ImDrawFlags_RoundCornersTopRight);
                ImGui::GetBackgroundDrawList()->AddLine(pos + ImVec2(0, 60), pos + ImVec2(region.x, 60), GetColorU32(c::bg::stroke), 1.f);

                ImTextureID logo_texture = (ImTextureID)texture::logoo;

                ImVec2 logo_size = ImVec2(30, 30); 
                ImVec2 logo_pos = pos + ImVec2(region.x - (60 / 2) - (logo_size.x / 2), (60 / 2) - (logo_size.y / 2));

                
                float circle_radius = 20.0f; 
                ImGui::GetBackgroundDrawList()->AddCircle(pos + ImVec2(region.x - (60 / 2), (60 / 2)), circle_radius, ImGui::GetColorU32(c::accent), 400.f, 2.f);
    
                ImGui::GetBackgroundDrawList()->AddImage(logo_texture, logo_pos, logo_pos + logo_size);

                ImVec2 mouse_pos = ImGui::GetIO().MousePos;
                bool is_hovered = ImGui::IsMouseHoveringRect(logo_pos, logo_pos + logo_size);

                if (is_hovered && ImGui::IsMouseClicked(0)) {
               
                    const char* url = "https://bloodysharp.github.io/"; 
                     #ifdef _WIN32
                    ShellExecuteA(nullptr, "open", url, nullptr, nullptr, SW_SHOWNORMAL);
                     #elif __APPLE__

                      #else   

                    #endif
                }


                ImGui::GetBackgroundDrawList()->PushClipRect(pos + ImVec2(145, 60), pos + ImVec2(region), true);
                ImGui::GetBackgroundDrawList()->AddShadowCircle(pos + ImVec2(145, 160), 100, ImGui::GetColorU32(c::accent, 0.15f), 400.f, ImVec2(0, 0), 0);
                ImGui::GetBackgroundDrawList()->AddShadowCircle(pos + ImVec2(region.x, 160), 100, ImGui::GetColorU32(c::accent, 0.15f), 400.f, ImVec2(0, 0), 0);
                ImGui::GetBackgroundDrawList()->AddShadowCircle(pos + ImVec2((145 + region.x) / 2, region.y), 100, ImGui::GetColorU32(c::accent, 0.15f), 400.f, ImVec2(0, 0), 0);
                ImGui::GetBackgroundDrawList()->PopClipRect();

                edited::RenderTextColor(font::inter_medium_big, pos, pos + ImVec2(145, 60), GetColorU32(c::ColorRojas), "HyperV", ImVec2(0.5, 0.5));

                ImGui::SetCursorPos(ImVec2(10, 70));
                BeginGroup();
                {
                    ID3D11ShaderResourceView* pageShortcuts[4] = { texture::ragebot, texture::visuals, texture::legitbot, texture::settings /*texture::world,*/ /*texture::settings*/ };
                    for (int i = 0; i < 4; i++) if (edited::Pages(i == var::page, var::pageNames[i], pageShortcuts[i], var::buttonSize)) var::page = i;
                }
                EndGroup();



                
                ImGui::SetCursorPos(ImVec2(120, 60 - 45)); 

                // Dibuja el botón
                edited::ICObutton(font::icomoon_default, "ñ", ImVec2(25, 35));

                ImGui::SameLine(0, 10);

               
                ImGui::InputTextEx("q", "Search", var::search, IM_ARRAYSIZE(var::search), ImVec2(220, 35), NULL);

                ImGui::SameLine(0, 10); 





                var::tab_alpha = ImClamp(var::tab_alpha + (15.f * ImGui::GetIO().DeltaTime * (var::page == var::active_tab ? 1.f : -1.f)), 0.f, 1.f);
                if (var::tab_alpha == 0.f && var::tab_add == 0.f) var::active_tab = var::page;

                var::tab_right = ImLerp(var::tab_right, var::page == var::active_tab ? 0.f : c::bg::size.x, ImGui::GetIO().DeltaTime * 13.f);
                var::tab_left = ImLerp(var::tab_left, var::interactive ? c::bg::size.x : 0.f, ImGui::GetIO().DeltaTime * 13.f);

                if (var::tab_alpha == 0.f) var::interactive = true;
                if (var::interactive && var::tab_left >= (c::bg::size.x - 0.6f)) var::interactive = false;

                ImGui::SetCursorPos(!var::interactive ? ImVec2(145.f + var::tab_right, 60.f) : ImVec2(-c::bg::size.x + (145.f + var::tab_left), 60.f));

                PushClipRect(pos + ImVec2(145, 60), pos + ImVec2(c::bg::size.x, c::bg::size.y), true);
                ImGui::BeginChild("CONTAINER", ImVec2(region.x - 145, region.y - 60));
                {
                    if (var::active_tab == 0)
                    {
                        ImGui::BeginGroup();
                        {
                            edited::BeginChild("Aimbot Conditions", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {                            



                                // Verifica si se interactúa con el checkbox
                                if (edited::CheckboxWithPopup(false, "Enable Aimbot", "-", &var::check[29], NULL, NULL, NULL, NULL, NULL, NULL, NULL)) {
                                    // Verifica si el checkbox ahora está activado
                                    if (var::check[29]) {
                                        // Agrega la notificación
                                        notificationSystem.AddNotification("2", "Enable Aimbot :", "  Activado !", 2000, GetColorU32(c::element::notify::green_status));
                                    }
                                }

                               


                                static int key = 2;
                                edited::KeybindRojas("Aimbot Key", "", &key1);

                                static int select = 0;
                                const char* items[1]{ "Neck" };

                                edited::Combo("Target", &select, items, IM_ARRAYSIZE(items));

          

                                static int fov1 = 120;
                                edited::SliderInt("Aim Fov", &fov1, 0, 360);

                                

                                static int fov = 4000;
                                edited::SliderInt("Aim Distance", &fov, 0, 6000);


                                ImGui::Spacing();
                                
                     
                           
                            }
                            edited::EndChild();

                            
                              
                            
                        }
                        ImGui::EndGroup();

                        ImGui::SameLine();

                        ImGui::BeginGroup();
                        {
                            edited::BeginChild("Sniper Conditions", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {                       
                            
                                if (edited::CheckboxWithPopup(false, "Aim Sniper", "-", &var::check[28], NULL, NULL, NULL, NULL, NULL, NULL, NULL)) {
                                
                                    if (var::check[28]) {
                                     
                                        notificationSystem.AddNotification("2", "Aim Sniper :", "  Activado !", 2000, GetColorU32(c::element::notify::green_status));
                                    }
                                }


                                edited::CheckboxWithPopup(false, "Aim Sniper Scope", "-", &var::check[28], NULL, NULL, NULL, NULL, NULL, NULL, NULL);

                                edited::CheckboxWithPopup(false, "Quick Change Sniper", "-", &var::check[28], NULL, NULL, NULL, NULL, NULL, NULL, NULL);

                                ImGui::Spacing();
                            }
                            edited::EndChild();

                            
                        }
                        ImGui::EndGroup();
                    }
                    else if (var::active_tab == 2)
                    {
                        ImGui::BeginGroup();
                        {
                            edited::BeginChild("Magic Option", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {
                                ImGui::Spacing();

                                edited::CheckboxWithPopup(false, "Magic Bullet V1", "-", &var::check[28], NULL, NULL, NULL, NULL, NULL, NULL, NULL);

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(false, "Magic Bullet V2", "-", &var::check[29], NULL, NULL, NULL, NULL, NULL, NULL, NULL);

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(false, "Magic Bullet Rage", "-", &var::check[30], NULL, NULL, NULL, NULL, NULL, NULL, NULL);

                                ImGui::Spacing();
                            }
                            edited::EndChild();

                            edited::BeginChild("Security Option", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {
                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Anticheat", "-", &var::check[31], NULL, NULL, NULL, false, true, var::col10, picker_flags);

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Security Magic", "-", &var::check[32], NULL, NULL, NULL, false, true, var::col10, picker_flags);

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Security logo", "-", &var::check[33], NULL, NULL, NULL, false, true, var::col10, picker_flags);

                                ImGui::Spacing();
                                ImGui::Spacing();
                            }
                            edited::EndChild();
                        }
                        ImGui::EndGroup();

                        ImGui::SameLine();

                        ImGui::BeginGroup();
                        {
                            edited::BeginChild("Exploits", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {
                                ImGui::Spacing();

                                edited::KeybindRojas("Wallhack - Enabled", "Secure Walhack V2", &key8);

                                if (edited::BeginPopupW("Exploits", "Se Activa y se Desactiva en partida."))
                                {


                                    edited::EndPopupW();

                                }

                                ImGui::Spacing();

               
                                edited::KeybindRojas("Speed Timer", "Speed Timer V2 Modify", &key7);

                                if (edited::BeginPopupW("Exploits", "Se Activa y se Desactiva en partida."))
                                {


                                    edited::EndPopupW();

                                }

                                ImGui::Spacing();

                                edited::KeybindRojas("Speed X99", "Speed X99 Modify", &key6);


                                if (edited::BeginPopupW("Exploits", "Se Activa y se Desactiva en partida."))
                                {


                                    edited::EndPopupW();

                                }


                                ImGui::Spacing();
                               
                            }
                            edited::EndChild();

                            edited::BeginChild("Vision Exploits", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {

                                edited::CheckboxWithPopup(true, "Exploits - Enabled", "-", &var::check[27], NULL, NULL, NULL, false, true, var::col11, picker_flags);

                                ImGui::Spacing();

                                edited::Combo("Select Exploits", &var::selected[4], var::items, IM_ARRAYSIZE(var::items), 4);

                                ImGui::Spacing();
                            }
                            edited::EndChild();
                        }
                        ImGui::EndGroup();
                    }

                    if (var::active_tab == 1)
                    {
                        ImGui::BeginGroup();
                        {
                            edited::BeginChild("Esp Player", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {
                               

                                edited::CheckboxWithPopup(true, "Esp Holograma 3d", "", &var::check[5], &var::key[5], &var::m[5], &var::value[5], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                if (edited::BeginPopupW("Esp Holograma", "Se aplica donde sea."))
                                {


                                    edited::EndPopupW();

                                }

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Esp Holograma White", "", &var::check[6], &var::key[6], &var::m[6], &var::value[6], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                if (edited::BeginPopupW("Esp Holograma", "Se aplica donde sea."))
                                {


                                    edited::EndPopupW();

                                }

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Esp Holograma Red", "", &var::check[7], &var::key[7], &var::m[7], &var::value[7], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                if (edited::BeginPopupW("Esp Holograma", "Se aplica donde sea."))
                                {


                                    edited::EndPopupW();

                                }

                                ImGui::Spacing();


                                edited::CheckboxWithPopup(true, "Esp Holograma Cyan", "", &var::check[8], &var::key[8], &var::m[8], &var::value[8], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                if (edited::BeginPopupW("Esp Holograma", "Se aplica donde sea."))
                                {


                                    edited::EndPopupW();

                                }

                                ImGui::Spacing();


                                edited::CheckboxWithPopup(true, "Esp Holograma Blue", "", &var::check[9], &var::key[9], &var::m[9], &var::value[9], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                if (edited::BeginPopupW("Esp Holograma", "Se aplica donde sea."))
                                {


                                    edited::EndPopupW();

                                }

                                ImGui::Spacing();



                                edited::CheckboxWithPopup(true, "Esp Holograma Moco", "", &var::check[10], &var::key[10], &var::m[10], &var::value[10], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                if (edited::BeginPopupW("Esp Holograma", "Se aplica donde sea."))
                                {


                                    edited::EndPopupW();

                                }

                                ImGui::Spacing();



                                edited::CheckboxWithPopup(true, "Esp Holograma Rgb", "", &var::check[11], &var::key[11], &var::m[11], &var::value[11], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                if (edited::BeginPopupW("Esp Holograma", "Se aplica donde sea."))
                                {


                                    edited::EndPopupW();

                                }

                                ImGui::Spacing();


                                edited::CheckboxWithPopup(true, "Esp Holograma Box Rgb", "", &var::check[12], &var::key[12], &var::m[12], &var::value[12], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                if (edited::BeginPopupW("Esp Holograma", "Se aplica donde sea."))
                                {


                                    edited::EndPopupW();

                                }

                            }
                            edited::EndChild();
                        }
                        ImGui::EndGroup();

                        ImGui::SameLine();

                        ImGui::BeginGroup();
                        {
                            edited::BeginChild("Esp Option", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {

                                static int espline = 6;
                                edited::SliderInt("Esp Distance", &espline, 0, 15);

                                ImGui::Spacing();

                                static int Espboxdistance = 5;
                                edited::SliderInt("Esp Box Distance", &Espboxdistance, 0, 8);

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Esp Line", "", &var::check[13], &var::key[13], &var::m[13], &var::value[13], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                if (edited::BeginPopupW("Esp Vip", "Se Aplia en entrenamiento."))
                                {


                                    edited::EndPopupW();

                                }

                                edited::CheckboxWithPopup(true, "Esp Healt", "", &var::check[14], &var::key[14], &var::m[14], &var::value[14], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);


                                if (edited::BeginPopupW("Esp Vip", "Se Aplia en entrenamiento."))
                                {


                                    edited::EndPopupW();

                                }

                                edited::CheckboxWithPopup(true, "Esp Box", "", &var::check[15], &var::key[15], &var::m[15], &var::value[15], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);


                                if (edited::BeginPopupW("Esp Vip", "Se Aplia en entrenamiento."))
                                {


                                    edited::EndPopupW();

                                }

                                edited::ColorEdit4("Esp Color Line", color1, picker_flags);

                                edited::ColorEdit4("Esp Color Box", color2, picker_flags);


                            }
                            edited::EndChild();

                            edited::BeginChild("Esp Glow Option", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {
                                edited::CheckboxWithPopup(true, "Esp Glow", "", &var::check[16], &var::key[16], &var::m[16], &var::value[16], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);



                                if (edited::BeginPopupW("Esp Glow", "Se Aplia en donde sea."))
                                {


                                    edited::EndPopupW();

                                }


                                static int espline = 6;
                                edited::SliderInt("Esp Glow Size", &espline, 0, 15);

                                edited::ColorEdit4("Esp Glow Color", color3, picker_flags);
                            }
                            edited::EndChild();
                        }
                        ImGui::EndGroup();
                    }

                    if (var::active_tab == 3)
                    {
                        ImGui::BeginGroup();
                        {
                            edited::BeginChild("Main Option", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {
                                ImGui::Spacing();

                                internet = edited::Checkbox("Block Red", &Rojas::internet);

                                if (edited::BeginPopupW("Red", "Permite bloquear el acceso a Internet\n dentro del emulador."))
                                {


                                    edited::EndPopupW();

                                }

                              if (internet) {
                                  if (Rojas::internet) {
                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In1\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5
                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In1\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5

                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In2\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4
                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In2\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4

                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In3\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_msi2\\HD-Player.exe\"", SW_HIDE); //Msi 4
                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In3\" dir=out action=block program=\"%ProgramFiles%\\Bluestacks_msi2\\HD-Player.exe\"", SW_HIDE);; //Msi 4

                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In6\" dir=in action=block program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5 xxx
                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In6\" dir=out action=block program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE);; //Msi 5 xxx

                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In4\" dir=in action=block program=\"%ProgramData%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5
                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In4\" dir=out action=block program=\"%ProgramData%\\Bluestacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5

                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In5\" dir=in action=block program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gaga
                                      WinExec("netsh advfirewall firewall add rule name=\"FF Block In5\" dir=out action=block program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gaga



                                      MemoryLogs = "Block Red :  Enabled !";

                                      {
                                          notificationSystem.AddNotification("2", "Block Red :", "  Enabled !", 2000, GetColorU32(c::element::notify::green_status));
                                      };

                                  }
                                  else {

                                      WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_nxt\\HD-Player.exe\"", SW_HIDE); //Bluestacks 5
                                      WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks\\HD-Player.exe\"", SW_HIDE); //Bluestacks 4
                                      WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_msi2\\HD-Player.exe\"", SW_HIDE); //Msi 4
                                      WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5 xxx
                                      WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramData%\\BlueStacks_msi5\\HD-Player.exe\"", SW_HIDE); //Msi 5
                                      WinExec("netsh advfirewall firewall delete rule name=all program=\"%ProgramFiles(x86)%\\SmartGaGa\\ProjectTitan\\Engine\\ProjectTitan.exe\"", SW_HIDE); //Smart Gag

                                      MemoryLogs = "Block Red :  Disabled !";

                                      {
                                          notificationSystem.AddNotification("2", "Block Red :", "  Disabled !", 2000, GetColorU32(c::element::notify::green_status));
                                      };
                                  }
                              }

                              ImGui::Spacing();

                              if (edited::Button("Discord | Bloodysharp", ImVec2(260, 35)))
                              {


                                  ShellExecute(NULL, "open", "https://bloodysharp.github.io/", NULL, NULL, SW_SHOWNORMAL);


                              }

                              if (edited::Button("Developer | Bloodysharp", ImVec2(260, 35)))
                              {


                                  ShellExecute(NULL, "open", "https://bloodysharp.github.io/", NULL, NULL, SW_SHOWNORMAL);


                              }

                              if (edited::Button("Youtube | Bloodysharp", ImVec2(260, 35)))
                              {


                                  ShellExecute(NULL, "open", "https://bloodysharp.github.io/", NULL, NULL, SW_SHOWNORMAL);


                              }

                            }
                            edited::EndChild();

                           edited::BeginChild("Bypass Screen", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {

                               
           
                               edited::KeybindRojas("Hide Menu", "Bypass Screen", &key66);

                               if (edited::BeginPopupW("hide menu", "Sirve Para  ocultar la interfaz durante\n la transmision de Pantalla."))
                               {


                                   edited::EndPopupW();

                               }
                               
                                ImGui::Spacing();

                               xd2 = edited::Checkbox("Stream Mode", &Rojas::xd2);


                               ImGui::Spacing();                      

                               if (xd2)
                               {
                                   if (Rojas::xd2) {
                                       SetWindowDisplayAffinity(GetActiveWindow(), WDA_EXCLUDEFROMCAPTURE);
                                       ITaskbarList* pTaskList = NULL;
                                       HRESULT initRet = CoInitialize(NULL);
                                       HRESULT createRet = CoCreateInstance(CLSID_TaskbarList,
                                           NULL,
                                           CLSCTX_INPROC_SERVER,
                                           IID_ITaskbarList,
                                           (LPVOID*)&pTaskList);

                                       if (createRet == S_OK)
                                       {

                                           pTaskList->DeleteTab(GetActiveWindow());

                                           pTaskList->Release();
                                       }

                                       CoUninitialize();

                                       MemoryLogs = "Stream Mode :    Activado !";

                                       {
                                           notificationSystem.AddNotification("2", "Stream Mode :", "  Activado !", 2000, GetColorU32(c::element::notify::green_status));
                                       };

                                   }
                                   else {
                                       SetWindowDisplayAffinity(GetActiveWindow(), WDA_NONE);
                                       ITaskbarList* pTaskList = NULL;
                                       HRESULT initRet = CoInitialize(NULL);
                                       HRESULT createRet = CoCreateInstance(CLSID_TaskbarList,
                                           NULL,
                                           CLSCTX_INPROC_SERVER,
                                           IID_ITaskbarList,
                                           (LPVOID*)&pTaskList);

                                       if (createRet == S_OK)
                                       {
                                           pTaskList->AddTab(GetActiveWindow());

                                           pTaskList->Release();
                                       }

                                       CoUninitialize();

                                       {
                                             notificationSystem.AddNotification("2", "Stream Mode :", "  Desactivado !", 2000, GetColorU32(c::element::notify::green_status));
                                       };

                                       MemoryLogs = "Stream Mode :    Desactivado !";


                                   }
                               }

                            }
                            edited::EndChild();
                        }
                        ImGui::EndGroup();

                        ImGui::SameLine();

                        ImGui::BeginGroup();
                        {
                            edited::BeginChild("Extras Tool", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {
                                ImGui::Spacing();

                                edited::ColorEdit4("Main Color", color, picker_flags);

                                if (edited::BeginPopupW("Color menu", "Configure los colores del Panel\n segun sus preferencias."))
                                {


                                    edited::EndPopupW();

                                }

                                edited::ICObutton(font::icomoon_default, "v", ImVec2(25, 35)); 

                                if (edited::BeginPopupW("preview", "Click Derecho para desactivar o Activar el Npc Target Advanced"))
                                {
                                    edited::CheckboxWithPopup(false, "Activar o Desativar Npc Target Advanced", "-", &esp_preview::active_esp_preview, NULL, NULL, NULL, NULL, NULL, NULL, NULL);

                                    edited::EndPopupW();

                                }
                            }
                            edited::EndChild();

                            edited::BeginChild("Main particle", ImVec2((region.x - (145 + spacing.x * 3)) / 2, 0));
                            {                           
                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Particle Triangle", "", &var::triangleparticle666, &var::key[17], &var::m[17], &var::value[17], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Particle Logo", "", &var::check[18], &var::key[18], &var::m[18], &var::value[18], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Particle Heart", "", &var::check[19], &var::key[19], &var::m[19], &var::value[19], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Particle Beart", "", &var::check[20], &var::key[20], &var::m[20], &var::value[20], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                                ImGui::Spacing();

                                edited::CheckboxWithPopup(true, "Particle Worm", "", &var::check[21], &var::key[21], &var::m[21], &var::value[21], true, true, var::col1, picker_flags | ImGuiColorEditFlags_NoAlpha);

                              ImGui::Spacing();

                            }
                            edited::EndChild();
                        }
                        ImGui::EndGroup();
                    }
                    ImGui::EndChild();


                }
                PopClipRect();

                notificationSystem.DrawNotifications();
            }
            ImGui::End();

            SetNextWindowPos(ImVec2(645, 10));

            PushStyleColor(ImGuiCol_WindowBg, GetColorU32(c::element::info_bar::filling));
            PushStyleColor(ImGuiCol_Border, GetColorU32(c::element::info_bar::stroke));
            PushStyleVar(ImGuiStyleVar_WindowBorderSize, 1.f);
            PushStyleVar(ImGuiStyleVar_WindowRounding, c::element::rounding);
            PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(10, 10));
            PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(10, 10));


            
            static bool initialized = false;
            if (!initialized)
            {
                srand(static_cast<unsigned int>(time(nullptr)));
                initialized = true;
            }

            static float lastUpdateTime = 0.0f;
            static int currentFPS = 119;
            static int currentPING = 49;

            float currentTime = ImGui::GetTime(); 
            if (currentTime - lastUpdateTime >= 1.0f) 
            {
                currentFPS = RandomRange(30, 144);
                currentPING = RandomRange(20, 100);
                lastUpdateTime = currentTime;
            }

            // Obtener la hora actual
            std::time_t now = std::time(nullptr);
            std::tm* localTime = std::localtime(&now);
            std::stringstream timeStream;
            timeStream << std::put_time(localTime, "%I:%M %p"); 
            std::string currentTimeString = timeStream.str();

            // Obtener la información del país actual
            std::string currentCountry = GetCurrentCountry();

            Begin("INFO_BAR", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_AlwaysAutoResize);
            {
                const ImVec2& pos = GetWindowPos();
                const ImVec2& region = GetContentRegionMax();
                const ImVec2& spacing = style->ItemSpacing;

                struct InfoBoxData {
                    const char* icon;
                    std::string label;
                    ImVec2 size;
                };

                std::vector<InfoBoxData> infoBoxes = {
                    {"g", "Hyper V", ImVec2(150, 40)},
                    {"x", (" " + currentCountry).c_str(), ImVec2(150, 40)}, 
                    {"d", (std::string("FPS: ") + std::to_string(currentFPS)).c_str(), ImVec2(100, 40)},
                    {"j", (std::string("PING: ") + std::to_string(currentPING) + "ms").c_str(), ImVec2(100, 40)},
                    {"i", currentTimeString.c_str(), ImVec2(100, 40)}  
                };

                for (const auto& box : infoBoxes) {
                    edited::info_box(box.icon, box.label.c_str(), box.size);

                    if (&box != &infoBoxes.back()) {
                        ImGui::SameLine();
                    }
                }
            }
            End();
            PopStyleVar(4);
            PopStyleColor(2);
      


        }
        ImGui::Render();
        const float clear_color_with_alpha[4] = { 0.f, 0.f, 0.f, 0.f };
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, nullptr);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, clear_color_with_alpha);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

        g_pSwapChain->Present(1, 0); 
    }

    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    CleanupDeviceD3D();
    ::DestroyWindow(hwnd);
    ::UnregisterClassW(wc.lpszClassName, wc.hInstance);

    return 0;
}

bool CreateDeviceD3D(HWND hWnd)
{
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;

    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    HRESULT res = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    if (res == DXGI_ERROR_UNSUPPORTED)
        res = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_WARP, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    if (res != S_OK)
        return false;

    CreateRenderTarget();
    return true;
}

void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = nullptr; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = nullptr; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = nullptr; }
}

void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, nullptr, &g_mainRenderTargetView);
    pBackBuffer->Release();
}

void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = nullptr; }
}

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:
        if (wParam == SIZE_MINIMIZED)
            return 0;
        g_ResizeWidth = (UINT)LOWORD(lParam);
        g_ResizeHeight = (UINT)HIWORD(lParam);
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU)
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProcW(hWnd, msg, wParam, lParam);
}
