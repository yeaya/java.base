#machine generated

add_subdirectory("test")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.jdk_SRCS)
file(GLOB test-classes.jdk_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.jdk_HEADERS}) 
list(LENGTH test-classes.jdk_SRCS test-classes.jdk_SRCS_LENGTH)
if(test-classes.jdk_SRCS_LENGTH)
	add_library(test-classes.jdk OBJECT "${test-classes.jdk_SRCS}" "${test-classes.jdk_HEADERS}")
	jcpp_enable_bigobj(test-classes.jdk)
endif()