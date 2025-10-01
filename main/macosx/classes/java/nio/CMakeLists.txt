#machine generated

add_subdirectory("file")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.java.nio_SRCS)
file(GLOB macosx-classes.java.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.java.nio_HEADERS}) 
list(LENGTH macosx-classes.java.nio_SRCS macosx-classes.java.nio_SRCS_LENGTH)
if(macosx-classes.java.nio_SRCS_LENGTH)
	add_library(macosx-classes.java.nio OBJECT "${macosx-classes.java.nio_SRCS}" "${macosx-classes.java.nio_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.java.nio)
endif()