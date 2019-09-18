cmake_minimum_required(VERSION 3.9.2)

if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(daily_coding_challenges main.cpp)
