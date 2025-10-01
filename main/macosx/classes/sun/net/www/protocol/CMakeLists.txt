#machine generated

add_subdirectory("file")
add_subdirectory("http")
add_subdirectory("jar")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.net.www._55_SRCS)
file(GLOB macosx-classes.sun.net.www._55_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.net.www._55_HEADERS}) 
list(LENGTH macosx-classes.sun.net.www._55_SRCS macosx-classes.sun.net.www._55_SRCS_LENGTH)
if(macosx-classes.sun.net.www._55_SRCS_LENGTH)
	add_library(macosx-classes.sun.net.www._55 OBJECT "${macosx-classes.sun.net.www._55_SRCS}" "${macosx-classes.sun.net.www._55_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.net.www._55)
endif()