#machine generated

add_subdirectory("factory")
add_subdirectory("parser")
add_subdirectory("reflectiveObjects")
add_subdirectory("repository")
add_subdirectory("scope")
add_subdirectory("tree")
add_subdirectory("visitor")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.reflect.generics_SRCS)
file(GLOB classes.sun.reflect.generics_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.reflect.generics_HEADERS}) 
list(LENGTH classes.sun.reflect.generics_SRCS classes.sun.reflect.generics_SRCS_LENGTH)
if(classes.sun.reflect.generics_SRCS_LENGTH)
	add_library(classes.sun.reflect.generics OBJECT "${classes.sun.reflect.generics_SRCS}" "${classes.sun.reflect.generics_HEADERS}")
	jcpp_enable_bigobj(classes.sun.reflect.generics)
endif()