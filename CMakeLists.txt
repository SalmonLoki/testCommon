cmake_minimum_required(VERSION 3.13)
project(testCommon)

set(CMAKE_CXX_STANDARD 14)

add_executable(testCommon main.cpp)

find_library(LUA_LIB lua)
target_link_libraries(testCommon "${LUA_LIB}")

target_link_libraries(testCommon ${CMAKE_DL_LIBS})