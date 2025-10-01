aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS})
add_library(libfdlibm OBJECT "${SRCS}" "${HEADERS}")

if(JCPP_CPU STREQUAL "x86" OR JCPP_CPU STREQUAL "aarch64")
    target_compile_definitions(libfdlibm PUBLIC
        -D_LITTLE_ENDIAN
    )
endif()
target_compile_definitions(libfdlibm PUBLIC
    -DLIBRARY_NAME=fdlibm -DSTATIC_BUILD
)