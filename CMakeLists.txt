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

add_library(Library STATIC my_lib.cpp)

# Add an executable
add_executable(Example_1 main.cpp)

target_link_libraries(Example_1 PUBLIC Library)
