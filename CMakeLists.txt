cmake_minimum_required(VERSION 3.9)
project(StaticTest)

set(CMAKE_CXX_STANDARD 11)

add_library(libTest SHARED
        src/TExampleClass.cpp
        )
target_include_directories(libTest PUBLIC include)


add_executable(StaticTest main.cpp)
target_link_libraries(StaticTest libTest)
