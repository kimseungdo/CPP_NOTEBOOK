cmake_minimum_required(VERSION 2.8)
#[[주석따리 ]]
get_filename_component(ProjectId ${CMAKE_CURRENT_LIST_DIR} NAME)

string(REPLACE " " "_" ProjectId ${ProjectId})

project(${ProjectId} C CXX)
#컴파일 언어설정 C면 C C++이면 CXX
set (CMAKE_CXX_STANDARD 11)
#언어 버전설정
file(GLOB SOURCES  *.cpp)
#소스파일 컴파일 범위 설정
add_executable(main ${SOURCES} )