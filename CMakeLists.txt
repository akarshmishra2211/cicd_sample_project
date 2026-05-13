cmake_minimum_required(VERSION 3.10)

project(CppCICDProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

# Main application
add_executable(myapp
    src/main.cpp
    src/mathUtils.cpp
)

# Enable testing
enable_testing()

# Find GoogleTest
find_package(GTest REQUIRED)

# Test executable
add_executable(runTests
    tests/testMath.cpp
    src/mathUtils.cpp
)

target_include_directories(runTests PRIVATE include)

target_link_libraries(runTests GTest::GTest GTest::Main)

# Register test
add_test(NAME MathTests COMMAND runTests)