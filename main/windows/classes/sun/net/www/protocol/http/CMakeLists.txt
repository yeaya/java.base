#machine generated

add_subdirectory("ntlm")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.net.www_78_SRCS)
file(GLOB windows-classes.sun.net.www_78_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.net.www_78_HEADERS}) 
list(LENGTH windows-classes.sun.net.www_78_SRCS windows-classes.sun.net.www_78_SRCS_LENGTH)
if(windows-classes.sun.net.www_78_SRCS_LENGTH)
	add_library(windows-classes.sun.net.www_78 OBJECT "${windows-classes.sun.net.www_78_SRCS}" "${windows-classes.sun.net.www_78_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.net.www_78)
endif()