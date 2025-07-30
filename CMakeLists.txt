cmake_minimum_required(VERSION 3.28)

project(calculator)

include_directories(src/include)
file(GLOB sources "src/*.cc")
add_executable(calci ${sources})