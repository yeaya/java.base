#machine generated

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.security.tools.keytool OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.security.tools.keytool)
endif()