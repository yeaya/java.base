#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.security.cert_SRCS)
file(GLOB classes.javax.security.cert_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.security.cert_HEADERS}) 
list(LENGTH classes.javax.security.cert_SRCS classes.javax.security.cert_SRCS_LENGTH)
if(classes.javax.security.cert_SRCS_LENGTH)
	add_library(classes.javax.security.cert OBJECT "${classes.javax.security.cert_SRCS}" "${classes.javax.security.cert_HEADERS}")
	jcpp_enable_bigobj(classes.javax.security.cert)
endif()