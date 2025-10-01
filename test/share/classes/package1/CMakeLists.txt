#machine generated

add_subdirectory("package3")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.package1_SRCS)
file(GLOB test-classes.package1_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.package1_HEADERS}) 
list(LENGTH test-classes.package1_SRCS test-classes.package1_SRCS_LENGTH)
if(test-classes.package1_SRCS_LENGTH)
	add_library(test-classes.package1 OBJECT "${test-classes.package1_SRCS}" "${test-classes.package1_HEADERS}")
	jcpp_enable_bigobj(test-classes.package1)
endif()