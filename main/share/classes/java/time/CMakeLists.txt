#machine generated

add_subdirectory("chrono")
add_subdirectory("format")
add_subdirectory("temporal")
add_subdirectory("zone")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.time_SRCS)
file(GLOB classes.java.time_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.time_HEADERS}) 
list(LENGTH classes.java.time_SRCS classes.java.time_SRCS_LENGTH)
if(classes.java.time_SRCS_LENGTH)
	add_library(classes.java.time OBJECT "${classes.java.time_SRCS}" "${classes.java.time_HEADERS}")
	jcpp_enable_bigobj(classes.java.time)
endif()