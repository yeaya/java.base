#machine generated

add_subdirectory("provider")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.util.locale_SRCS)
file(GLOB macosx-classes.sun.util.locale_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.util.locale_HEADERS}) 
list(LENGTH macosx-classes.sun.util.locale_SRCS macosx-classes.sun.util.locale_SRCS_LENGTH)
if(macosx-classes.sun.util.locale_SRCS_LENGTH)
	add_library(macosx-classes.sun.util.locale OBJECT "${macosx-classes.sun.util.locale_SRCS}" "${macosx-classes.sun.util.locale_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.util.locale)
endif()