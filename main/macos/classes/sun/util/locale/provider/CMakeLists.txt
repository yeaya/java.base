#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.sun.util.loca_72_SRCS)
file(GLOB macos-classes.sun.util.loca_72_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.sun.util.loca_72_HEADERS}) 
list(LENGTH macos-classes.sun.util.loca_72_SRCS macos-classes.sun.util.loca_72_SRCS_LENGTH)
if(macos-classes.sun.util.loca_72_SRCS_LENGTH)
	add_library(macos-classes.sun.util.loca_72 OBJECT "${macos-classes.sun.util.loca_72_SRCS}" "${macos-classes.sun.util.loca_72_HEADERS}")
	jcpp_enable_bigobj(macos-classes.sun.util.loca_72)
endif()