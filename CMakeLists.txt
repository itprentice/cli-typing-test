cmake_minimum_required(VERSION 3.20)

#setting project name
project(typetest)

add_executable(typetest)

#adding base-classes subdirectory
add_subdirectory(base-classes)
#adding main classes
add_subdirectory(main-classes)

target_link_libraries(typetest PUBLIC base-classes)
target_include_directories(typetest PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/base-classes")