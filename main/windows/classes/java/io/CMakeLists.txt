#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.io_SRCS)
file(GLOB windows-classes.java.io_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.io_HEADERS}) 
list(LENGTH windows-classes.java.io_SRCS windows-classes.java.io_SRCS_LENGTH)
if(windows-classes.java.io_SRCS_LENGTH)
	add_library(windows-classes.java.io OBJECT "${windows-classes.java.io_SRCS}" "${windows-classes.java.io_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.io)
endif()