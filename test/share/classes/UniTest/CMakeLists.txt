#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.UniTest_SRCS)
file(GLOB test-classes.UniTest_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.UniTest_HEADERS}) 
list(LENGTH test-classes.UniTest_SRCS test-classes.UniTest_SRCS_LENGTH)
if(test-classes.UniTest_SRCS_LENGTH)
	add_library(test-classes.UniTest OBJECT "${test-classes.UniTest_SRCS}" "${test-classes.UniTest_HEADERS}")
	jcpp_enable_bigobj(test-classes.UniTest)
endif()