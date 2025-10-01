#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.comSA_SRCS)
file(GLOB test-classes.comSA_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.comSA_HEADERS}) 
list(LENGTH test-classes.comSA_SRCS test-classes.comSA_SRCS_LENGTH)
if(test-classes.comSA_SRCS_LENGTH)
	add_library(test-classes.comSA OBJECT "${test-classes.comSA_SRCS}" "${test-classes.comSA_HEADERS}")
	jcpp_enable_bigobj(test-classes.comSA)
endif()