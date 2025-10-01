#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.rsa_SRCS)
file(GLOB classes.sun.security.rsa_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.rsa_HEADERS}) 
list(LENGTH classes.sun.security.rsa_SRCS classes.sun.security.rsa_SRCS_LENGTH)
if(classes.sun.security.rsa_SRCS_LENGTH)
	add_library(classes.sun.security.rsa OBJECT "${classes.sun.security.rsa_SRCS}" "${classes.sun.security.rsa_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.rsa)
endif()