#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.access_10_SRCS)
file(GLOB classes.jdk.internal.access_10_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.access_10_HEADERS}) 
list(LENGTH classes.jdk.internal.access_10_SRCS classes.jdk.internal.access_10_SRCS_LENGTH)
if(classes.jdk.internal.access_10_SRCS_LENGTH)
	add_library(classes.jdk.internal.access_10 OBJECT "${classes.jdk.internal.access_10_SRCS}" "${classes.jdk.internal.access_10_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.access_10)
endif()