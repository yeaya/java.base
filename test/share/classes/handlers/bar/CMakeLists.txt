#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.handlers.bar_SRCS)
file(GLOB test-classes.handlers.bar_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.handlers.bar_HEADERS}) 
list(LENGTH test-classes.handlers.bar_SRCS test-classes.handlers.bar_SRCS_LENGTH)
if(test-classes.handlers.bar_SRCS_LENGTH)
	add_library(test-classes.handlers.bar OBJECT "${test-classes.handlers.bar_SRCS}" "${test-classes.handlers.bar_HEADERS}")
	jcpp_enable_bigobj(test-classes.handlers.bar)
endif()