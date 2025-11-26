#machine generated

add_subdirectory("ch")
add_subdirectory("cs")
add_subdirectory("fs")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos.sun.nio OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos.sun.nio)
endif()