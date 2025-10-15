
include_directories(
	"."
	"${CMAKE_CURRENT_SOURCE_DIR}/../zlib"
	"${CMAKE_CURRENT_BINARY_DIR}/../main/native/zlib"
)

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" source_SRCS)
file(GLOB source_HEADERS  *.h *.hpp)
source_group("Include" FILES ${source_HEADERS})

add_executable(windebuginfo "${local_object}" "${source_SRCS}" "${source_HEADERS}")

SET_TARGET_PROPERTIES(windebuginfo PROPERTIES  OUTPUT_NAME "enabledebug")

target_link_libraries(windebuginfo
	zlibstatic
	Dbghelp
)

if(INSTALL_TO_REPO)
	install(TARGETS windebuginfo DESTINATION "${JCPP_HOME}/bin")
endif()