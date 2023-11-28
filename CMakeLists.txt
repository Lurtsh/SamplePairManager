cmake_minimum_required(VERSION 3.12)

project(SamplePairManager)

set(SOURCES
    src/PairManager/PairManager.cpp
)

set(HEADERS
    include/PairManager/PairManager.h
)

add_library(sample_pair_manager SHARED ${SOURCES} ${HEADERS})

target_include_directories(sample_pair_manager PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)