#machine generated

add_subdirectory("icudt67b")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.icu.im_11_SRCS)
file(GLOB classes.jdk.internal.icu.im_11_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.icu.im_11_HEADERS}) 
list(LENGTH classes.jdk.internal.icu.im_11_SRCS classes.jdk.internal.icu.im_11_SRCS_LENGTH)
if(classes.jdk.internal.icu.im_11_SRCS_LENGTH)
	add_library(classes.jdk.internal.icu.im_11 OBJECT "${classes.jdk.internal.icu.im_11_SRCS}" "${classes.jdk.internal.icu.im_11_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.icu.im_11)
endif()