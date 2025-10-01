#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p.three.internal_SRCS)
file(GLOB test-classes.p.three.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p.three.internal_HEADERS}) 
list(LENGTH test-classes.p.three.internal_SRCS test-classes.p.three.internal_SRCS_LENGTH)
if(test-classes.p.three.internal_SRCS_LENGTH)
	add_library(test-classes.p.three.internal OBJECT "${test-classes.p.three.internal_SRCS}" "${test-classes.p.three.internal_HEADERS}")
	jcpp_enable_bigobj(test-classes.p.three.internal)
endif()