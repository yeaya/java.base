#machine generated

add_subdirectory("impl")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.util.xml_SRCS)
file(GLOB classes.jdk.internal.util.xml_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.util.xml_HEADERS}) 
list(LENGTH classes.jdk.internal.util.xml_SRCS classes.jdk.internal.util.xml_SRCS_LENGTH)
if(classes.jdk.internal.util.xml_SRCS_LENGTH)
	add_library(classes.jdk.internal.util.xml OBJECT "${classes.jdk.internal.util.xml_SRCS}" "${classes.jdk.internal.util.xml_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.util.xml)
endif()