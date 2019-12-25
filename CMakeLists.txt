cmake_minimum_required(VERSION 3.10)

# Specify the C++ standard
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set the project name  
project(leet_speak)

# Add project files
# CMAKE_CURRENT_.. is where the currently processed CMakeLists.txt file is located
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include/")
# set(SOURCES src/mainapp.cpp src/Student.cpp src/...)
# file(GLOB SOURCES "src/*.cpp")        # this is equivalent to above and sets the variable SOURCES
file(GLOB SRCFILES "src/*.cpp")        # this is equivalent to above and sets the variable SRCFILES

# Create the executable
include(CheckCXXCompilerFlag)
check_cxx_compiler_flag("-std=c++11" COMPILER_SUPPORTS_CXX11)
check_cxx_compiler_flag("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()
add_compile_options(-Wall -g)

add_library(lib ${SRCFILES})
add_executable(${PROJECT_NAME} "main.cpp")
