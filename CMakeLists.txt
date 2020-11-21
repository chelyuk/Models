####
#
####

cmake_minimum_required(VERSION 3.3)
project(Models VERSION 0.0.1)

add_library(Models_Api INTERFACE)

target_include_directories(
    Models_Api
    INTERFACE include
)

add_executable(
    Models
    src/ADC.cpp
    src/AngleSensor.cpp
    src/main.cpp
    src/System.cpp
)

target_link_libraries(Models Models_Api)