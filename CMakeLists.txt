cmake_minimum_required (VERSION 3.5)
project(libargparser)

include_directories(./log)
include_directories(./include)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -static")

file (GLOB_RECURSE libfiles "./libsrc/*cpp")

add_library(argparser STATIC ${libfiles})

