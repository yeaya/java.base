#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.net.www_77_SRCS)
file(GLOB windows-classes.sun.net.www_77_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.net.www_77_HEADERS}) 
list(LENGTH windows-classes.sun.net.www_77_SRCS windows-classes.sun.net.www_77_SRCS_LENGTH)
if(windows-classes.sun.net.www_77_SRCS_LENGTH)
	add_library(windows-classes.sun.net.www_77 OBJECT "${windows-classes.sun.net.www_77_SRCS}" "${windows-classes.sun.net.www_77_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.net.www_77)
endif()