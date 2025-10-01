#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.tck.java.time._90_SRCS)
file(GLOB test-classes.tck.java.time._90_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.tck.java.time._90_HEADERS}) 
list(LENGTH test-classes.tck.java.time._90_SRCS test-classes.tck.java.time._90_SRCS_LENGTH)
if(test-classes.tck.java.time._90_SRCS_LENGTH)
	add_library(test-classes.tck.java.time._90 OBJECT "${test-classes.tck.java.time._90_SRCS}" "${test-classes.tck.java.time._90_HEADERS}")
	jcpp_enable_bigobj(test-classes.tck.java.time._90)
endif()