#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.java.net_SRCS)
file(GLOB macosx-classes.java.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.java.net_HEADERS}) 
list(LENGTH macosx-classes.java.net_SRCS macosx-classes.java.net_SRCS_LENGTH)
if(macosx-classes.java.net_SRCS_LENGTH)
	add_library(macosx-classes.java.net OBJECT "${macosx-classes.java.net_SRCS}" "${macosx-classes.java.net_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.java.net)
endif()