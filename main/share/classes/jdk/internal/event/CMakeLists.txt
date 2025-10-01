#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.event_SRCS)
file(GLOB classes.jdk.internal.event_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.event_HEADERS}) 
list(LENGTH classes.jdk.internal.event_SRCS classes.jdk.internal.event_SRCS_LENGTH)
if(classes.jdk.internal.event_SRCS_LENGTH)
	add_library(classes.jdk.internal.event OBJECT "${classes.jdk.internal.event_SRCS}" "${classes.jdk.internal.event_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.event)
endif()