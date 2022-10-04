cmake_minimum_required(VERSION 3.10)

project(cbook)

add_subdirectory(employee)
set(SOURCE_FILES main.cc)

add_executable(cbook ${SOURCE_FILES})
target_link_libraries(cbook employee)
install(TARGETS cbook DESTINATION ${COOKBOOK_INSTALL_BIN_DIR})