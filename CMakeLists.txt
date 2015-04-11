project(mylib)
cmake_minimum_required(VERSION 3.0.0)

add_library(lib SHARED
  lib.cc)

find_package(PythonLibs REQUIRED)
find_package(SWIG REQUIRED)

include_directories(${PYTHON_INCLUDE_DIR} ${CMAKE_SOURCE_DIR})

include(${SWIG_USE_FILE})

set_source_files_properties(lib.i
  PROPERTIES
  CPLUSPLUS ON
  SWIG_MODULE_NAME cpp)

swig_add_module(cpp python lib.i)
swig_link_libraries(cpp lib ${PYTHON_LIBRARY})