#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.cl_SRCS)
file(GLOB test-classes.cl_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.cl_HEADERS}) 
list(LENGTH test-classes.cl_SRCS test-classes.cl_SRCS_LENGTH)
if(test-classes.cl_SRCS_LENGTH)
	add_library(test-classes.cl OBJECT "${test-classes.cl_SRCS}" "${test-classes.cl_HEADERS}")
	jcpp_enable_bigobj(test-classes.cl)
endif()