#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.spi_SRCS)
file(GLOB classes.sun.net.spi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.spi_HEADERS}) 
list(LENGTH classes.sun.net.spi_SRCS classes.sun.net.spi_SRCS_LENGTH)
if(classes.sun.net.spi_SRCS_LENGTH)
	add_library(classes.sun.net.spi OBJECT "${classes.sun.net.spi_SRCS}" "${classes.sun.net.spi_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.spi)
endif()