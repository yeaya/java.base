#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.testPkg_SRCS)
file(GLOB test-classes.testPkg_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.testPkg_HEADERS}) 
list(LENGTH test-classes.testPkg_SRCS test-classes.testPkg_SRCS_LENGTH)
if(test-classes.testPkg_SRCS_LENGTH)
	add_library(test-classes.testPkg OBJECT "${test-classes.testPkg_SRCS}" "${test-classes.testPkg_HEADERS}")
	jcpp_enable_bigobj(test-classes.testPkg)
endif()