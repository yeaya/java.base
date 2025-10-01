#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.util.calendar_SRCS)
file(GLOB classes.sun.util.calendar_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.util.calendar_HEADERS}) 
list(LENGTH classes.sun.util.calendar_SRCS classes.sun.util.calendar_SRCS_LENGTH)
if(classes.sun.util.calendar_SRCS_LENGTH)
	add_library(classes.sun.util.calendar OBJECT "${classes.sun.util.calendar_SRCS}" "${classes.sun.util.calendar_HEADERS}")
	jcpp_enable_bigobj(classes.sun.util.calendar)
endif()