cmake_minimum_required(VERSION 3.13)

if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(daily_coding_challenges main.cpp)
