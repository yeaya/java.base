#machine generated

add_subdirectory("bar")
add_subdirectory("foo")
add_subdirectory("jar")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.handlers_SRCS)
file(GLOB test-classes.handlers_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.handlers_HEADERS}) 
list(LENGTH test-classes.handlers_SRCS test-classes.handlers_SRCS_LENGTH)
if(test-classes.handlers_SRCS_LENGTH)
	add_library(test-classes.handlers OBJECT "${test-classes.handlers_SRCS}" "${test-classes.handlers_HEADERS}")
	jcpp_enable_bigobj(test-classes.handlers)
endif()