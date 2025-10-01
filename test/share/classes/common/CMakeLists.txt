#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.common_SRCS)
file(GLOB test-classes.common_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.common_HEADERS}) 
list(LENGTH test-classes.common_SRCS test-classes.common_SRCS_LENGTH)
if(test-classes.common_SRCS_LENGTH)
	add_library(test-classes.common OBJECT "${test-classes.common_SRCS}" "${test-classes.common_HEADERS}")
	jcpp_enable_bigobj(test-classes.common)
endif()