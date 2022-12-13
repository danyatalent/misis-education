# CMakeList.txt : CMake project for geom, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project (geom)

add_library(geom geom.cpp geom.hpp)

add_executable (catmouse catmouse.cpp geom.hpp)

target_link_libraries(catmouse geom)