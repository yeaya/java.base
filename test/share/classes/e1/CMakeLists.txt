#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.e1_SRCS)
file(GLOB test-classes.e1_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.e1_HEADERS}) 
list(LENGTH test-classes.e1_SRCS test-classes.e1_SRCS_LENGTH)
if(test-classes.e1_SRCS_LENGTH)
	add_library(test-classes.e1 OBJECT "${test-classes.e1_SRCS}" "${test-classes.e1_HEADERS}")
	jcpp_enable_bigobj(test-classes.e1)
endif()