cmake_minimum_required(VERSION 3.30)
project(maman12 C)

set(CMAKE_C_STANDARD 90)

add_executable(maman12 magic.c
        magic.h
        validators.c
        calculations.c
        input_and_output_utils.c)
