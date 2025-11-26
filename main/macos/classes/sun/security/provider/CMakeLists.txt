#machine generated

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos.sun.security.provider OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos.sun.security.provider)
endif()