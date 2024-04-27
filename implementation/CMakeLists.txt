cmake_minimum_required(VERSION 3.8)
project(testing C)

if(NOT CMAKE_C_STANDARD)
    set(CMAKE_C_STANDARD 99)
endif()

add_executable(${PROJECT_NAME} ./hashMap/tests/main.c ./hashMap/hashMap.c)
