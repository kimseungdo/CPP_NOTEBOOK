cmake_minimum_required(VERSION 2.8)

set(pathOPENCV C:/opencv-mingw/build)
set(pathOPENGL C:/opengl-mingw)

include_directories(${pathOPENCV}/include)
include_directories(${pathOPENGL}/GLEW/include)

set(LIBOPENCV ${pathOPENCV}/x64/mingw/lib/libopencv_world410.dll.a)
set(LIBOPENGLEW ${pathOPENGL}/GLEW/)
get_filename_component(ProjectId ${CMAKE_CURRENT_LIST_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} C CXX)

set (CMAKE_CXX_STANDARD 11)

file(GLOB SOURCES  *.cpp)

add_executable(${PROJECT_NAME} ${SOURCES} )
target_link_libraries( ${PROJECT_NAME} ${LIBOPENCV} )
