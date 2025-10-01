#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.util.cldr_SRCS)
file(GLOB classes.sun.util.cldr_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.util.cldr_HEADERS}) 
list(LENGTH classes.sun.util.cldr_SRCS classes.sun.util.cldr_SRCS_LENGTH)
if(classes.sun.util.cldr_SRCS_LENGTH)
	add_library(classes.sun.util.cldr OBJECT "${classes.sun.util.cldr_SRCS}" "${classes.sun.util.cldr_HEADERS}")
	jcpp_enable_bigobj(classes.sun.util.cldr)
endif()