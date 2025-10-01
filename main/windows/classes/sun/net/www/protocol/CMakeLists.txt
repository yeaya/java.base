#machine generated

add_subdirectory("file")
add_subdirectory("http")
add_subdirectory("jar")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.net.www_76_SRCS)
file(GLOB windows-classes.sun.net.www_76_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.net.www_76_HEADERS}) 
list(LENGTH windows-classes.sun.net.www_76_SRCS windows-classes.sun.net.www_76_SRCS_LENGTH)
if(windows-classes.sun.net.www_76_SRCS_LENGTH)
	add_library(windows-classes.sun.net.www_76 OBJECT "${windows-classes.sun.net.www_76_SRCS}" "${windows-classes.sun.net.www_76_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.net.www_76)
endif()