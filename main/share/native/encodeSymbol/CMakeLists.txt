
include_directories(
	"."
	"${CMAKE_CURRENT_SOURCE_DIR}/../zlib"
	"${CMAKE_CURRENT_BINARY_DIR}/../main/native/zlib"
)

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" source_SRCS)
file(GLOB source_HEADERS  *.h *.hpp)
source_group("Include" FILES ${source_HEADERS})

add_executable(encodesymbol "${local_object}" "${source_SRCS}" "${source_HEADERS}")

SET_TARGET_PROPERTIES(encodesymbol PROPERTIES  OUTPUT_NAME "encodesymbol")

target_link_libraries(encodesymbol
	zlibstatic
	Dbghelp
)

install(TARGETS encodesymbol DESTINATION "${JCPP_INSTALL_BIN_DIR}")