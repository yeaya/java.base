#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.jrtfs_SRCS)
file(GLOB classes.jdk.internal.jrtfs_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.jrtfs_HEADERS}) 
list(LENGTH classes.jdk.internal.jrtfs_SRCS classes.jdk.internal.jrtfs_SRCS_LENGTH)
if(classes.jdk.internal.jrtfs_SRCS_LENGTH)
	add_library(classes.jdk.internal.jrtfs OBJECT "${classes.jdk.internal.jrtfs_SRCS}" "${classes.jdk.internal.jrtfs_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.jrtfs)
endif()