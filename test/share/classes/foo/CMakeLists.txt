#machine generated

add_subdirectory("bar")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.foo_SRCS)
file(GLOB test-classes.foo_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.foo_HEADERS}) 
list(LENGTH test-classes.foo_SRCS test-classes.foo_SRCS_LENGTH)
if(test-classes.foo_SRCS_LENGTH)
	add_library(test-classes.foo OBJECT "${test-classes.foo_SRCS}" "${test-classes.foo_HEADERS}")
	jcpp_enable_bigobj(test-classes.foo)
endif()