#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.pkcs12_SRCS)
file(GLOB classes.sun.security.pkcs12_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.pkcs12_HEADERS}) 
list(LENGTH classes.sun.security.pkcs12_SRCS classes.sun.security.pkcs12_SRCS_LENGTH)
if(classes.sun.security.pkcs12_SRCS_LENGTH)
	add_library(classes.sun.security.pkcs12 OBJECT "${classes.sun.security.pkcs12_SRCS}" "${classes.sun.security.pkcs12_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.pkcs12)
endif()