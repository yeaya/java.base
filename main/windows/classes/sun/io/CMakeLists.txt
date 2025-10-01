#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.io_SRCS)
file(GLOB windows-classes.sun.io_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.io_HEADERS}) 
list(LENGTH windows-classes.sun.io_SRCS windows-classes.sun.io_SRCS_LENGTH)
if(windows-classes.sun.io_SRCS_LENGTH)
	add_library(windows-classes.sun.io OBJECT "${windows-classes.sun.io_SRCS}" "${windows-classes.sun.io_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.io)
endif()