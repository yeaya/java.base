#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.nio.file.attrib_1_SRCS)
file(GLOB classes.java.nio.file.attrib_1_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.nio.file.attrib_1_HEADERS}) 
list(LENGTH classes.java.nio.file.attrib_1_SRCS classes.java.nio.file.attrib_1_SRCS_LENGTH)
if(classes.java.nio.file.attrib_1_SRCS_LENGTH)
	add_library(classes.java.nio.file.attrib_1 OBJECT "${classes.java.nio.file.attrib_1_SRCS}" "${classes.java.nio.file.attrib_1_HEADERS}")
	jcpp_enable_bigobj(classes.java.nio.file.attrib_1)
endif()