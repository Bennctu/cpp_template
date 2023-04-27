cmake_minimum_required(VERSION 3.5)
project( operation_testing )

set(CMAKE_CXX_STANDARD 17)
set(CXX_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release")
endif()

if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
  set(CMAKE_CXX_FLAGS "-std=c++17 -g -O3 -Wall")
endif()

add_executable(unit_test ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_link_libraries(unit_test
  PUBLIC
  cpp_template
)
