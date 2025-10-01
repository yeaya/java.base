#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.META-INF.services_SRCS)
file(GLOB classes.META-INF.services_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.META-INF.services_HEADERS}) 
list(LENGTH classes.META-INF.services_SRCS classes.META-INF.services_SRCS_LENGTH)
if(classes.META-INF.services_SRCS_LENGTH)
	add_library(classes.META-INF.services OBJECT "${classes.META-INF.services_SRCS}" "${classes.META-INF.services_HEADERS}")
	jcpp_enable_bigobj(classes.META-INF.services)
endif()