cmake_minimum_required(VERSION 3.1)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)
add_subdirectory(test)

set(Headers
    main.hpp    
)

set(Sources
    main.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

