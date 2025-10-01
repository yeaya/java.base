#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.platform_SRCS)
file(GLOB classes.jdk.internal.platform_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.platform_HEADERS}) 
list(LENGTH classes.jdk.internal.platform_SRCS classes.jdk.internal.platform_SRCS_LENGTH)
if(classes.jdk.internal.platform_SRCS_LENGTH)
	add_library(classes.jdk.internal.platform OBJECT "${classes.jdk.internal.platform_SRCS}" "${classes.jdk.internal.platform_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.platform)
endif()