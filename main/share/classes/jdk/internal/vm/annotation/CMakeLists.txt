#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.vm.ann_25_SRCS)
file(GLOB classes.jdk.internal.vm.ann_25_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.vm.ann_25_HEADERS}) 
list(LENGTH classes.jdk.internal.vm.ann_25_SRCS classes.jdk.internal.vm.ann_25_SRCS_LENGTH)
if(classes.jdk.internal.vm.ann_25_SRCS_LENGTH)
	add_library(classes.jdk.internal.vm.ann_25 OBJECT "${classes.jdk.internal.vm.ann_25_SRCS}" "${classes.jdk.internal.vm.ann_25_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.vm.ann_25)
endif()