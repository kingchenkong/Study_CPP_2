# Specify the minimum version.
cmake_minimum_required(VERSION 3.10)

# Specify the project info.
project(demo)

# executable file name: ref to project 
add_executable( ${PROJECT_NAME}  
    src/main.cpp 
    src/utils.h 
    src/Window.h
)    

# Specify C++11 standard
set(CMAKE_CXX_STANDARD 11)  
# For ARM64 architecture.
# set(CMAKE_SYSTEM_NAME Linux)
# set(CMAKE_SYSTEM_PROCESSOR arm)
# set(CMAKE_C_COMPILER aarch64-linux-gnu-gcc)
# set(CMAKE_CXX_COMPILER aarch64-linux-gnu-g++)


