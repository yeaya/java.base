#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.org.ob_17_SRCS)
file(GLOB classes.jdk.internal.org.ob_17_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.org.ob_17_HEADERS}) 
list(LENGTH classes.jdk.internal.org.ob_17_SRCS classes.jdk.internal.org.ob_17_SRCS_LENGTH)
if(classes.jdk.internal.org.ob_17_SRCS_LENGTH)
	add_library(classes.jdk.internal.org.ob_17 OBJECT "${classes.jdk.internal.org.ob_17_SRCS}" "${classes.jdk.internal.org.ob_17_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.org.ob_17)
endif()