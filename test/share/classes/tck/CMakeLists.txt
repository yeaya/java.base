#machine generated

add_subdirectory("java")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.tck_SRCS)
file(GLOB test-classes.tck_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.tck_HEADERS}) 
list(LENGTH test-classes.tck_SRCS test-classes.tck_SRCS_LENGTH)
if(test-classes.tck_SRCS_LENGTH)
	add_library(test-classes.tck OBJECT "${test-classes.tck_SRCS}" "${test-classes.tck_HEADERS}")
	jcpp_enable_bigobj(test-classes.tck)
endif()