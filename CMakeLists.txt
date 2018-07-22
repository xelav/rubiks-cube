cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp)

find_package (OpenGL REQUIRED)
#find_package(GLEW REQUIRED)
#if (GLEW_FOUND)
#    include_directories(${GLEW_INCLUDE_DIRS})
#    link_libraries(${GLEW_LIBRARIES})
#endif()

# add_subdirectory(lib/glfw-3.2.1)
# add_subdirectory(lib/glm)
# add_subdirectory(lib/freetype-2.8)

#include_directories(${FREETYPE_INCLUDE_DIRS})
include_directories(${OPENGL_INCLUDE_DIRS})
#include_directories($(GLEW_INCLUDE_DIRS))
#include_directories(${CMAKE_INCLUDE_CURRENT_DIR} ${GLUT_INCLUDE_DIRS})

set(CMAKE_EXE_LINKER_FLAGS -static)

set(SOURCE_FILES main.cpp rubik.h rubik.cpp window.cpp main.h)

add_executable(untitled ${SOURCE_FILES} window.cpp)

set (CMAKE_CXX_FLAGS "-L")

message(WARNING "${FREETYPE_INCLUDE_DIRS}")

target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES})
#target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARIES})
#target_link_libraries(${PROJECT_NAME} ${FREETYPE_LIBRARIES})
