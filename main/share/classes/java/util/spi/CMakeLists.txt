#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.util.spi_SRCS)
file(GLOB classes.java.util.spi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.util.spi_HEADERS}) 
list(LENGTH classes.java.util.spi_SRCS classes.java.util.spi_SRCS_LENGTH)
if(classes.java.util.spi_SRCS_LENGTH)
	add_library(classes.java.util.spi OBJECT "${classes.java.util.spi_SRCS}" "${classes.java.util.spi_HEADERS}")
	jcpp_enable_bigobj(classes.java.util.spi)
endif()