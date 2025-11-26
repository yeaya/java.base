#machine generated

add_subdirectory("auth")
add_subdirectory("cert")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.security OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.security)
endif()