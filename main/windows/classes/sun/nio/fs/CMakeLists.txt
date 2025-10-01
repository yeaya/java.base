#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.nio.fs_SRCS)
file(GLOB windows-classes.sun.nio.fs_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.nio.fs_HEADERS}) 
list(LENGTH windows-classes.sun.nio.fs_SRCS windows-classes.sun.nio.fs_SRCS_LENGTH)
if(windows-classes.sun.nio.fs_SRCS_LENGTH)
	add_library(windows-classes.sun.nio.fs OBJECT "${windows-classes.sun.nio.fs_SRCS}" "${windows-classes.sun.nio.fs_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.nio.fs)
endif()