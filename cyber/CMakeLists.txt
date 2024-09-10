cmake_minimum_required(VERSION 3.10...3.26)
project(cyber VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}../lib)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# 启用汇编语言支持
enable_language(ASM)

# set(CMAKE_CXX_EXTENSIONS cc)
set(3rdpart ${CMAKE_CURRENT_LIST_DIR}/../3rdpart)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/gtest/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/glog/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/protobuf/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/fastrtps/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/fastcdr/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/gflags/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/nolhmann/json-3.10.4/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/gmock/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/tinyxml2/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/python/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/ncurses/include/)
include_directories(${CMAKE_CURRENT_LIST_DIR}/../3rdpart/uuid/include/)

#add_definitions(-DGLOG_NO_EXPORT)
add_definitions(-DGLOG_USE_GLOG_EXPORT)
set(protoc_exe ${3rdpart}/protobuf/protoc)
set(proto_path ${CMAKE_CURRENT_SOURCE_DIR}/proto)
file(GLOB protoc_files "${proto_path}/*.proto")

# 用于存储所有生成的 .cc 和 .h 文件
set(proto_srcs)
set(proto_hdrs)

foreach(proto_file ${protoc_files})
    get_filename_component(PROTO_NAME ${proto_file} NAME_WE)
    set(protoc_cc_path "${proto_path}/${PROTO_NAME}.pb.cc")
    set(protoc_h_path "${proto_path}/${PROTO_NAME}.pb.h")

    list(APPEND proto_srcs ${protoc_cc_path})
    list(APPEND proto_hdrs ${protoc_h_path})

    add_custom_command(
        OUTPUT "${protoc_cc_path}" 
               "${protoc_h_path}"
        COMMAND ${CMAKE_COMMAND} -E echo "Running protoc for ${proto_file}"
        COMMAND ${protoc_exe} 
                "--proto_path=${proto_path}" 
                "--cpp_out=${proto_path}" 
                ${proto_file}
        DEPENDS ${proto_file}
        COMMENT "Generate ${proto_file}"
        VERBATIM)
endforeach(proto_file)

set(example_path ${CMAKE_CURRENT_LIST_DIR}/examples/proto)
set(proto_example_file ${example_path}/examples.proto)
get_filename_component(example_name ${proto_example_file} NAME_WE)
set(example_cc_path "${example_path}/${example_name}.pb.cc")
set(example_h_path "${example_path}/${example_name}.pb.h")
list(APPEND proto_srcs ${example_cc_path})
list(APPEND proto_hdrs ${example_h_path})
add_custom_command(
        OUTPUT "${example_cc_path}" 
               "${example_h_path}"
        COMMAND ${CMAKE_COMMAND} -E echo "Running protoc for ${proto_file}"
        COMMAND ${protoc_exe} 
                "--proto_path=${example_path}" 
                "--cpp_out=${example_path}" 
                ${proto_example_file}
        DEPENDS ${proto_example_file}
        COMMENT "Generate ${proto_file}"
        VERBATIM)


# 包括生成的 .pb.cc 和 .pb.h 文件到 cyberlib 中
# 只添加适用于当前架构的汇编文件
if(CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
    set(ASM_SOURCES ${CMAKE_CURRENT_LIST_DIR}/croutine/detail/swap_x86_64.S)
elseif(CMAKE_SYSTEM_PROCESSOR STREQUAL "aarch64")
    set(ASM_SOURCES ${CMAKE_CURRENT_LIST_DIR}/croutine/detail/swap_aarch64.S)
endif()
file(GLOB_RECURSE srcs *.hpp *.cpp *.cc *.h ${ASM_SOURCES})
list(APPEND srcs ${proto_srcs} ${proto_hdrs})

set(LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/../3part/)
add_library(cyberlib STATIC ${srcs})
target_link_libraries(cyberlib 
libgtest.a 
libprotobuf.a 
libglog.a 
libfastrtps.a 
libfastcdr.a 
libgflags.a 
libgmock.a 
libtinyxml2.a 
libpython3.10.a 
libuuid.a 
libncurses.a)