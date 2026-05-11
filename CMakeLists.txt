
cmake_minimum_required(VERSION 3.10)

project(CppCICDProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(myapp
    src/main.cpp
    src/mathUtils.cpp
)