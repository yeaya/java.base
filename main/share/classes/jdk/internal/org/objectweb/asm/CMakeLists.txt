#machine generated

add_subdirectory("commons")
add_subdirectory("signature")
add_subdirectory("tree")
add_subdirectory("util")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(jdk.internal.org.objectweb.asm OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(jdk.internal.org.objectweb.asm)
endif()