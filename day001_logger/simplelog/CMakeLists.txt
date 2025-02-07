cmake_minimum_required(VERSION 3.28)
project(simplelog)

set(CMAKE_C_STANDARD 11)

include_directories(include)


add_executable(consoleTest test/consoleTest.c)
target_link_libraries(consoleTest PRIVATE simplelog)

add_executable(fileTest test/fileTest.c)
target_link_libraries(fileTest PRIVATE simplelog)

add_library(simplelog STATIC src/simplelog.c)

target_include_directories(simplelog PRIVATE include)