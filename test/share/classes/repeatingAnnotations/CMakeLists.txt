#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.repeatingAnnot_87_SRCS)
file(GLOB test-classes.repeatingAnnot_87_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.repeatingAnnot_87_HEADERS}) 
list(LENGTH test-classes.repeatingAnnot_87_SRCS test-classes.repeatingAnnot_87_SRCS_LENGTH)
if(test-classes.repeatingAnnot_87_SRCS_LENGTH)
	add_library(test-classes.repeatingAnnot_87 OBJECT "${test-classes.repeatingAnnot_87_SRCS}" "${test-classes.repeatingAnnot_87_HEADERS}")
	jcpp_enable_bigobj(test-classes.repeatingAnnot_87)
endif()