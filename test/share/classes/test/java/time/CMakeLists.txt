#machine generated

add_subdirectory("format")
add_subdirectory("temporal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.test.java.time_SRCS)
file(GLOB test-classes.test.java.time_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.test.java.time_HEADERS}) 
list(LENGTH test-classes.test.java.time_SRCS test-classes.test.java.time_SRCS_LENGTH)
if(test-classes.test.java.time_SRCS_LENGTH)
	add_library(test-classes.test.java.time OBJECT "${test-classes.test.java.time_SRCS}" "${test-classes.test.java.time_HEADERS}")
	jcpp_enable_bigobj(test-classes.test.java.time)
endif()