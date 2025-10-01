#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.e2_SRCS)
file(GLOB test-classes.e2_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.e2_HEADERS}) 
list(LENGTH test-classes.e2_SRCS test-classes.e2_SRCS_LENGTH)
if(test-classes.e2_SRCS_LENGTH)
	add_library(test-classes.e2 OBJECT "${test-classes.e2_SRCS}" "${test-classes.e2_HEADERS}")
	jcpp_enable_bigobj(test-classes.e2)
endif()