cmake_minimum_required(VERSION 3.1.0)

project(raytracing_in_one_weekend VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_C_STANDARD 20)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# TODO: check guide from Jason about compiler flags
set(COMPILE_FLAGS
    -Wall
    -Wextra
    -pthread
    -Wshadow
    -Wcast-align
    -Wwrite-strings
    -Wcast-qual
    -Wconversion
    -Wunreachable-code
)

set(RELEASE_FLAGS
    -O3
    -D_FORTIFY_SOURCE=2
)

set(DEBUG_FLAGS
    -g
    -O0
    -fverbose-asm
    -fno-inline
)

add_compile_options(${COMPILE_FLAGS})

add_compile_options(
    "$<$<CONFIG:Release>:${RELEASE_FLAGS}>"
    "$<$<CONFIG:Debug>:${DEBUG_FLAGS}>"
)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lstdc++")

add_subdirectory(src)
