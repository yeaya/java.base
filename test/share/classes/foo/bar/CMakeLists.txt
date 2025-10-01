#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.foo.bar_SRCS)
file(GLOB test-classes.foo.bar_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.foo.bar_HEADERS}) 
list(LENGTH test-classes.foo.bar_SRCS test-classes.foo.bar_SRCS_LENGTH)
if(test-classes.foo.bar_SRCS_LENGTH)
	add_library(test-classes.foo.bar OBJECT "${test-classes.foo.bar_SRCS}" "${test-classes.foo.bar_HEADERS}")
	jcpp_enable_bigobj(test-classes.foo.bar)
endif()