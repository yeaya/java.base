#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.x509_SRCS)
file(GLOB classes.sun.security.x509_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.x509_HEADERS}) 
list(LENGTH classes.sun.security.x509_SRCS classes.sun.security.x509_SRCS_LENGTH)
if(classes.sun.security.x509_SRCS_LENGTH)
	add_library(classes.sun.security.x509 OBJECT "${classes.sun.security.x509_SRCS}" "${classes.sun.security.x509_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.x509)
endif()