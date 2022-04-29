cmake_minimum_required(VERSION 3.15)

project(easy_parser)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

FILE(GLOB_RECURSE SRC_CPP ${PROJEC_SOURCE_DIR}/src *.cpp)
FILE(GLOB_RECURSE SRC_HPP ${PROJEC_SOURCE_DIR}/src *.hpp)
FILE(GLOB_RECURSE SRC_H ${PROJEC_SOURCE_DIR}/src *.h)

add_executable(easy_parser ${SRC_CPP} ${SRC_H} ${SRC_HPP})

target_link_libraries(easy_parser Qt5::Core Qt5::Widgets Qt5::Gui)
