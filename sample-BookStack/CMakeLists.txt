# Specify the minimum version.
cmake_minimum_required(VERSION 3.9)

# Specify the project info.
project(attempt)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

# Declare the library target.
add_library(${PROJECT_NAME} SHARED
    src/attempt.cpp
    src/attempt.h
)

# For ARM64 architecture.
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_C_COMPILER aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER aarch64-linux-gnu-g++)

# Configure the directories to search for header files.
target_include_directories(${PROJECT_NAME} PRIVATE src)

# Set the version property.
# set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION})

# Set the shared object version property to the project's major version.
# set_target_properties(${PROJECT_NAME} PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})

# Set the public header property to the one with the actual API.
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER src/convert.h)