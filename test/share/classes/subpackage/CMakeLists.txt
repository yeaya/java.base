#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.subpackage_SRCS)
file(GLOB test-classes.subpackage_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.subpackage_HEADERS}) 
list(LENGTH test-classes.subpackage_SRCS test-classes.subpackage_SRCS_LENGTH)
if(test-classes.subpackage_SRCS_LENGTH)
	add_library(test-classes.subpackage OBJECT "${test-classes.subpackage_SRCS}" "${test-classes.subpackage_HEADERS}")
	jcpp_enable_bigobj(test-classes.subpackage)
endif()