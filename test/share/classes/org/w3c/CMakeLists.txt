#machine generated

add_subdirectory("dom")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.org.w3c_SRCS)
file(GLOB test-classes.org.w3c_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.org.w3c_HEADERS}) 
list(LENGTH test-classes.org.w3c_SRCS test-classes.org.w3c_SRCS_LENGTH)
if(test-classes.org.w3c_SRCS_LENGTH)
	add_library(test-classes.org.w3c OBJECT "${test-classes.org.w3c_SRCS}" "${test-classes.org.w3c_HEADERS}")
	jcpp_enable_bigobj(test-classes.org.w3c)
endif()