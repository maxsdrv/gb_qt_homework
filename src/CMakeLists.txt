cmake_minimum_required(VERSION 3.15)

project(gb_qt_homework)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LINK_SEARCH_START_STATIC ON)
set(BUILD_SHARED_LIBS OFF)

add_subdirectory(hw2)

#file(GLOB homeworks LIST_DIRECTORIES true "hw[2]")

#foreach(homework ${homeworks})
 #   add_subdirectory("${homework}")
#endforeach()

