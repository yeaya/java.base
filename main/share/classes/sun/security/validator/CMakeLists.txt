#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.validator_SRCS)
file(GLOB classes.sun.security.validator_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.validator_HEADERS}) 
list(LENGTH classes.sun.security.validator_SRCS classes.sun.security.validator_SRCS_LENGTH)
if(classes.sun.security.validator_SRCS_LENGTH)
	add_library(classes.sun.security.validator OBJECT "${classes.sun.security.validator_SRCS}" "${classes.sun.security.validator_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.validator)
endif()