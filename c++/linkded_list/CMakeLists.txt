cmake_minimum_required(VERSION 3.20)
project(linkded_list)

set(CMAKE_CXX_STANDARD 14)

add_executable(linkded_list main.cpp node.h linked_list.h linked_list.cpp)
