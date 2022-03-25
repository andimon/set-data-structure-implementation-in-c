cmake_minimum_required(VERSION 3.21)
project(Set_Implementation C)

set(CMAKE_C_STANDARD 11)

add_executable(Set_Implementation main.c set/set.c set/set.h)
