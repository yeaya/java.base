#machine generated

add_subdirectory("content")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.com.foo_SRCS)
file(GLOB test-classes.com.foo_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.com.foo_HEADERS}) 
list(LENGTH test-classes.com.foo_SRCS test-classes.com.foo_SRCS_LENGTH)
if(test-classes.com.foo_SRCS_LENGTH)
	add_library(test-classes.com.foo OBJECT "${test-classes.com.foo_SRCS}" "${test-classes.com.foo_HEADERS}")
	jcpp_enable_bigobj(test-classes.com.foo)
endif()