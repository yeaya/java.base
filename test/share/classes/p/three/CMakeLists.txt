#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.p.three_SRCS)
file(GLOB test-classes.p.three_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.p.three_HEADERS}) 
list(LENGTH test-classes.p.three_SRCS test-classes.p.three_SRCS_LENGTH)
if(test-classes.p.three_SRCS_LENGTH)
	add_library(test-classes.p.three OBJECT "${test-classes.p.three_SRCS}" "${test-classes.p.three_HEADERS}")
	jcpp_enable_bigobj(test-classes.p.three)
endif()