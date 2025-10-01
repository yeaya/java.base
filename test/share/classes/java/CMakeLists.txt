#machine generated

add_subdirectory("fake")
add_subdirectory("lang")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.java_SRCS)
file(GLOB test-classes.java_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.java_HEADERS}) 
list(LENGTH test-classes.java_SRCS test-classes.java_SRCS_LENGTH)
if(test-classes.java_SRCS_LENGTH)
	add_library(test-classes.java OBJECT "${test-classes.java_SRCS}" "${test-classes.java_HEADERS}")
	jcpp_enable_bigobj(test-classes.java)
endif()