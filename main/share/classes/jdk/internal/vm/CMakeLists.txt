#machine generated

add_subdirectory("annotation")
add_subdirectory("vector")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.vm_SRCS)
file(GLOB classes.jdk.internal.vm_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.vm_HEADERS}) 
list(LENGTH classes.jdk.internal.vm_SRCS classes.jdk.internal.vm_SRCS_LENGTH)
if(classes.jdk.internal.vm_SRCS_LENGTH)
	add_library(classes.jdk.internal.vm OBJECT "${classes.jdk.internal.vm_SRCS}" "${classes.jdk.internal.vm_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.vm)
endif()