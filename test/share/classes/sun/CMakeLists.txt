#machine generated

add_subdirectory("misc")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.sun_SRCS)
file(GLOB test-classes.sun_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.sun_HEADERS}) 
list(LENGTH test-classes.sun_SRCS test-classes.sun_SRCS_LENGTH)
if(test-classes.sun_SRCS_LENGTH)
	add_library(test-classes.sun OBJECT "${test-classes.sun_SRCS}" "${test-classes.sun_HEADERS}")
	jcpp_enable_bigobj(test-classes.sun)
endif()