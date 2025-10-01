#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.util.spi_SRCS)
file(GLOB classes.sun.util.spi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.util.spi_HEADERS}) 
list(LENGTH classes.sun.util.spi_SRCS classes.sun.util.spi_SRCS_LENGTH)
if(classes.sun.util.spi_SRCS_LENGTH)
	add_library(classes.sun.util.spi OBJECT "${classes.sun.util.spi_SRCS}" "${classes.sun.util.spi_HEADERS}")
	jcpp_enable_bigobj(classes.sun.util.spi)
endif()