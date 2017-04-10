cmake_minimum_required(VERSION 2.8)
project(BigIntegerCPlusPlus)
set(CMAKE_C_COMPILER clang)
add_definitions(-g2)

include_directories("${PROJECT_SOURCE_DIR}/include/")

add_library(BigIntegerLibrary ${PROJECT_SOURCE_DIR}/src/BigIntComponents/BigInteger.cpp
                              ${PROJECT_SOURCE_DIR}/src/BigIntComponents/LongAddition.cpp
                              ${PROJECT_SOURCE_DIR}/src/BigIntComponents/BigIntUtils.cpp)

add_executable(testSetValue    ${PROJECT_SOURCE_DIR}/src/TestBigInt/TestAddValue.cpp)
add_executable(testAddConcrete ${PROJECT_SOURCE_DIR}/src/TestBigInt/TestAddConcrete.cpp)
add_executable(testAddArg      ${PROJECT_SOURCE_DIR}/src/TestBigInt/TestAddArg.cpp)

target_link_libraries(testSetValue    BigIntegerLibrary)
target_link_libraries(testAddConcrete BigIntegerLibrary)
target_link_libraries(testAddArg      BigIntegerLibrary)
