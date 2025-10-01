#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" test-classes.T8032697_anoth_89_SRCS)
file(GLOB test-classes.T8032697_anoth_89_HEADERS *.h *.hpp)
source_group("Include" FILES ${test-classes.T8032697_anoth_89_HEADERS}) 
list(LENGTH test-classes.T8032697_anoth_89_SRCS test-classes.T8032697_anoth_89_SRCS_LENGTH)
if(test-classes.T8032697_anoth_89_SRCS_LENGTH)
	add_library(test-classes.T8032697_anoth_89 OBJECT "${test-classes.T8032697_anoth_89_SRCS}" "${test-classes.T8032697_anoth_89_HEADERS}")
	jcpp_enable_bigobj(test-classes.T8032697_anoth_89)
endif()