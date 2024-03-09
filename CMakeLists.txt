
# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.27)

# Set the project name
project(Example_1 VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# Set variables name
set(LIBRARY_NAME Library_file)
set(EXECUTABLE_NAME Executable_file)

add_subdirectory(configured)
# Define src first because library define out library
# And library is used in out application
add_subdirectory(src)
add_subdirectory(app)
