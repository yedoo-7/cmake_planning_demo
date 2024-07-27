cmake_minimum_required(VERSION 2.8.3)
# project(planning
#     VERSION 0.0.1
#     DESCRIPTION "a demo of cmake planning"
#     HOMEPAGE_URL "https://github.com/yedoo-7/cmake_planning_demo"
#     LANGUAGES CXX
# )
project(planningDEMO)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

#变量和目录设置
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)


#三方库
set(EIGEN3_INCLUDE_DIR "/usr/local/include/eigen-3.4.0")
list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmake")
message("CMAKE_MODULE_PATH=${CMAKE_MODULE_PATH}")

find_package(Eigen3 3.4 REQUIRED)

if(TARGET Eigen3::Eigen)
message(STATUS "****** Eigen3 3.4.0 found in ${EIGEN3_INCLUDE_DIR} ******")
endif()

#添加子目录
add_subdirectory(src)
add_subdirectory(test/map_test)

