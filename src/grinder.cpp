// grinder.cpp — part of bf-autofarm.

#include "bfautofarm/grinder.h"

#include <cstdio>

namespace bfautofarm {

Grinder::Grinder(const std::string& config_path)
    : config_path_(config_path) {}

void Grinder::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Grinder::run() {
    if (verbose_) std::fprintf(stderr, "[bf-autofarm] grinder: run\n");
    // core logic lives here
    return true;
}

}  // namespace bfautofarm
