#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.package2_SRCS)
file(GLOB test-classes.package2_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.package2_HEADERS}) 
list(LENGTH test-classes.package2_SRCS test-classes.package2_SRCS_LENGTH)
if(test-classes.package2_SRCS_LENGTH)
	add_library(test-classes.package2 OBJECT "${test-classes.package2_SRCS}" "${test-classes.package2_HEADERS}")
	jcpp_enable_bigobj(test-classes.package2)
endif()