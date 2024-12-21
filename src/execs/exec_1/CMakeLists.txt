cmake_minimum_required(VERSION 3.20)
set(EXEC_NAME ${PROJECT_NAME}_Exec)
add_executable(${EXEC_NAME} main.cpp)

target_link_libraries(${EXEC_NAME} 
    PRIVATE
        example_library
        ZLIB::ZLIB)

find_package(ZLIB REQUIRED)
