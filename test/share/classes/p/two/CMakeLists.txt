#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p.two_SRCS)
file(GLOB test-classes.p.two_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p.two_HEADERS}) 
list(LENGTH test-classes.p.two_SRCS test-classes.p.two_SRCS_LENGTH)
if(test-classes.p.two_SRCS_LENGTH)
	add_library(test-classes.p.two OBJECT "${test-classes.p.two_SRCS}" "${test-classes.p.two_HEADERS}")
	jcpp_enable_bigobj(test-classes.p.two)
endif()