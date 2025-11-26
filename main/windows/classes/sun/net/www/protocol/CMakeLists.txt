#machine generated

add_subdirectory("file")
add_subdirectory("http")
add_subdirectory("jar")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows.sun.net.www.protocol OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows.sun.net.www.protocol)
endif()