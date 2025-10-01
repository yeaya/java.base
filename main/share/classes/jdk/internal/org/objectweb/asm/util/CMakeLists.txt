#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.org.ob_20_SRCS)
file(GLOB classes.jdk.internal.org.ob_20_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.org.ob_20_HEADERS}) 
list(LENGTH classes.jdk.internal.org.ob_20_SRCS classes.jdk.internal.org.ob_20_SRCS_LENGTH)
if(classes.jdk.internal.org.ob_20_SRCS_LENGTH)
	add_library(classes.jdk.internal.org.ob_20 OBJECT "${classes.jdk.internal.org.ob_20_SRCS}" "${classes.jdk.internal.org.ob_20_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.org.ob_20)
endif()