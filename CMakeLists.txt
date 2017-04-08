cmake_minimum_required(VERSION 2.8)
project(BigIntegerCPlusPlus)
set(CMAKE_C_COMPILER clang)
add_definitions(-g2)

include_directories("${PROJECT_SOURCE_DIR}/include/")

add_library(BigIntegerLibrary ${PROJECT_SOURCE_DIR}/src/BigIntComponents/BigInteger.cpp)

add_executable(test1 ${PROJECT_SOURCE_DIR}/src/TestBigInt/test.cpp)

target_link_libraries(test1 BigIntegerLibrary)
