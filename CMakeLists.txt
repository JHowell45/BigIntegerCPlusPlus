cmake_minimum_required(VERSION 2.8)
project(BigIntegerCPlusPlus)
set(CMAKE_C_COMPILER clang)
add_definitions(-g2)

include_directories("${PROJECT_SOURCE_DIR}/include/")

add_library(BigIntegerLibrary ${PROJECT_SOURCE_DIR}/src/BigInteger.cpp)
