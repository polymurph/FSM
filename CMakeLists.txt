cmake_minimum_required (VERSION 3.25)
project(FSM)

set(CMAKE_C_STANDARD 11)
#set(CMAKE_C_STANDARD_REQUIRED ON)
#set(CMAKE_C_EXTENSIONS OFF)

#set(CMAKE_C_COMPILER   i586-mingw32msvc-gcc)

SET (CMAKE_C_COMPILER             "/usr/bin/clang")

add_compile_options(-Wall -Wextra -pedantic -Werror -pthread)

#set(THREADS_PREFER_PTHREAD_FLAG ON)
#find_package(Threads REQUIRED)
#target_link_libraries(fsm PRIVATE Threads::Threads)
add_executable(fsm main.c)

#add_subdirectory(fsm)
