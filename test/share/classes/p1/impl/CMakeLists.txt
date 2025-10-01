#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p1.impl_SRCS)
file(GLOB test-classes.p1.impl_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p1.impl_HEADERS}) 
list(LENGTH test-classes.p1.impl_SRCS test-classes.p1.impl_SRCS_LENGTH)
if(test-classes.p1.impl_SRCS_LENGTH)
	add_library(test-classes.p1.impl OBJECT "${test-classes.p1.impl_SRCS}" "${test-classes.p1.impl_HEADERS}")
	jcpp_enable_bigobj(test-classes.p1.impl)
endif()