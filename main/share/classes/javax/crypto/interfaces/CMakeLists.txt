#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.crypto.interfa_5_SRCS)
file(GLOB classes.javax.crypto.interfa_5_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.crypto.interfa_5_HEADERS}) 
list(LENGTH classes.javax.crypto.interfa_5_SRCS classes.javax.crypto.interfa_5_SRCS_LENGTH)
if(classes.javax.crypto.interfa_5_SRCS_LENGTH)
	add_library(classes.javax.crypto.interfa_5 OBJECT "${classes.javax.crypto.interfa_5_SRCS}" "${classes.javax.crypto.interfa_5_HEADERS}")
	jcpp_enable_bigobj(classes.javax.crypto.interfa_5)
endif()