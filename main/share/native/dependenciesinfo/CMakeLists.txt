
include_directories(
	"."
	"${CMAKE_CURRENT_SOURCE_DIR}/../zlib"
	"${CMAKE_CURRENT_BINARY_DIR}/../main/native/zlib"
)

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" source_SRCS)
file(GLOB source_HEADERS  *.h *.hpp)
source_group("Include" FILES ${source_HEADERS})

add_executable(dependenciesinfo "${local_object}" "${source_SRCS}" "${source_HEADERS}")

SET_TARGET_PROPERTIES(dependenciesinfo PROPERTIES  OUTPUT_NAME "jcppdep")

target_link_libraries(dependenciesinfo
	zlibstatic
)

if(INSTALL_TO_REPO)
#	install(TARGETS dependenciesinfo DESTINATION "${JCPP_HOME}/bin")
endif()