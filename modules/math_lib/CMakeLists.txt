cmake_minimum_required(VERSION 3.22)

# set variable but not global
set(MATH math_lib)
set(LIB_FILES math_lib.cpp)

# compile the library
add_library(${MATH} ${LIB_FILES})

# Tell every one (PUBLIC) link or compile library to add its header file to path
target_include_directories(${MATH} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})