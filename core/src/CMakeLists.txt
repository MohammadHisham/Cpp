# Compile project
add_executable(${PROJECT_NAME} main.cpp)

# Link against your library
target_link_libraries(${PROJECT_NAME} math_lib)

#comment test