#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.anotherpkg_SRCS)
file(GLOB test-classes.anotherpkg_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.anotherpkg_HEADERS}) 
list(LENGTH test-classes.anotherpkg_SRCS test-classes.anotherpkg_SRCS_LENGTH)
if(test-classes.anotherpkg_SRCS_LENGTH)
	add_library(test-classes.anotherpkg OBJECT "${test-classes.anotherpkg_SRCS}" "${test-classes.anotherpkg_HEADERS}")
	jcpp_enable_bigobj(test-classes.anotherpkg)
endif()