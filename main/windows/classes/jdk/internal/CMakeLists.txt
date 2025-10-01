#machine generated

add_subdirectory("loader")
add_subdirectory("misc")
add_subdirectory("platform")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.jdk.internal_SRCS)
file(GLOB windows-classes.jdk.internal_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.jdk.internal_HEADERS}) 
list(LENGTH windows-classes.jdk.internal_SRCS windows-classes.jdk.internal_SRCS_LENGTH)
if(windows-classes.jdk.internal_SRCS_LENGTH)
	add_library(windows-classes.jdk.internal OBJECT "${windows-classes.jdk.internal_SRCS}" "${windows-classes.jdk.internal_HEADERS}")
	jcpp_enable_bigobj(windows-classes.jdk.internal)
endif()