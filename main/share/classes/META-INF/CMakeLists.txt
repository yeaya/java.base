#machine generated

add_subdirectory("services")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(META-INF OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(META-INF)
endif()