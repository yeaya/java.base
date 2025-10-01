#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.q1_SRCS)
file(GLOB test-classes.q1_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.q1_HEADERS}) 
list(LENGTH test-classes.q1_SRCS test-classes.q1_SRCS_LENGTH)
if(test-classes.q1_SRCS_LENGTH)
	add_library(test-classes.q1 OBJECT "${test-classes.q1_SRCS}" "${test-classes.q1_HEADERS}")
	jcpp_enable_bigobj(test-classes.q1)
endif()