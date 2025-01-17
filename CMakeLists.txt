cmake_minimum_required(VERSION 3.30)
project(cpp_beginner)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(mylib INTERFACE)

aux_source_directory(src DIR_SRCS)


# Add the executable
add_executable(${PROJECT_NAME} ${DIR_SRCS} src/code1.cpp)