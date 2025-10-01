#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p2.resources_SRCS)
file(GLOB test-classes.p2.resources_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p2.resources_HEADERS}) 
list(LENGTH test-classes.p2.resources_SRCS test-classes.p2.resources_SRCS_LENGTH)
if(test-classes.p2.resources_SRCS_LENGTH)
	add_library(test-classes.p2.resources OBJECT "${test-classes.p2.resources_SRCS}" "${test-classes.p2.resources_HEADERS}")
	jcpp_enable_bigobj(test-classes.p2.resources)
endif()