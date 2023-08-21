cmake_minimum_required(VERSION 3.1)
project(Oving5)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(oppgave1 ../oppgave1.cpp)
target_link_libraries(oppgave1 ${GTKMM_LIBRARIES})
