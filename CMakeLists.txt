cmake_minimum_required (VERSION 3.25)
project(FSM)
set(CMAKE_C_STANDART 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}" -pthread -lm)

add_executable(fsm main.c)

#add_subdirectory(fsm)
