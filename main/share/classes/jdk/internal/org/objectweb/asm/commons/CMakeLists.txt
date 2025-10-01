#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.org.ob_16_SRCS)
file(GLOB classes.jdk.internal.org.ob_16_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.org.ob_16_HEADERS}) 
list(LENGTH classes.jdk.internal.org.ob_16_SRCS classes.jdk.internal.org.ob_16_SRCS_LENGTH)
if(classes.jdk.internal.org.ob_16_SRCS_LENGTH)
	add_library(classes.jdk.internal.org.ob_16 OBJECT "${classes.jdk.internal.org.ob_16_SRCS}" "${classes.jdk.internal.org.ob_16_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.org.ob_16)
endif()