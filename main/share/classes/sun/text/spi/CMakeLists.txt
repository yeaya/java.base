#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.text.spi_SRCS)
file(GLOB classes.sun.text.spi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.text.spi_HEADERS}) 
list(LENGTH classes.sun.text.spi_SRCS classes.sun.text.spi_SRCS_LENGTH)
if(classes.sun.text.spi_SRCS_LENGTH)
	add_library(classes.sun.text.spi OBJECT "${classes.sun.text.spi_SRCS}" "${classes.sun.text.spi_HEADERS}")
	jcpp_enable_bigobj(classes.sun.text.spi)
endif()