#machine generated

add_subdirectory("atomic")
add_subdirectory("locks")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.util.concurrent_SRCS)
file(GLOB classes.java.util.concurrent_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.util.concurrent_HEADERS}) 
list(LENGTH classes.java.util.concurrent_SRCS classes.java.util.concurrent_SRCS_LENGTH)
if(classes.java.util.concurrent_SRCS_LENGTH)
	add_library(classes.java.util.concurrent OBJECT "${classes.java.util.concurrent_SRCS}" "${classes.java.util.concurrent_HEADERS}")
	jcpp_enable_bigobj(classes.java.util.concurrent)
endif()