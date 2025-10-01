#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.java.nio.file_SRCS)
file(GLOB linux-classes.java.nio.file_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.java.nio.file_HEADERS}) 
list(LENGTH linux-classes.java.nio.file_SRCS linux-classes.java.nio.file_SRCS_LENGTH)
if(linux-classes.java.nio.file_SRCS_LENGTH)
	add_library(linux-classes.java.nio.file OBJECT "${linux-classes.java.nio.file_SRCS}" "${linux-classes.java.nio.file_HEADERS}")
	jcpp_enable_bigobj(linux-classes.java.nio.file)
endif()