cmake_minimum_required(VERSION 3.22)

project(linux VERSION 0.0.1)

set(CMAKE_SYSTEM Linux)
set(CMAKE_C_COMPILER "arm-linux-gnueabihf-gcc")

set(CMAKE_C_STANDARD 11)

add_executable(linux hello_world.c hello_world.h)