cmake_minimum_required(VERSION 3.12)
project(asn4)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic -std=c++14")

add_executable(asn4 main.cpp heap.hpp designImp.cpp designImp.hpp)