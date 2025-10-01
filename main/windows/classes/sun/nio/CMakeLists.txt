#machine generated

add_subdirectory("ch")
add_subdirectory("fs")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.sun.nio_SRCS)
file(GLOB windows-classes.sun.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.sun.nio_HEADERS}) 
list(LENGTH windows-classes.sun.nio_SRCS windows-classes.sun.nio_SRCS_LENGTH)
if(windows-classes.sun.nio_SRCS_LENGTH)
	add_library(windows-classes.sun.nio OBJECT "${windows-classes.sun.nio_SRCS}" "${windows-classes.sun.nio_HEADERS}")
	jcpp_enable_bigobj(windows-classes.sun.nio)
endif()