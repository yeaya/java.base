#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.d2_SRCS)
file(GLOB test-classes.d2_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.d2_HEADERS}) 
list(LENGTH test-classes.d2_SRCS test-classes.d2_SRCS_LENGTH)
if(test-classes.d2_SRCS_LENGTH)
	add_library(test-classes.d2 OBJECT "${test-classes.d2_SRCS}" "${test-classes.d2_HEADERS}")
	jcpp_enable_bigobj(test-classes.d2)
endif()