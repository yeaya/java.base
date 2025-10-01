#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.q2_SRCS)
file(GLOB test-classes.q2_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.q2_HEADERS}) 
list(LENGTH test-classes.q2_SRCS test-classes.q2_SRCS_LENGTH)
if(test-classes.q2_SRCS_LENGTH)
	add_library(test-classes.q2 OBJECT "${test-classes.q2_SRCS}" "${test-classes.q2_HEADERS}")
	jcpp_enable_bigobj(test-classes.q2)
endif()