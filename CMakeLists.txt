cmake_minimum_required (VERSION 3.5)

include_directories(./log)
include_directories(./include)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -static")

file (GLOB_RECURSE libfiles "${PROJECT_SOURCE_DIR}/libsrc/*cpp")
add_library(libargparser STATIC ${libfiles})