#machine generated

add_subdirectory("ch")
add_subdirectory("fs")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.nio_SRCS)
file(GLOB macosx-classes.sun.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.nio_HEADERS}) 
list(LENGTH macosx-classes.sun.nio_SRCS macosx-classes.sun.nio_SRCS_LENGTH)
if(macosx-classes.sun.nio_SRCS_LENGTH)
	add_library(macosx-classes.sun.nio OBJECT "${macosx-classes.sun.nio_SRCS}" "${macosx-classes.sun.nio_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.nio)
endif()