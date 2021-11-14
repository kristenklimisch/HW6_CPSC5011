cmake_minimum_required(VERSION 3.17)
project(HW6_CPSC5011)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW6_CPSC5011
        CaesarCipher.h
        CaesarCipher.cpp
        hw6.cpp)
