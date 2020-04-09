cmake_minimum_required(VERSION 3.4)
project(Library)

set(SOURCE_FILES
    src/model/Client.cpp
)
#utwórz bibliotekę typu STATIC, SHARED albo MODULE ze wskazanych źródeł
add_library(Library ${SOURCE_FILES})

target_include_directories(Library PUBLIC include)

include_directories(
 ${CMAKE_CURRENT_SOURCE_DIR}/include
)

enable_testing()


