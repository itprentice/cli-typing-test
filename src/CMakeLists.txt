cmake_minimum_required(VERSION 3.24)

#setting project name
project(typetest)

add_executable(typetest)

target_sources(typetest PUBLIC TypMain.cpp)
#adding base-classes subdirectory
add_subdirectory(base-classes)

target_link_libraries(typetest PUBLIC base-classes)
target_include_directories(typetest PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/base-classes")