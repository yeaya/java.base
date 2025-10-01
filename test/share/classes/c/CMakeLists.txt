#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.c_SRCS)
file(GLOB test-classes.c_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.c_HEADERS}) 
list(LENGTH test-classes.c_SRCS test-classes.c_SRCS_LENGTH)
if(test-classes.c_SRCS_LENGTH)
	add_library(test-classes.c OBJECT "${test-classes.c_SRCS}" "${test-classes.c_HEADERS}")
	jcpp_enable_bigobj(test-classes.c)
endif()