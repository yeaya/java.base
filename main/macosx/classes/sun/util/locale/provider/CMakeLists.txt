#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.util.loc_61_SRCS)
file(GLOB macosx-classes.sun.util.loc_61_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.util.loc_61_HEADERS}) 
list(LENGTH macosx-classes.sun.util.loc_61_SRCS macosx-classes.sun.util.loc_61_SRCS_LENGTH)
if(macosx-classes.sun.util.loc_61_SRCS_LENGTH)
	add_library(macosx-classes.sun.util.loc_61 OBJECT "${macosx-classes.sun.util.loc_61_SRCS}" "${macosx-classes.sun.util.loc_61_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.util.loc_61)
endif()