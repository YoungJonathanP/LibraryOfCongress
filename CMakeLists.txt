cmake_minimum_required(VERSION 3.14)
project(LibraryOfCongress)

set(CMAKE_CXX_STANDARD 17)

add_executable(LibraryOfCongress Library.cpp Book.cpp Book.h BookShelf.cpp BookShelf.h)