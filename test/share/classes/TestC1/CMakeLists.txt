#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.TestC1_SRCS)
file(GLOB test-classes.TestC1_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.TestC1_HEADERS}) 
list(LENGTH test-classes.TestC1_SRCS test-classes.TestC1_SRCS_LENGTH)
if(test-classes.TestC1_SRCS_LENGTH)
	add_library(test-classes.TestC1 OBJECT "${test-classes.TestC1_SRCS}" "${test-classes.TestC1_HEADERS}")
	jcpp_enable_bigobj(test-classes.TestC1)
endif()