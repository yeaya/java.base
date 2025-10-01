#machine generated

add_subdirectory("Float2")
add_subdirectory("Math2")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.java.lang_SRCS)
file(GLOB test-classes.java.lang_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.java.lang_HEADERS}) 
list(LENGTH test-classes.java.lang_SRCS test-classes.java.lang_SRCS_LENGTH)
if(test-classes.java.lang_SRCS_LENGTH)
	add_library(test-classes.java.lang OBJECT "${test-classes.java.lang_SRCS}" "${test-classes.java.lang_HEADERS}")
	jcpp_enable_bigobj(test-classes.java.lang)
endif()