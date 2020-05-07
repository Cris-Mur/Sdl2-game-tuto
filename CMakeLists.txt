cmake_minimum_required(VERSION 3.17)
project(Sdl2_game_tuto C)

set(CMAKE_C_STANDARD 99)

find_package(SDL2 REQUIRED COMPONENTS SDL2::SDL2)
include_directories(${SDL2_INCLUDE_DIR})

add_executable(Sdl2_game_tuto source/main.c)
target_link_libraries(Sdl2_game_tuto SDL2::SDL2 ${SDL2_LIBRARY})