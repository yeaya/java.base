#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.util.zip_SRCS)
file(GLOB classes.java.util.zip_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.util.zip_HEADERS}) 
list(LENGTH classes.java.util.zip_SRCS classes.java.util.zip_SRCS_LENGTH)
if(classes.java.util.zip_SRCS_LENGTH)
	add_library(classes.java.util.zip OBJECT "${classes.java.util.zip_SRCS}" "${classes.java.util.zip_HEADERS}")
	jcpp_enable_bigobj(classes.java.util.zip)
endif()