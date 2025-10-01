#machine generated

add_subdirectory("java")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.test_SRCS)
file(GLOB test-classes.test_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.test_HEADERS}) 
list(LENGTH test-classes.test_SRCS test-classes.test_SRCS_LENGTH)
if(test-classes.test_SRCS_LENGTH)
	add_library(test-classes.test OBJECT "${test-classes.test_SRCS}" "${test-classes.test_HEADERS}")
	jcpp_enable_bigobj(test-classes.test)
endif()