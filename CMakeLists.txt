# Step 0 Create Source and CmakeFile
# Step 1 Create folder name "build"
# Step 2 Come inside build folder
# Step 3 cmake ..       Generating the Build files / Configure the Project
# Step 4 cmake --build .
# Step 5 ./Executable_file_name

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

# Define src first because library define out library
# And library is used in out application
add_subdirectory(src)
add_subdirectory(app)
