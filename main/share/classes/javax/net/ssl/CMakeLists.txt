#machine generated

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.net.ssl OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.net.ssl)
endif()