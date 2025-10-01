#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.custom_SRCS)
file(GLOB test-classes.custom_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.custom_HEADERS}) 
list(LENGTH test-classes.custom_SRCS test-classes.custom_SRCS_LENGTH)
if(test-classes.custom_SRCS_LENGTH)
	add_library(test-classes.custom OBJECT "${test-classes.custom_SRCS}" "${test-classes.custom_HEADERS}")
	jcpp_enable_bigobj(test-classes.custom)
endif()