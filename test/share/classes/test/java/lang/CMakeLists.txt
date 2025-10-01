#machine generated

add_subdirectory("invoke")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.test.java.lang_SRCS)
file(GLOB test-classes.test.java.lang_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.test.java.lang_HEADERS}) 
list(LENGTH test-classes.test.java.lang_SRCS test-classes.test.java.lang_SRCS_LENGTH)
if(test-classes.test.java.lang_SRCS_LENGTH)
	add_library(test-classes.test.java.lang OBJECT "${test-classes.test.java.lang_SRCS}" "${test-classes.test.java.lang_HEADERS}")
	jcpp_enable_bigobj(test-classes.test.java.lang)
endif()