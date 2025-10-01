#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.helper_SRCS)
file(GLOB test-classes.helper_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.helper_HEADERS}) 
list(LENGTH test-classes.helper_SRCS test-classes.helper_SRCS_LENGTH)
if(test-classes.helper_SRCS_LENGTH)
	add_library(test-classes.helper OBJECT "${test-classes.helper_SRCS}" "${test-classes.helper_HEADERS}")
	jcpp_enable_bigobj(test-classes.helper)
endif()