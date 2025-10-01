#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.util_SRCS)
file(GLOB test-classes.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.util_HEADERS}) 
list(LENGTH test-classes.util_SRCS test-classes.util_SRCS_LENGTH)
if(test-classes.util_SRCS_LENGTH)
	add_library(test-classes.util OBJECT "${test-classes.util_SRCS}" "${test-classes.util_HEADERS}")
	jcpp_enable_bigobj(test-classes.util)
endif()