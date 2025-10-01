#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.jdk.test.inter_85_SRCS)
file(GLOB test-classes.jdk.test.inter_85_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.jdk.test.inter_85_HEADERS}) 
list(LENGTH test-classes.jdk.test.inter_85_SRCS test-classes.jdk.test.inter_85_SRCS_LENGTH)
if(test-classes.jdk.test.inter_85_SRCS_LENGTH)
	add_library(test-classes.jdk.test.inter_85 OBJECT "${test-classes.jdk.test.inter_85_SRCS}" "${test-classes.jdk.test.inter_85_HEADERS}")
	jcpp_enable_bigobj(test-classes.jdk.test.inter_85)
endif()