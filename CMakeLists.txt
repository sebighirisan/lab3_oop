cmake_minimum_required(VERSION 3.15)
project(lab3)

set(CMAKE_CXX_STANDARD 14)
set(HEADER_FILES Node.h Tree.h)
set(SOURCE_FILES Node.cpp Tree.cpp)
add_library(lab3_sources STATIC ${SOURCE_FILES} ${HEADER_FILES})
add_executable(lab3 main.cpp)
target_link_libraries(lab3 lab3_sources)
© 2020 GitHub, Inc.