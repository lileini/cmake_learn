# 创建一个CMakeLists.txt文件，并编写一个CMakeLists.txt文件，该文件能够创建一个可执行文件。
cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)
add_definitions(-g)
option(USE_MYMATH "Use tutorial provided math implementation" ON)

# if(USE_MYMATH)
#     include_directories("${PROJECT_SOURCE_DIR}/math")
#     add_subdirectory(math)
#     set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
# endif()

add_executable(MyProject test.cpp)