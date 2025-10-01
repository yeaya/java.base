#machine generated

add_subdirectory("impl")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.ftp_SRCS)
file(GLOB classes.sun.net.ftp_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.ftp_HEADERS}) 
list(LENGTH classes.sun.net.ftp_SRCS classes.sun.net.ftp_SRCS_LENGTH)
if(classes.sun.net.ftp_SRCS_LENGTH)
	add_library(classes.sun.net.ftp OBJECT "${classes.sun.net.ftp_SRCS}" "${classes.sun.net.ftp_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.ftp)
endif()