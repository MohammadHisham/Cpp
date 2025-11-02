# set variable but not global
set(MATH math_lib)

# compile the library
add_library(${MATH} math_lib.cpp)

# Tell every one (PUBLIC) link or compile library to add its header file to path
target_include_directories(${MATH} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})