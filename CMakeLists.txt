cmake_minimum_required(VERSION 3.10)

project(BoronTest)

add_library(BoronTest INTERFACE)

target_include_directories(BoronTest INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)