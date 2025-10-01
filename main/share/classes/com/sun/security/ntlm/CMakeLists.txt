#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.security.ntlm_SRCS)
file(GLOB classes.com.sun.security.ntlm_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.security.ntlm_HEADERS}) 
list(LENGTH classes.com.sun.security.ntlm_SRCS classes.com.sun.security.ntlm_SRCS_LENGTH)
if(classes.com.sun.security.ntlm_SRCS_LENGTH)
	add_library(classes.com.sun.security.ntlm OBJECT "${classes.com.sun.security.ntlm_SRCS}" "${classes.com.sun.security.ntlm_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.security.ntlm)
endif()