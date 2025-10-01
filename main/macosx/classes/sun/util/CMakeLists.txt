#machine generated

add_subdirectory("locale")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.util_SRCS)
file(GLOB macosx-classes.sun.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.util_HEADERS}) 
list(LENGTH macosx-classes.sun.util_SRCS macosx-classes.sun.util_SRCS_LENGTH)
if(macosx-classes.sun.util_SRCS_LENGTH)
	add_library(macosx-classes.sun.util OBJECT "${macosx-classes.sun.util_SRCS}" "${macosx-classes.sun.util_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.util)
endif()