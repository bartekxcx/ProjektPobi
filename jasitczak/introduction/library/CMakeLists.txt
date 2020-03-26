cmake_minimum_required(VERSION 3.4)
project(MathLibrary)

set(SOURCE_FILES
    src/math_helpers.cpp
)
#utwórz bibliotekę typu STATIC, SHARED albo MODULE ze wskazanych źródeł
add_library(MathLibrary ${SOURCE_FILES})

target_include_directories(MathLibrary PUBLIC include)
