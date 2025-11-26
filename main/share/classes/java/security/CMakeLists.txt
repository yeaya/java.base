#machine generated

add_subdirectory("cert")
add_subdirectory("interfaces")
add_subdirectory("spec")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(java.security OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(java.security)
endif()