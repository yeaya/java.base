#machine generated

add_subdirectory("callback")
add_subdirectory("login")
add_subdirectory("spi")
add_subdirectory("x500")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.security.auth OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.security.auth)
endif()