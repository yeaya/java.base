#machine generated

add_subdirectory("impl")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.net.ftp OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.net.ftp)
endif()