#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.java.lang.Float2_SRCS)
file(GLOB test-classes.java.lang.Float2_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.java.lang.Float2_HEADERS}) 
list(LENGTH test-classes.java.lang.Float2_SRCS test-classes.java.lang.Float2_SRCS_LENGTH)
if(test-classes.java.lang.Float2_SRCS_LENGTH)
	add_library(test-classes.java.lang.Float2 OBJECT "${test-classes.java.lang.Float2_SRCS}" "${test-classes.java.lang.Float2_HEADERS}")
	jcpp_enable_bigobj(test-classes.java.lang.Float2)
endif()