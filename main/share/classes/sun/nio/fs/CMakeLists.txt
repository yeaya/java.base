#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.nio.fs_SRCS)
file(GLOB classes.sun.nio.fs_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.nio.fs_HEADERS}) 
list(LENGTH classes.sun.nio.fs_SRCS classes.sun.nio.fs_SRCS_LENGTH)
if(classes.sun.nio.fs_SRCS_LENGTH)
	add_library(classes.sun.nio.fs OBJECT "${classes.sun.nio.fs_SRCS}" "${classes.sun.nio.fs_HEADERS}")
	jcpp_enable_bigobj(classes.sun.nio.fs)
endif()