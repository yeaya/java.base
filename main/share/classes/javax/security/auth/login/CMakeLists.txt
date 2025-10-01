#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.security.auth._7_SRCS)
file(GLOB classes.javax.security.auth._7_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.security.auth._7_HEADERS}) 
list(LENGTH classes.javax.security.auth._7_SRCS classes.javax.security.auth._7_SRCS_LENGTH)
if(classes.javax.security.auth._7_SRCS_LENGTH)
	add_library(classes.javax.security.auth._7 OBJECT "${classes.javax.security.auth._7_SRCS}" "${classes.javax.security.auth._7_HEADERS}")
	jcpp_enable_bigobj(classes.javax.security.auth._7)
endif()