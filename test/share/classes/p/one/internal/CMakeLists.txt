#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p.one.internal_SRCS)
file(GLOB test-classes.p.one.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p.one.internal_HEADERS}) 
list(LENGTH test-classes.p.one.internal_SRCS test-classes.p.one.internal_SRCS_LENGTH)
if(test-classes.p.one.internal_SRCS_LENGTH)
	add_library(test-classes.p.one.internal OBJECT "${test-classes.p.one.internal_SRCS}" "${test-classes.p.one.internal_HEADERS}")
	jcpp_enable_bigobj(test-classes.p.one.internal)
endif()