cmake_minimum_required(VERSION 3.16)
project(tetris)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-lncurses")

add_executable(tetris main.cpp)