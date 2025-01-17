cmake_minimum_required(VERSION 3.31)
project(cpp_beginner LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(HEADER_FILES ../include)
add_library(mylib src/code1_test.cpp ${HEADER_FILES})
target_include_directories(mylib PRIVATE ${HEADER_FILES})

add_executable(${PROJECT_NAME} main.cpp)