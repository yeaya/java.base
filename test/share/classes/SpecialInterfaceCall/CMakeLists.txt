#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.SpecialInterfa_88_SRCS)
file(GLOB test-classes.SpecialInterfa_88_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.SpecialInterfa_88_HEADERS}) 
list(LENGTH test-classes.SpecialInterfa_88_SRCS test-classes.SpecialInterfa_88_SRCS_LENGTH)
if(test-classes.SpecialInterfa_88_SRCS_LENGTH)
	add_library(test-classes.SpecialInterfa_88 OBJECT "${test-classes.SpecialInterfa_88_SRCS}" "${test-classes.SpecialInterfa_88_HEADERS}")
	jcpp_enable_bigobj(test-classes.SpecialInterfa_88)
endif()