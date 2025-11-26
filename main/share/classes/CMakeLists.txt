#machine generated

add_subdirectory("com")
add_subdirectory("java")
add_subdirectory("javax")
add_subdirectory("jdk")
add_subdirectory("META-INF")
add_subdirectory("sun")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(classes OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(classes)
endif()