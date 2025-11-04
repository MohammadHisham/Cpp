# Cmake minimum required version to work 3.22 else it will be error
cmake_minimum_required(VERSION 3.22)
# set variable but not global (MATH = math_lib)
set(MATH math_lib)
#Define Variable LIB_FILES = math_lib.cpp math_lib.hpp
set(LIB_FILES math_lib.cpp math_lib.hpp)
# compile the library
add_library(${MATH} ${LIB_FILES})
# print message to check the file
message("Iam in math_lib direction :)")
# Tell every one (PUBLIC) link or compile library to add its header file to path
target_include_directories(${MATH} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})