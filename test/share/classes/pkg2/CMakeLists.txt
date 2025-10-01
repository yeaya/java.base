#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.pkg2_SRCS)
file(GLOB test-classes.pkg2_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.pkg2_HEADERS}) 
list(LENGTH test-classes.pkg2_SRCS test-classes.pkg2_SRCS_LENGTH)
if(test-classes.pkg2_SRCS_LENGTH)
	add_library(test-classes.pkg2 OBJECT "${test-classes.pkg2_SRCS}" "${test-classes.pkg2_HEADERS}")
	jcpp_enable_bigobj(test-classes.pkg2)
endif()