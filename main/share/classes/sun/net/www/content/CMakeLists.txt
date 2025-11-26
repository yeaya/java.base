#machine generated

add_subdirectory("text")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.net.www.content OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.net.www.content)
endif()