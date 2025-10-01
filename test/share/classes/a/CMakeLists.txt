#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.a_SRCS)
file(GLOB test-classes.a_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.a_HEADERS}) 
list(LENGTH test-classes.a_SRCS test-classes.a_SRCS_LENGTH)
if(test-classes.a_SRCS_LENGTH)
	add_library(test-classes.a OBJECT "${test-classes.a_SRCS}" "${test-classes.a_HEADERS}")
	jcpp_enable_bigobj(test-classes.a)
endif()