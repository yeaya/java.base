#machine generated

add_subdirectory("dns")
add_subdirectory("www")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.net_SRCS)
file(GLOB windows-classes.sun.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.net_HEADERS}) 
list(LENGTH windows-classes.sun.net_SRCS windows-classes.sun.net_SRCS_LENGTH)
if(windows-classes.sun.net_SRCS_LENGTH)
	add_library(windows-classes.sun.net OBJECT "${windows-classes.sun.net_SRCS}" "${windows-classes.sun.net_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.net)
endif()