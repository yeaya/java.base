#machine generated

add_subdirectory("ssl")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.provid_45_SRCS)
file(GLOB classes.sun.security.provid_45_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.provid_45_HEADERS}) 
list(LENGTH classes.sun.security.provid_45_SRCS classes.sun.security.provid_45_SRCS_LENGTH)
if(classes.sun.security.provid_45_SRCS_LENGTH)
	add_library(classes.sun.security.provid_45 OBJECT "${classes.sun.security.provid_45_SRCS}" "${classes.sun.security.provid_45_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.provid_45)
endif()