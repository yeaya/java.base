#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.indify_SRCS)
file(GLOB test-classes.indify_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.indify_HEADERS}) 
list(LENGTH test-classes.indify_SRCS test-classes.indify_SRCS_LENGTH)
if(test-classes.indify_SRCS_LENGTH)
	add_library(test-classes.indify OBJECT "${test-classes.indify_SRCS}" "${test-classes.indify_HEADERS}")
	jcpp_enable_bigobj(test-classes.indify)
endif()