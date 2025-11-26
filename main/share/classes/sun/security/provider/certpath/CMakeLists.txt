#machine generated

add_subdirectory("ssl")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.security.provider.certpath OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.security.provider.certpath)
endif()