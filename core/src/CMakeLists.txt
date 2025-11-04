# Cmake minimum required version to work 3.22 else it will be error
cmake_minimum_required(VERSION 3.22)
# Project Name
project(MoSalahTask)
# Define Variable SRC_FILES = main.cpp
set(SRC_FILES main.cpp)
# Executable files
add_executable(${PROJECT_NAME} ${SRC_FILES})
# get the modules direction
get_filename_component(MODULES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../modules/math_lib" ABSOLUTE)
# Call the cmake in modules dircetion 
add_subdirectory("${MODULES_DIR}" "${CMAKE_BINARY_DIR}/modules/math_lib")
# Link the math lib to main
target_link_libraries(${PROJECT_NAME} PUBLIC math_lib)
