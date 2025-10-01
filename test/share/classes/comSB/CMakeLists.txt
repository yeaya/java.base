#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.comSB_SRCS)
file(GLOB test-classes.comSB_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.comSB_HEADERS}) 
list(LENGTH test-classes.comSB_SRCS test-classes.comSB_SRCS_LENGTH)
if(test-classes.comSB_SRCS_LENGTH)
	add_library(test-classes.comSB OBJECT "${test-classes.comSB_SRCS}" "${test-classes.comSB_HEADERS}")
	jcpp_enable_bigobj(test-classes.comSB)
endif()