#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p.one_SRCS)
file(GLOB test-classes.p.one_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p.one_HEADERS}) 
list(LENGTH test-classes.p.one_SRCS test-classes.p.one_SRCS_LENGTH)
if(test-classes.p.one_SRCS_LENGTH)
	add_library(test-classes.p.one OBJECT "${test-classes.p.one_SRCS}" "${test-classes.p.one_HEADERS}")
	jcpp_enable_bigobj(test-classes.p.one)
endif()