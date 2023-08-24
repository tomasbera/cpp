cmake_minimum_required(VERSION 3.1)

project(fraction)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(fraction oppgave1/main.cpp oppgave1/fraction.cpp)
add_executable(set oppgave2/main.cpp oppgave2/Set.cpp)
