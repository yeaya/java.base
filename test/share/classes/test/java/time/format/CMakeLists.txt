#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.test.java.time_92_SRCS)
file(GLOB test-classes.test.java.time_92_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.test.java.time_92_HEADERS}) 
list(LENGTH test-classes.test.java.time_92_SRCS test-classes.test.java.time_92_SRCS_LENGTH)
if(test-classes.test.java.time_92_SRCS_LENGTH)
	add_library(test-classes.test.java.time_92 OBJECT "${test-classes.test.java.time_92_SRCS}" "${test-classes.test.java.time_92_HEADERS}")
	jcpp_enable_bigobj(test-classes.test.java.time_92)
endif()