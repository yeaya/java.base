#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.util.locale.pro_50_SRCS)
file(GLOB classes.sun.util.locale.pro_50_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.util.locale.pro_50_HEADERS}) 
list(LENGTH classes.sun.util.locale.pro_50_SRCS classes.sun.util.locale.pro_50_SRCS_LENGTH)
if(classes.sun.util.locale.pro_50_SRCS_LENGTH)
	add_library(classes.sun.util.locale.pro_50 OBJECT "${classes.sun.util.locale.pro_50_SRCS}" "${classes.sun.util.locale.pro_50_HEADERS}")
	jcpp_enable_bigobj(classes.sun.util.locale.pro_50)
endif()