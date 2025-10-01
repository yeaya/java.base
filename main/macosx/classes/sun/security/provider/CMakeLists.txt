#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.sun.security_60_SRCS)
file(GLOB macosx-classes.sun.security_60_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.sun.security_60_HEADERS}) 
list(LENGTH macosx-classes.sun.security_60_SRCS macosx-classes.sun.security_60_SRCS_LENGTH)
if(macosx-classes.sun.security_60_SRCS_LENGTH)
	add_library(macosx-classes.sun.security_60 OBJECT "${macosx-classes.sun.security_60_SRCS}" "${macosx-classes.sun.security_60_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.sun.security_60)
endif()