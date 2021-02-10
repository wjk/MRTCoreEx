cmake_minimum_required(VERSION 3.17)
project(MRTCoreEx)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(libmrm)

if(WIN32)
    add_subdirectory(wil)
else()
    add_subdirectory(windows_sdk)
endif()
