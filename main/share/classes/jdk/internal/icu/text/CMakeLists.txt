#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.icu.text_SRCS)
file(GLOB classes.jdk.internal.icu.text_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.icu.text_HEADERS}) 
list(LENGTH classes.jdk.internal.icu.text_SRCS classes.jdk.internal.icu.text_SRCS_LENGTH)
if(classes.jdk.internal.icu.text_SRCS_LENGTH)
	add_library(classes.jdk.internal.icu.text OBJECT "${classes.jdk.internal.icu.text_SRCS}" "${classes.jdk.internal.icu.text_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.icu.text)
endif()