#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.launcher.resources_SRCS)
file(GLOB classes.sun.launcher.resources_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.launcher.resources_HEADERS}) 
list(LENGTH classes.sun.launcher.resources_SRCS classes.sun.launcher.resources_SRCS_LENGTH)
if(classes.sun.launcher.resources_SRCS_LENGTH)
	add_library(classes.sun.launcher.resources OBJECT "${classes.sun.launcher.resources_SRCS}" "${classes.sun.launcher.resources_HEADERS}")
	jcpp_enable_bigobj(classes.sun.launcher.resources)
endif()