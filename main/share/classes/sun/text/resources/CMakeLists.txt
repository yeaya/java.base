#machine generated

add_subdirectory("cldr")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.text.resources OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.text.resources)
endif()