cmake_minimum_required(VERSION 3.2) 
project(libstd CXX)

aux_source_directory(. SRC_LIST)

add_library( libstd  ${SRC_LIST})
