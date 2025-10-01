#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.jdk_SRCS)
file(GLOB windows-classes.jdk_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.jdk_HEADERS}) 
list(LENGTH windows-classes.jdk_SRCS windows-classes.jdk_SRCS_LENGTH)
if(windows-classes.jdk_SRCS_LENGTH)
	add_library(windows-classes.jdk OBJECT "${windows-classes.jdk_SRCS}" "${windows-classes.jdk_HEADERS}")
	jcpp_enable_bigobj(windows-classes.jdk)
endif()