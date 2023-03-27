cmake_minimum_required(VERSION 3.24)
project(To_be__or_not_to_be)

set(CMAKE_APPLE_SILICON_PROCESS, arm64)
set(CMAKE_OSX_ARCHITECTURES, arm64)
set(CMAKE_CXX_STANDARD 17)

find_package(raylib REQUIRED)


add_executable(To_be__or_not_to_be main.cpp Settings.cpp Settings.h Game.cpp Game.h Collision.cpp Collision.h)
include_directories(${raylib_INCLUDE_DIRS} )
target_link_libraries(To_be__or_not_to_be ${raylib_LIBRARY})