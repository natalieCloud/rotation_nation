cmake_minimum_required(VERSION 3.8)
project(rotation_nation C)

if(NOT CMAKE_C_STANDARD)
    set(CMAKE_C_STANDARD 99)
endif()

add_executable(${PROJECT_NAME}_test_map ./hashMap/tests/main.c ./hashMap/hashMap.c)
