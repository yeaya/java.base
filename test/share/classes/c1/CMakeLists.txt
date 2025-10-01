#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.c1_SRCS)
file(GLOB test-classes.c1_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.c1_HEADERS}) 
list(LENGTH test-classes.c1_SRCS test-classes.c1_SRCS_LENGTH)
if(test-classes.c1_SRCS_LENGTH)
	add_library(test-classes.c1 OBJECT "${test-classes.c1_SRCS}" "${test-classes.c1_HEADERS}")
	jcpp_enable_bigobj(test-classes.c1)
endif()