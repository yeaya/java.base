#machine generated

add_subdirectory("sax")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.internal.org.xml_SRCS)
file(GLOB classes.jdk.internal.org.xml_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.internal.org.xml_HEADERS}) 
list(LENGTH classes.jdk.internal.org.xml_SRCS classes.jdk.internal.org.xml_SRCS_LENGTH)
if(classes.jdk.internal.org.xml_SRCS_LENGTH)
	add_library(classes.jdk.internal.org.xml OBJECT "${classes.jdk.internal.org.xml_SRCS}" "${classes.jdk.internal.org.xml_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.internal.org.xml)
endif()