#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.vm.vector_SRCS)
file(GLOB classes.jdk.internal.vm.vector_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.vm.vector_HEADERS}) 
list(LENGTH classes.jdk.internal.vm.vector_SRCS classes.jdk.internal.vm.vector_SRCS_LENGTH)
if(classes.jdk.internal.vm.vector_SRCS_LENGTH)
	add_library(classes.jdk.internal.vm.vector OBJECT "${classes.jdk.internal.vm.vector_SRCS}" "${classes.jdk.internal.vm.vector_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.vm.vector)
endif()