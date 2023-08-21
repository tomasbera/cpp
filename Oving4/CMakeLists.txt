cmake_minimum_required(VERSION 3.1)

project(ovinger)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM gtkmm-3.0 REQUIRED)

include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})

add_executable(oppgave1 ../oppgave1.cpp)
target_link_libraries(oppgave1 ${GTKMM_LIBRARIES})

add_executable(oppgave2 ../oppgave2.cpp)
target_link_libraries(oppgave2 ${GTKMM_LIBRARIES})
