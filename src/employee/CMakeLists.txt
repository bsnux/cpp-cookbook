cmake_minimum_required(VERSION 3.10)

project(employee C CXX)

set(SOURCE_FILES
    employee.h
    employee.cc
)

add_library(employee SHARED STATIC ${SOURCE_FILES})

install(TARGETS employee DESTINATION ${COOKBOOK_INSTALL_LIB_DIR})
install(FILES employee.h DESTINATION ${COOKBOOK_INSTALL_INCLUDE_DIR})