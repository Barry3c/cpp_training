cmake_minimum_required(VERSION 2.6)
project(cpp_training C CXX)
set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

INCLUDE_DIRECTORIES(${ROOT_DIR}/include)
SET(SRC_LIST 	${ROOT_DIR}/src/test.cpp
				${ROOT_DIR}/src/main.cpp
				${ROOT_DIR}/src/helper.cpp
	)

SET(CMAKE_CXX_FLAGS "-std=c++11")

add_executable(cpp_training ${SRC_LIST})
SET_TARGET_PROPERTIES(cpp_training PROPERTIES LINKER_LANGUAGE CXX)
SET_TARGET_PROPERTIES(cpp_training PROPERTIES COMPILER_LANGUAGE CXX)
install (TARGETS cpp_training DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/bin)