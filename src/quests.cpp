// quests.cpp — part of bf-autofarm.

#include "bfautofarm/quests.h"

#include <cstdio>

namespace bfautofarm {

Quests::Quests(const std::string& config_path)
    : config_path_(config_path) {}

void Quests::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Quests::run() {
    if (verbose_) std::fprintf(stderr, "[bf-autofarm] quests: run\n");
    // core logic lives here
    return true;
}

}  // namespace bfautofarm
