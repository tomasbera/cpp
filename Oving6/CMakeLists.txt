cmake_minimum_required(VERSION 3.21)
project(Oving6)



set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(oppgave1 ../oppgave1.cpp)
add_executable(oppgave2 ../oppgave2.cpp)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(oppgave2 PRIVATE Threads::Threads)