cmake_minimum_required(VERSION 3.15)
project(proga3)

set(CMAKE_CXX_STANDARD 20)
find_package(Boost)

add_executable(proga3 main.cpp relise.cpp something.h)