#machine generated

add_subdirectory("annotation")
add_subdirectory("generics")
add_subdirectory("misc")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.reflect OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.reflect)
endif()