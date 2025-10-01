#machine generated

add_subdirectory("provider")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.util.lo_82_SRCS)
file(GLOB windows-classes.sun.util.lo_82_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.util.lo_82_HEADERS}) 
list(LENGTH windows-classes.sun.util.lo_82_SRCS windows-classes.sun.util.lo_82_SRCS_LENGTH)
if(windows-classes.sun.util.lo_82_SRCS_LENGTH)
	add_library(windows-classes.sun.util.lo_82 OBJECT "${windows-classes.sun.util.lo_82_SRCS}" "${windows-classes.sun.util.lo_82_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.util.lo_82)
endif()