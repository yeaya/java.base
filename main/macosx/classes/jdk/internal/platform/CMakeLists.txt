#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.jdk.internal_54_SRCS)
file(GLOB macosx-classes.jdk.internal_54_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.jdk.internal_54_HEADERS}) 
list(LENGTH macosx-classes.jdk.internal_54_SRCS macosx-classes.jdk.internal_54_SRCS_LENGTH)
if(macosx-classes.jdk.internal_54_SRCS_LENGTH)
	add_library(macosx-classes.jdk.internal_54 OBJECT "${macosx-classes.jdk.internal_54_SRCS}" "${macosx-classes.jdk.internal_54_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.jdk.internal_54)
endif()