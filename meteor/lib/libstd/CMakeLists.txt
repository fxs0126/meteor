cmake_minimum_required(VERSION 3.2) 
project(libstd CXX)

aux_source_directory(. SRC_LIST)

if(CMAKE_BUILD_TYPE STREQUAL "Release")
add_library( ${PROJECT_NAME} SHARED ${SRC_LIST})
else() 
add_library( ${PROJECT_NAME} STATIC ${SRC_LIST})
endif()
