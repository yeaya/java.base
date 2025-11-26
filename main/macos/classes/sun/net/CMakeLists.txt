#machine generated

add_subdirectory("dns")
add_subdirectory("sdp")
add_subdirectory("www")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos.sun.net OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos.sun.net)
endif()