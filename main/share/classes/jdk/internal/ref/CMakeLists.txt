#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.ref_SRCS)
file(GLOB classes.jdk.internal.ref_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.ref_HEADERS}) 
list(LENGTH classes.jdk.internal.ref_SRCS classes.jdk.internal.ref_SRCS_LENGTH)
if(classes.jdk.internal.ref_SRCS_LENGTH)
	add_library(classes.jdk.internal.ref OBJECT "${classes.jdk.internal.ref_SRCS}" "${classes.jdk.internal.ref_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.ref)
endif()