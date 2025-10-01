#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.pkg1_SRCS)
file(GLOB test-classes.pkg1_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.pkg1_HEADERS}) 
list(LENGTH test-classes.pkg1_SRCS test-classes.pkg1_SRCS_LENGTH)
if(test-classes.pkg1_SRCS_LENGTH)
	add_library(test-classes.pkg1 OBJECT "${test-classes.pkg1_SRCS}" "${test-classes.pkg1_HEADERS}")
	jcpp_enable_bigobj(test-classes.pkg1)
endif()