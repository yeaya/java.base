#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.icu.im_12_SRCS)
file(GLOB classes.jdk.internal.icu.im_12_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.icu.im_12_HEADERS}) 
list(LENGTH classes.jdk.internal.icu.im_12_SRCS classes.jdk.internal.icu.im_12_SRCS_LENGTH)
if(classes.jdk.internal.icu.im_12_SRCS_LENGTH)
	add_library(classes.jdk.internal.icu.im_12 OBJECT "${classes.jdk.internal.icu.im_12_SRCS}" "${classes.jdk.internal.icu.im_12_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.icu.im_12)
endif()