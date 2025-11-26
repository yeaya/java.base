#machine generated

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.text.resources.cldr OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.text.resources.cldr)
endif()