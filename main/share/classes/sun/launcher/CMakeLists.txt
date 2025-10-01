#machine generated

add_subdirectory("resources")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.launcher_SRCS)
file(GLOB classes.sun.launcher_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.launcher_HEADERS}) 
list(LENGTH classes.sun.launcher_SRCS classes.sun.launcher_SRCS_LENGTH)
if(classes.sun.launcher_SRCS_LENGTH)
	add_library(classes.sun.launcher OBJECT "${classes.sun.launcher_SRCS}" "${classes.sun.launcher_HEADERS}")
	jcpp_enable_bigobj(classes.sun.launcher)
endif()