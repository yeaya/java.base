#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.smtp_SRCS)
file(GLOB classes.sun.net.smtp_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.smtp_HEADERS}) 
list(LENGTH classes.sun.net.smtp_SRCS classes.sun.net.smtp_SRCS_LENGTH)
if(classes.sun.net.smtp_SRCS_LENGTH)
	add_library(classes.sun.net.smtp OBJECT "${classes.sun.net.smtp_SRCS}" "${classes.sun.net.smtp_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.smtp)
endif()