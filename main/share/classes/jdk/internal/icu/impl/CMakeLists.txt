#machine generated

add_subdirectory("data")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.icu.impl_SRCS)
file(GLOB classes.jdk.internal.icu.impl_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.icu.impl_HEADERS}) 
list(LENGTH classes.jdk.internal.icu.impl_SRCS classes.jdk.internal.icu.impl_SRCS_LENGTH)
if(classes.jdk.internal.icu.impl_SRCS_LENGTH)
	add_library(classes.jdk.internal.icu.impl OBJECT "${classes.jdk.internal.icu.impl_SRCS}" "${classes.jdk.internal.icu.impl_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.icu.impl)
endif()