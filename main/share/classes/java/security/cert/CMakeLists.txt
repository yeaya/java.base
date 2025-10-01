#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.security.cert_SRCS)
file(GLOB classes.java.security.cert_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.security.cert_HEADERS}) 
list(LENGTH classes.java.security.cert_SRCS classes.java.security.cert_SRCS_LENGTH)
if(classes.java.security.cert_SRCS_LENGTH)
	add_library(classes.java.security.cert OBJECT "${classes.java.security.cert_SRCS}" "${classes.java.security.cert_HEADERS}")
	jcpp_enable_bigobj(classes.java.security.cert)
endif()