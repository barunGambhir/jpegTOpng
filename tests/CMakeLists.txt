cmake_minimum_required(VERSION 3.0)
project(jpegTOpngTests)

# Locate GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add a target executable for each test file
add_executable(conversion_tests conversion_tests.cpp)

# Link the test executable with GoogleTest and your project's library
target_link_libraries(conversion_tests ${GTEST_LIBRARIES} pthread)

# Optionally, set the C++ standard
set_property(TARGET conversion_tests PROPERTY CXX_STANDARD 11)
