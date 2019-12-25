cmake_minimum_required(VERSION 3.10)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the project name  
project(leet_speak)

# Add project files
# CMAKE_CURRENT_.. is where the currently processed CMakeLists.txt file is located
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include/")
# set(SOURCES src/mainapp.cpp src/Student.cpp src/...)
file(GLOB SOURCES "src/*.cpp")        # this is equivalent to above and sets the variable SOURCES

# Create the executable
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
#add_compile_options(-Wall -g)

add_library(lib ${SOURCES})
target_link_libraries(lib)
add_executable(${PROJECT_NAME} "main.cpp")
target_link_libraries(${PROJECT_NAME} lib)
