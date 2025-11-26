#machine generated

add_subdirectory("net")
add_subdirectory("nio")
add_subdirectory("security")
add_subdirectory("util")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos.sun OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos.sun)
endif()