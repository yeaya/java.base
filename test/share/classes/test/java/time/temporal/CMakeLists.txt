#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.test.java.time_93_SRCS)
file(GLOB test-classes.test.java.time_93_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.test.java.time_93_HEADERS}) 
list(LENGTH test-classes.test.java.time_93_SRCS test-classes.test.java.time_93_SRCS_LENGTH)
if(test-classes.test.java.time_93_SRCS_LENGTH)
	add_library(test-classes.test.java.time_93 OBJECT "${test-classes.test.java.time_93_SRCS}" "${test-classes.test.java.time_93_HEADERS}")
	jcpp_enable_bigobj(test-classes.test.java.time_93)
endif()