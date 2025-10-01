#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.icu.util_SRCS)
file(GLOB classes.jdk.internal.icu.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.icu.util_HEADERS}) 
list(LENGTH classes.jdk.internal.icu.util_SRCS classes.jdk.internal.icu.util_SRCS_LENGTH)
if(classes.jdk.internal.icu.util_SRCS_LENGTH)
	add_library(classes.jdk.internal.icu.util OBJECT "${classes.jdk.internal.icu.util_SRCS}" "${classes.jdk.internal.icu.util_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.icu.util)
endif()