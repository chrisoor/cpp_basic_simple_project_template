cmake_minimum_required(VERSION 3.20)
project(Project_Template LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

enable_testing()

add_subdirectory(src ${PROJECT_NAME})
add_subdirectory(tests)
