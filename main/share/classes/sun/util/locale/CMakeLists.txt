#machine generated

add_subdirectory("provider")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.util.locale_SRCS)
file(GLOB classes.sun.util.locale_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.util.locale_HEADERS}) 
list(LENGTH classes.sun.util.locale_SRCS classes.sun.util.locale_SRCS_LENGTH)
if(classes.sun.util.locale_SRCS_LENGTH)
	add_library(classes.sun.util.locale OBJECT "${classes.sun.util.locale_SRCS}" "${classes.sun.util.locale_HEADERS}")
	jcpp_enable_bigobj(classes.sun.util.locale)
endif()