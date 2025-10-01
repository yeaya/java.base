#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.java.io_SRCS)
file(GLOB linux-classes.java.io_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.java.io_HEADERS}) 
list(LENGTH linux-classes.java.io_SRCS linux-classes.java.io_SRCS_LENGTH)
if(linux-classes.java.io_SRCS_LENGTH)
	add_library(linux-classes.java.io OBJECT "${linux-classes.java.io_SRCS}" "${linux-classes.java.io_HEADERS}")
	jcpp_enable_bigobj(linux-classes.java.io)
endif()