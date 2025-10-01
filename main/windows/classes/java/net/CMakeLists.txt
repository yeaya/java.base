#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.net_SRCS)
file(GLOB windows-classes.java.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.net_HEADERS}) 
list(LENGTH windows-classes.java.net_SRCS windows-classes.java.net_SRCS_LENGTH)
if(windows-classes.java.net_SRCS_LENGTH)
	add_library(windows-classes.java.net OBJECT "${windows-classes.java.net_SRCS}" "${windows-classes.java.net_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.net)
endif()