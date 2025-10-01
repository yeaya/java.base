#machine generated

add_subdirectory("w3c")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.org_SRCS)
file(GLOB test-classes.org_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.org_HEADERS}) 
list(LENGTH test-classes.org_SRCS test-classes.org_SRCS_LENGTH)
if(test-classes.org_SRCS_LENGTH)
	add_library(test-classes.org OBJECT "${test-classes.org_SRCS}" "${test-classes.org_HEADERS}")
	jcpp_enable_bigobj(test-classes.org)
endif()