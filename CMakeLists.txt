cmake_minimum_required(VERSION 3.10)

project(conway_sfml)

find_package(SFML 2.6 REQUIRED COMPONENTS graphics window system audio)

add_executable(conway_sfml src/main.cpp)

target_link_libraries(conway_sfml sfml-graphics sfml-window sfml-system sfml-audio)
 
