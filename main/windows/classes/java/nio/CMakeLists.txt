#machine generated

add_subdirectory("file")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.nio_SRCS)
file(GLOB windows-classes.java.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.nio_HEADERS}) 
list(LENGTH windows-classes.java.nio_SRCS windows-classes.java.nio_SRCS_LENGTH)
if(windows-classes.java.nio_SRCS_LENGTH)
	add_library(windows-classes.java.nio OBJECT "${windows-classes.java.nio_SRCS}" "${windows-classes.java.nio_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.nio)
endif()