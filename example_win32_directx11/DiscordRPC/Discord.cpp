#include "Discord.h"
#include "chrono"
#include "../DiscordSDK/src/discord_rpc.h"
static int64_t eptime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

void Discord::Initialize()
{
    DiscordEventHandlers Handle;
    memset(&Handle, 0, sizeof(Handle));
    Discord_Initialize("", &Handle, 1, NULL);
}

void Discord::Update()

{

}
