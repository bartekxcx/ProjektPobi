cmake_minimum_required(VERSION 3.4)

set (-Wall -Wpedantic -Wextra)

project(IntroductionProject)
enable_language(CXX)
add_subdirectory(library)
add_subdirectory(program)
