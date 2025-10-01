#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.ftp.impl_SRCS)
file(GLOB classes.sun.net.ftp.impl_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.ftp.impl_HEADERS}) 
list(LENGTH classes.sun.net.ftp.impl_SRCS classes.sun.net.ftp.impl_SRCS_LENGTH)
if(classes.sun.net.ftp.impl_SRCS_LENGTH)
	add_library(classes.sun.net.ftp.impl OBJECT "${classes.sun.net.ftp.impl_SRCS}" "${classes.sun.net.ftp.impl_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.ftp.impl)
endif()