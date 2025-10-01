#machine generated

add_subdirectory("foo")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.jdk.test.internal_SRCS)
file(GLOB test-classes.jdk.test.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.jdk.test.internal_HEADERS}) 
list(LENGTH test-classes.jdk.test.internal_SRCS test-classes.jdk.test.internal_SRCS_LENGTH)
if(test-classes.jdk.test.internal_SRCS_LENGTH)
	add_library(test-classes.jdk.test.internal OBJECT "${test-classes.jdk.test.internal_SRCS}" "${test-classes.jdk.test.internal_HEADERS}")
	jcpp_enable_bigobj(test-classes.jdk.test.internal)
endif()