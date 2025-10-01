#machine generated

add_subdirectory("time")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.tck.java_SRCS)
file(GLOB test-classes.tck.java_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.tck.java_HEADERS}) 
list(LENGTH test-classes.tck.java_SRCS test-classes.tck.java_SRCS_LENGTH)
if(test-classes.tck.java_SRCS_LENGTH)
	add_library(test-classes.tck.java OBJECT "${test-classes.tck.java_SRCS}" "${test-classes.tck.java_HEADERS}")
	jcpp_enable_bigobj(test-classes.tck.java)
endif()