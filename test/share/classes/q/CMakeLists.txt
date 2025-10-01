#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.q_SRCS)
file(GLOB test-classes.q_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.q_HEADERS}) 
list(LENGTH test-classes.q_SRCS test-classes.q_SRCS_LENGTH)
if(test-classes.q_SRCS_LENGTH)
	add_library(test-classes.q OBJECT "${test-classes.q_SRCS}" "${test-classes.q_HEADERS}")
	jcpp_enable_bigobj(test-classes.q)
endif()