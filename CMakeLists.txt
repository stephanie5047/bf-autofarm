cmake_minimum_required(VERSION 3.16)
project(bf-autofarm CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(bfautofarm
    src/main.cpp
    src/grinder.cpp
    src/quests.cpp
    src/raids.cpp
    src/cli.cpp
)

target_include_directories(bfautofarm PRIVATE include)

if(WIN32)
    target_link_libraries(bfautofarm PRIVATE userenv)
endif()
