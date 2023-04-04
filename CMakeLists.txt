cmake_minimum_required(VERSION 3.10)

project(CPlusPlus VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -g")

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/build)

add_subdirectory(Experiment)
add_subdirectory(Functions)
add_subdirectory(MemoryModel)
add_subdirectory(PlacementNew)
add_subdirectory(CPP11)
add_subdirectory(Stlport)

add_subdirectory(Standard)
add_subdirectory(Advanced)

