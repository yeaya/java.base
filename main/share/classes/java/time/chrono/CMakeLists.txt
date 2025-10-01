#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.time.chrono_SRCS)
file(GLOB classes.java.time.chrono_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.time.chrono_HEADERS}) 
list(LENGTH classes.java.time.chrono_SRCS classes.java.time.chrono_SRCS_LENGTH)
if(classes.java.time.chrono_SRCS_LENGTH)
	add_library(classes.java.time.chrono OBJECT "${classes.java.time.chrono_SRCS}" "${classes.java.time.chrono_HEADERS}")
	jcpp_enable_bigobj(classes.java.time.chrono)
endif()