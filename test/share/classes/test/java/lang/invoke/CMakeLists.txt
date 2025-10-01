#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.test.java.lang_91_SRCS)
file(GLOB test-classes.test.java.lang_91_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.test.java.lang_91_HEADERS}) 
list(LENGTH test-classes.test.java.lang_91_SRCS test-classes.test.java.lang_91_SRCS_LENGTH)
if(test-classes.test.java.lang_91_SRCS_LENGTH)
	add_library(test-classes.test.java.lang_91 OBJECT "${test-classes.test.java.lang_91_SRCS}" "${test-classes.test.java.lang_91_HEADERS}")
	jcpp_enable_bigobj(test-classes.test.java.lang_91)
endif()