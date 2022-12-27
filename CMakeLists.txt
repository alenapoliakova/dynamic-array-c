cmake_minimum_required (VERSION 3.8)

project ("dynamic-array")

add_executable (dynamic-array "string.h" "string.cpp" "dynamic-array.h" "dynamic-array.cpp" "menu.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET dynamic-array PROPERTY CXX_STANDARD 20)
endif()
