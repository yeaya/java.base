#machine generated

add_subdirectory("lang")
add_subdirectory("time")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.test.java_SRCS)
file(GLOB test-classes.test.java_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.test.java_HEADERS}) 
list(LENGTH test-classes.test.java_SRCS test-classes.test.java_SRCS_LENGTH)
if(test-classes.test.java_SRCS_LENGTH)
	add_library(test-classes.test.java OBJECT "${test-classes.test.java_SRCS}" "${test-classes.test.java_HEADERS}")
	jcpp_enable_bigobj(test-classes.test.java)
endif()