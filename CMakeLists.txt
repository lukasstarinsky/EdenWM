cmake_minimum_required(VERSION 3.28)
project(EdenWM)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE HEADER_FILES src/*.hpp)
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)

add_executable(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE X11)
target_precompile_headers(${PROJECT_NAME} PRIVATE src/pch.hpp)