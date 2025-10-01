#machine generated

add_subdirectory("impl")
add_subdirectory("internal")
add_subdirectory("resources")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p1_SRCS)
file(GLOB test-classes.p1_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p1_HEADERS}) 
list(LENGTH test-classes.p1_SRCS test-classes.p1_SRCS_LENGTH)
if(test-classes.p1_SRCS_LENGTH)
	add_library(test-classes.p1 OBJECT "${test-classes.p1_SRCS}" "${test-classes.p1_HEADERS}")
	jcpp_enable_bigobj(test-classes.p1)
endif()