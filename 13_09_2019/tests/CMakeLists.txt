cmake_minimum_required(VERSION 3.9.2)
project(tests CXX)

INCLUDE(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

ADD_EXECUTABLE(${PROJECT_NAME} test_13_09_2019.cpp)

target_link_directories(${PROJECT_NAME} PRIVATE ${CMAKE_BINARY_DIR}/lib)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/..)

target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS} code_solution_1)

SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

ENABLE_TESTING()
ADD_TEST(NAME code_problem1
         WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/bin
         COMMAND tests)