cmake_minimum_required(VERSION 3.4)
project(Client)

set(SOURCE_FILES
    src/model/Client.cpp
)

add_library(Client ${SOURCE_FILES})

target_include_directories(Client PUBLIC include/model)
enable_testing()

include_directories(
 ${CMAKE_CURRENT_SOURCE_DIR}/include
)
