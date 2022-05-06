cmake_minimum_required(VERSION 3.15)

project(easy_parser)

set(CMAKE_AUTOMOC ON)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

file(GLOB_RECURSE SRC_CPP ${PROJECT_SOURCE_DIR}/src *.cpp)
file(GLOB_RECURSE SRC_H ${PROJECT_SOURCE_DIR}/src *.h)
file(GLOB_RECURSE SRC_HPP ${PROJECT_SOURCE_DIR}/src *.hpp)

add_executable(easy_parser ${SRC_CPP} ${SRC_H} ${SRC_HPP})

target_link_libraries(easy_parser Qt5::Core Qt5::Widgets Qt5::Gui)
