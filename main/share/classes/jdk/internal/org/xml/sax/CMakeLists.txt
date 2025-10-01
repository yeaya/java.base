#machine generated

add_subdirectory("helpers")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.org.xm_21_SRCS)
file(GLOB classes.jdk.internal.org.xm_21_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.org.xm_21_HEADERS}) 
list(LENGTH classes.jdk.internal.org.xm_21_SRCS classes.jdk.internal.org.xm_21_SRCS_LENGTH)
if(classes.jdk.internal.org.xm_21_SRCS_LENGTH)
	add_library(classes.jdk.internal.org.xm_21 OBJECT "${classes.jdk.internal.org.xm_21_SRCS}" "${classes.jdk.internal.org.xm_21_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.org.xm_21)
endif()