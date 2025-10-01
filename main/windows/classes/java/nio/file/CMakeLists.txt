#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.nio.file_SRCS)
file(GLOB windows-classes.java.nio.file_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.nio.file_HEADERS}) 
list(LENGTH windows-classes.java.nio.file_SRCS windows-classes.java.nio.file_SRCS_LENGTH)
if(windows-classes.java.nio.file_SRCS_LENGTH)
	add_library(windows-classes.java.nio.file OBJECT "${windows-classes.java.nio.file_SRCS}" "${windows-classes.java.nio.file_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.nio.file)
endif()