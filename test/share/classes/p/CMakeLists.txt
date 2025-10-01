#machine generated

add_subdirectory("internal")
add_subdirectory("one")
add_subdirectory("three")
add_subdirectory("two")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p_SRCS)
file(GLOB test-classes.p_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p_HEADERS}) 
list(LENGTH test-classes.p_SRCS test-classes.p_SRCS_LENGTH)
if(test-classes.p_SRCS_LENGTH)
	add_library(test-classes.p OBJECT "${test-classes.p_SRCS}" "${test-classes.p_HEADERS}")
	jcpp_enable_bigobj(test-classes.p)
endif()