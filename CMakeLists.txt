cmake_minimum_required (VERSION 3.18)

project(FSM)

set(CMAKE_C_STANDART 11)

find_package(Threads REQUIRED)

add_executable(FSM main.c)

target_link_libraries(FSM ${CMAKE_THREAD_LIBS_INIT})

add_subdirectory(fsm)

include_directories(fsm)
