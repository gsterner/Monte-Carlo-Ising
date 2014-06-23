#Specify the version being used aswell as the language
cmake_minimum_required(VERSION 2.6)
set( CMAKE_CXX_COMPILER "clang++" )
set(CMAKE_CXX_FLAGS "-std=c++11 -stdlib=libc++")

#Name your project here
project(montecarloising)

#Sends the -std=c99 flag to the gcc compiler
#add_definitions(-std=c99)

add_subdirectory(tests)

add_executable(montecarloising main.cpp grid.cpp)
