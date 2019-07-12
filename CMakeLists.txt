
cmake_minimum_required (VERSION 2.8) # project version required cmake min version

project (Cmake_Example) # set project name

set(CMAKE_CXX_FLAGS   "-std=c++11") # add c++11 flag

# Locate GTest
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

aux_source_directory( . DIR_SRCS) 

add_subdirectory(api)

add_executable (Cmake_Example ${DIR_SRCS} ) # set [exefilename] [mainfilename].cpp

target_link_libraries(Cmake_Example ${GTEST_LIBRARIES} API pthread)