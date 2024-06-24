cmake_minimum_required(VERSION 3.9)

project(numeric VERSION 0.0.1 LANGUAGES CXX)

# add_subdirectory(src)
add_executable(lu
  lu.cc
  src/doolittle.cc
  src/print.cc
  src/product.cc)
include_directories(lu PUBLIC include)
