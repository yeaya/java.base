#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.util.m_48_SRCS)
file(GLOB classes.sun.security.util.m_48_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.util.m_48_HEADERS}) 
list(LENGTH classes.sun.security.util.m_48_SRCS classes.sun.security.util.m_48_SRCS_LENGTH)
if(classes.sun.security.util.m_48_SRCS_LENGTH)
	add_library(classes.sun.security.util.m_48 OBJECT "${classes.sun.security.util.m_48_SRCS}" "${classes.sun.security.util.m_48_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.util.m_48)
endif()