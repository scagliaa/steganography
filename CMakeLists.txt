cmake_minimum_required(VERSION 3.25)
project(steganography)

set(CMAKE_CXX_STANDARD 23)

add_executable(steganography src/main.cpp src/steganography/steganography.h src/steganography/image/s_image.h)
