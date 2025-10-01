#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.d1_SRCS)
file(GLOB test-classes.d1_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.d1_HEADERS}) 
list(LENGTH test-classes.d1_SRCS test-classes.d1_SRCS_LENGTH)
if(test-classes.d1_SRCS_LENGTH)
	add_library(test-classes.d1 OBJECT "${test-classes.d1_SRCS}" "${test-classes.d1_HEADERS}")
	jcpp_enable_bigobj(test-classes.d1)
endif()