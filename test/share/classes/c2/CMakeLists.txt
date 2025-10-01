#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.c2_SRCS)
file(GLOB test-classes.c2_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.c2_HEADERS}) 
list(LENGTH test-classes.c2_SRCS test-classes.c2_SRCS_LENGTH)
if(test-classes.c2_SRCS_LENGTH)
	add_library(test-classes.c2 OBJECT "${test-classes.c2_SRCS}" "${test-classes.c2_HEADERS}")
	jcpp_enable_bigobj(test-classes.c2)
endif()