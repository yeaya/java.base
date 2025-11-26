#machine generated

add_subdirectory("file")
add_subdirectory("ftp")
add_subdirectory("http")
add_subdirectory("https")
add_subdirectory("jar")
add_subdirectory("jmod")
add_subdirectory("jrt")
add_subdirectory("mailto")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.net.www.protocol OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.net.www.protocol)
endif()