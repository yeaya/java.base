#machine generated

add_subdirectory("impl")
add_subdirectory("lang")
add_subdirectory("text")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.icu_SRCS)
file(GLOB classes.jdk.internal.icu_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.icu_HEADERS}) 
list(LENGTH classes.jdk.internal.icu_SRCS classes.jdk.internal.icu_SRCS_LENGTH)
if(classes.jdk.internal.icu_SRCS_LENGTH)
	add_library(classes.jdk.internal.icu OBJECT "${classes.jdk.internal.icu_SRCS}" "${classes.jdk.internal.icu_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.icu)
endif()