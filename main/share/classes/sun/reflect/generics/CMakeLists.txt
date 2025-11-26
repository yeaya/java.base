#machine generated

add_subdirectory("factory")
add_subdirectory("parser")
add_subdirectory("reflectiveObjects")
add_subdirectory("repository")
add_subdirectory("scope")
add_subdirectory("tree")
add_subdirectory("visitor")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.reflect.generics OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.reflect.generics)
endif()