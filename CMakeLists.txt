cmake_minimum_required(VERSION 3.6)
project(DamonUtils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp util/header/self_string.h util/test_header/base_test.h util/test_header/self_string_test.h util/test_header/common_test.h util/header/self_print.h)
add_executable(DamonUtils ${SOURCE_FILES})