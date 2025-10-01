#machine generated

add_subdirectory("cert")
add_subdirectory("interfaces")
add_subdirectory("spec")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.security_SRCS)
file(GLOB classes.java.security_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.security_HEADERS}) 
list(LENGTH classes.java.security_SRCS classes.java.security_SRCS_LENGTH)
if(classes.java.security_SRCS_LENGTH)
	add_library(classes.java.security OBJECT "${classes.java.security_SRCS}" "${classes.java.security_HEADERS}")
	jcpp_enable_bigobj(classes.java.security)
endif()