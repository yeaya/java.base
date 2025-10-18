#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.java.net_SRCS)
file(GLOB macos-classes.java.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.java.net_HEADERS}) 
list(LENGTH macos-classes.java.net_SRCS macos-classes.java.net_SRCS_LENGTH)
if(macos-classes.java.net_SRCS_LENGTH)
	add_library(macos-classes.java.net OBJECT "${macos-classes.java.net_SRCS}" "${macos-classes.java.net_HEADERS}")
	jcpp_enable_bigobj(macos-classes.java.net)
endif()