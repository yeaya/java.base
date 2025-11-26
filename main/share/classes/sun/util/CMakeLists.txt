#machine generated

add_subdirectory("calendar")
add_subdirectory("cldr")
add_subdirectory("locale")
add_subdirectory("logging")
add_subdirectory("resources")
add_subdirectory("spi")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.util OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.util)
endif()