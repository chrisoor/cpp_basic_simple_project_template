cmake_minimum_required(VERSION 3.20)
set(EXEC_NAME ${PROJECT_NAME}_Exec)
add_subdirectory(example_lib)
add_executable(${EXEC_NAME} main.cpp)

target_link_libraries(${EXEC_NAME} PRIVATE example_library)

