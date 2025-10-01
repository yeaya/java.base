#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.util.lo_83_SRCS)
file(GLOB windows-classes.sun.util.lo_83_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.util.lo_83_HEADERS}) 
list(LENGTH windows-classes.sun.util.lo_83_SRCS windows-classes.sun.util.lo_83_SRCS_LENGTH)
if(windows-classes.sun.util.lo_83_SRCS_LENGTH)
	add_library(windows-classes.sun.util.lo_83 OBJECT "${windows-classes.sun.util.lo_83_SRCS}" "${windows-classes.sun.util.lo_83_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.util.lo_83)
endif()