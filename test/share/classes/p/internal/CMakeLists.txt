#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p.internal_SRCS)
file(GLOB test-classes.p.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p.internal_HEADERS}) 
list(LENGTH test-classes.p.internal_SRCS test-classes.p.internal_SRCS_LENGTH)
if(test-classes.p.internal_SRCS_LENGTH)
	add_library(test-classes.p.internal OBJECT "${test-classes.p.internal_SRCS}" "${test-classes.p.internal_HEADERS}")
	jcpp_enable_bigobj(test-classes.p.internal)
endif()