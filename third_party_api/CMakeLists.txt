
set(CMAKE_CXX_FLAGS   "-std=c++11") # add c++11 flag

aux_source_directory( . DIR_SRCS2)

add_library  (API ${DIR_SRCS2} ) # set [exefilename] [mainfilename].cpp