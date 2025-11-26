#machine generated

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.security.provider.certpa_5 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.security.provider.certpa_5)
endif()