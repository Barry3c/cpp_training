
cmake_minimum_required(VERSION 3.12)
project(cppTraining)


set (SRC_LIST  D:/eclipse_oxygen_WS/CppTraining/src/cppTraining.cpp)
message("SRC_LIST: ${SRC_LIST}")

SET(CMAKE_C_FLAGS   "-static-libgcc")
SET(CMAKE_CXX_FLAGS  "-std=c++11")
# SET(CMAKE_CXX_FLAGS  "-std=c++11 -static-libgcc -static-libstdc++")


set(CMAKE_C_COMPILER "C:/toolbase/mingw/test25_comp_8.1.0_testversion/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/toolbase/mingw/test25_comp_8.1.0_testversion/bin/g++.exe")


set (ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
message("root dir is set to ${ROOT_DIR}")

SET(Boost_USE_STATIC_LIBS ON)
set(BOOST_ROOT "C:/toolbase/boost/test1_1.67.0_mingw_w32")
set(BOOST_FILE_SYSTEM "${BOOST_ROOT}/libs/libboost_filesystem-mgw81-mt-x32-1_67.a")
set(BOOST_SYSTEM "${BOOST_ROOT}/libs/libboost_system-mgw81-mt-x32-1_67.a")
set(BOOST_LOGGER "${BOOST_ROOT}/libs/libboost_log-mgw81-mt-x32-1_67.a")
set(BOOST_LOGGER_SETUP "${BOOST_ROOT}/libs/libboost_log_setup-mgw81-mt-x32-1_67.a")
set(BOOST_THREAD "${BOOST_ROOT}/libs/libboost_thread-mgw81-mt-x32-1_67.a")

set(gtest_SOURCE_DIR "D:/lib/googletest")
set(gtest_LIB_DIR ${gtest_SOURCE_DIR}/build/googlemock/gtest/)
set(gmock_LIB_DIR ${gtest_SOURCE_DIR}/build/googlemock/)

set(GTEST_LIBRARIES ${gtest_LIB_DIR}/libgtest.a ${gtest_LIB_DIR}/libgtest_main.a )
enable_testing()
include_directories(${gtest_SOURCE_DIR}/googletest/include)
include_directories(${ROOT_DIR}/plog/include)


add_executable(cppTraining ${SRC_LIST})

include_directories(${BOOST_ROOT})
target_link_libraries(cppTraining ${BOOST_LOGGER} ${BOOST_FILE_SYSTEM} ${BOOST_LOGGER_SETUP} ${BOOST_SYSTEM} ${BOOST_THREAD})
link_directories(${gtest_SOURCE_DIR}/build/googlemock/gtest ${gtest_SOURCE_DIR}/build/googlemock)
target_link_libraries(cppTraining ${GTEST_LIBRARIES})
target_link_libraries(cppTraining -static-libgcc -static-libstdc++)

install(TARGETS cppTraining DESTINATION ${ROOT_DIR}/bin)
