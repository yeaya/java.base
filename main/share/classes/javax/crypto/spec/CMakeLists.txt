#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.crypto.spec_SRCS)
file(GLOB classes.javax.crypto.spec_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.crypto.spec_HEADERS}) 
list(LENGTH classes.javax.crypto.spec_SRCS classes.javax.crypto.spec_SRCS_LENGTH)
if(classes.javax.crypto.spec_SRCS_LENGTH)
	add_library(classes.javax.crypto.spec OBJECT "${classes.javax.crypto.spec_SRCS}" "${classes.javax.crypto.spec_HEADERS}")
	jcpp_enable_bigobj(classes.javax.crypto.spec)
endif()