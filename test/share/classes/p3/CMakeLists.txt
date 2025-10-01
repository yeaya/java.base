#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p3_SRCS)
file(GLOB test-classes.p3_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p3_HEADERS}) 
list(LENGTH test-classes.p3_SRCS test-classes.p3_SRCS_LENGTH)
if(test-classes.p3_SRCS_LENGTH)
	add_library(test-classes.p3 OBJECT "${test-classes.p3_SRCS}" "${test-classes.p3_HEADERS}")
	jcpp_enable_bigobj(test-classes.p3)
endif()