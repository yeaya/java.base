#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.handlers.foo_SRCS)
file(GLOB test-classes.handlers.foo_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.handlers.foo_HEADERS}) 
list(LENGTH test-classes.handlers.foo_SRCS test-classes.handlers.foo_SRCS_LENGTH)
if(test-classes.handlers.foo_SRCS_LENGTH)
	add_library(test-classes.handlers.foo OBJECT "${test-classes.handlers.foo_SRCS}" "${test-classes.handlers.foo_HEADERS}")
	jcpp_enable_bigobj(test-classes.handlers.foo)
endif()