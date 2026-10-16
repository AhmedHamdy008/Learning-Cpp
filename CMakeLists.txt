cmake_minimum_required(VERSION 3.20)
project(Learning_Cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Every .cpp inside a ch* folder becomes its own program
file(GLOB_RECURSE LESSON_SOURCES CONFIGURE_DEPENDS
        ${CMAKE_SOURCE_DIR}/ch*/*.cpp)

foreach(src ${LESSON_SOURCES})
    get_filename_component(name ${src} NAME_WE)
    add_executable(lesson_${name} ${src})
endforeach()