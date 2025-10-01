#machine generated

add_subdirectory("app")
add_subdirectory("foo")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.com_SRCS)
file(GLOB test-classes.com_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.com_HEADERS}) 
list(LENGTH test-classes.com_SRCS test-classes.com_SRCS_LENGTH)
if(test-classes.com_SRCS_LENGTH)
	add_library(test-classes.com OBJECT "${test-classes.com_SRCS}" "${test-classes.com_HEADERS}")
	jcpp_enable_bigobj(test-classes.com)
endif()