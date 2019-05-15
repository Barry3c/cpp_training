cmake_minimum_required(VERSION 2.6)
project(cpp_training C CXX)
set(SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/cpp_training.cpp)

add_executable(cpp_training ${SRC_LIST})
install (TARGETS cpp_training DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/bin)
SET_TARGET_PROPERTIES(cpp_training PROPERTIES COMPILER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(cpp_training PROPERTIES LINKER_LANGUAGE CXX)