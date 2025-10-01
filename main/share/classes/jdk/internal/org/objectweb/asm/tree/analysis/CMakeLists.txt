#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.org.ob_19_SRCS)
file(GLOB classes.jdk.internal.org.ob_19_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.org.ob_19_HEADERS}) 
list(LENGTH classes.jdk.internal.org.ob_19_SRCS classes.jdk.internal.org.ob_19_SRCS_LENGTH)
if(classes.jdk.internal.org.ob_19_SRCS_LENGTH)
	add_library(classes.jdk.internal.org.ob_19 OBJECT "${classes.jdk.internal.org.ob_19_SRCS}" "${classes.jdk.internal.org.ob_19_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.org.ob_19)
endif()