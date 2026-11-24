// main.cpp — entry point. Wires config and subsystems together.

#include "bfautofarm/settings.h"
#include "bfautofarm/grinder.h"
#include "bfautofarm/quests.h"
#include "bfautofarm/raids.h"
#include "bfautofarm/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    bfautofarm::Settings settings = bfautofarm::Settings::load_default();
    bfautofarm::Grinder grinder(settings.store_path);
    bfautofarm::Quests quests(settings.store_path);
    bfautofarm::Raids raids(settings.store_path);
    bfautofarm::Cli cli(settings.store_path);
    std::fprintf(stderr, "[bf-autofarm] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
