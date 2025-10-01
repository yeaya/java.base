aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS})
add_library(libzip OBJECT "${SRCS}" "${HEADERS}")

target_compile_definitions(libzip PUBLIC
    -DLIBRARY_NAME=zip -DSTATIC_BUILD
)