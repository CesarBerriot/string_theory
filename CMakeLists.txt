cmake_minimum_required(VERSION 3.31)
project(string_theory)

if(NOT DEFINED CMAKE_CXX_STANDARD OR CMAKE_CXX_STANDARD LESS 20)
  message(FATAL_ERROR "String Theory requires C++ 20.")
endif()

add_library(string_theory INTERFACE)
target_include_directories(string_theory INTERFACE include)