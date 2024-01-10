cmake_minimum_required(VERSION 3.0)
project(jpegTOpngProject)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    src/main.cpp
    src/conversion.cpp
    src/conversion.hpp
)

add_library(conversion_lib ${SOURCES})

target_link_libraries(conversion_lib stb_image stb_image_write)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(conversion_tests tests/conversion_tests.cpp)

target_link_libraries(conversion_tests ${GTEST_LIBRARIES} pthread conversion_lib)


