cmake_minimum_required(VERSION 3.20)
project(Learning_Cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Rule 1: a .cpp directly inside a ch* folder = its own program
file(GLOB SINGLE_SOURCES CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/ch*/*.cpp)
foreach(src ${SINGLE_SOURCES})
    get_filename_component(name ${src} NAME_WE)
    add_executable(lesson_${name} ${src})
endforeach()

# Rule 2: a subfolder inside a ch* folder = ONE program made of all its .cpp files
file(GLOB PROJECT_DIRS LIST_DIRECTORIES true CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/ch*/*)
foreach(dir ${PROJECT_DIRS})
    if(IS_DIRECTORY ${dir})
        file(GLOB dir_sources CONFIGURE_DEPENDS ${dir}/*.cpp)
        if(dir_sources)
            get_filename_component(name ${dir} NAME)
            add_executable(project_${name} ${dir_sources})
        endif()
    endif()
endforeach()