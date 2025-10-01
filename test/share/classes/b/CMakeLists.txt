#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.b_SRCS)
file(GLOB test-classes.b_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.b_HEADERS}) 
list(LENGTH test-classes.b_SRCS test-classes.b_SRCS_LENGTH)
if(test-classes.b_SRCS_LENGTH)
	add_library(test-classes.b OBJECT "${test-classes.b_SRCS}" "${test-classes.b_HEADERS}")
	jcpp_enable_bigobj(test-classes.b)
endif()