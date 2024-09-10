cmake_minimum_required(VERSION 3.10...3.26)
project(subcriber VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_LIST_DIR}/../include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../include/python/)

# file(GLOB_RECURSE srcs *.hpp *.cpp *.cc *.h)
set(lib_path ${CMAKE_CURRENT_SOURCE_DIR}/../lib)
link_directories(${lib_path})
# find_package(Threads REQUIRED)
add_executable(sub subcriber.cpp)
target_link_libraries(sub ${lib_path}/libcyberlib.a
pthread
atomic
${lib_path}/libgtest.a 
${lib_path}/libprotobuf.a 
${lib_path}/libglog.a 
${lib_path}/libfastrtps.a 
${lib_path}/libfastcdr.a 
${lib_path}/libgflags.a 
${lib_path}/libgmock.a 
${lib_path}/libtinyxml2.a 
${lib_path}/libpython3.10.a 
${lib_path}/libuuid.a 
${lib_path}/libncurses.a
)
# target_compile_definitions(cyberlib PUBLIC GLOG_EXPORT)