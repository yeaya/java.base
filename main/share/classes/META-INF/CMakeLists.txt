#machine generated

add_subdirectory("services")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.META-INF_SRCS)
file(GLOB classes.META-INF_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.META-INF_HEADERS}) 
list(LENGTH classes.META-INF_SRCS classes.META-INF_SRCS_LENGTH)
if(classes.META-INF_SRCS_LENGTH)
	add_library(classes.META-INF OBJECT "${classes.META-INF_SRCS}" "${classes.META-INF_HEADERS}")
	jcpp_enable_bigobj(classes.META-INF)
endif()