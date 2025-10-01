#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.package1.package3_SRCS)
file(GLOB test-classes.package1.package3_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.package1.package3_HEADERS}) 
list(LENGTH test-classes.package1.package3_SRCS test-classes.package1.package3_SRCS_LENGTH)
if(test-classes.package1.package3_SRCS_LENGTH)
	add_library(test-classes.package1.package3 OBJECT "${test-classes.package1.package3_SRCS}" "${test-classes.package1.package3_HEADERS}")
	jcpp_enable_bigobj(test-classes.package1.package3)
endif()