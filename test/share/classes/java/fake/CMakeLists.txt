#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.java.fake_SRCS)
file(GLOB test-classes.java.fake_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.java.fake_HEADERS}) 
list(LENGTH test-classes.java.fake_SRCS test-classes.java.fake_SRCS_LENGTH)
if(test-classes.java.fake_SRCS_LENGTH)
	add_library(test-classes.java.fake OBJECT "${test-classes.java.fake_SRCS}" "${test-classes.java.fake_HEADERS}")
	jcpp_enable_bigobj(test-classes.java.fake)
endif()