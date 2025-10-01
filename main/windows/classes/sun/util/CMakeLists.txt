#machine generated

add_subdirectory("locale")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.util_SRCS)
file(GLOB windows-classes.sun.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.util_HEADERS}) 
list(LENGTH windows-classes.sun.util_SRCS windows-classes.sun.util_SRCS_LENGTH)
if(windows-classes.sun.util_SRCS_LENGTH)
	add_library(windows-classes.sun.util OBJECT "${windows-classes.sun.util_SRCS}" "${windows-classes.sun.util_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.util)
endif()