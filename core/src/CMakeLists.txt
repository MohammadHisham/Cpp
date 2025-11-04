cmake_minimum_required(VERSION 3.22)

project(task1)
set(PROJECT_NAME CMakeTask)
set(SRC_FILE main.cpp)

get_filename_component(MODULES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../modules/math_lib" ABSOLUTE)
add_subdirectory("${MODULES_DIR}" "${CMAKE_BINARY_DIR}/modules/math_lib")

# Compile project
add_executable(${PROJECT_NAME} ${SRC_FILE})

# Link against your library
target_link_libraries(${PROJECT_NAME} PUBLIC math_lib)