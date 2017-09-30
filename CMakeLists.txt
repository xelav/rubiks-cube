cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp)

find_package (OpenGL REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS})

include_directories(${CMAKE_INCLUDE_CURRENT_DIR})

set(HEADER_FILES rubik.h)

add_library(mylib rubik.cpp ${HEADER_FILES})

set(SOURCE_FILES main.cpp rubik.h rubik.cpp)

add_executable(untitled ${SOURCE_FILES})

set (CMAKE_CXX_FLAGS "-L")

target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})