#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.sun.misc_SRCS)
file(GLOB test-classes.sun.misc_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.sun.misc_HEADERS}) 
list(LENGTH test-classes.sun.misc_SRCS test-classes.sun.misc_SRCS_LENGTH)
if(test-classes.sun.misc_SRCS_LENGTH)
	add_library(test-classes.sun.misc OBJECT "${test-classes.sun.misc_SRCS}" "${test-classes.sun.misc_HEADERS}")
	jcpp_enable_bigobj(test-classes.sun.misc)
endif()