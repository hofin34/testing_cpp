cmake_minimum_required(VERSION 3.16)
project(TestCpp)

set(CMAKE_CXX_STANDARD 14)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})



# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests ${CMAKE_CURRENT_LIST_DIR}/tests_main.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)