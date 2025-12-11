cmake_minimum_required(VERSION 3.23)

set(JCPP_PROJECT_NAME "helloworld")

project(${JCPP_PROJECT_NAME} C CXX)

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
	set(JCPP_OS "linux")
elseif(CMAKE_SYSTEM_NAME MATCHES "Darwin")
	set(JCPP_OS "macos")
elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
	set(JCPP_OS "windows")
else()
	message(WARNING "Unknown system name:${CMAKE_SYSTEM_NAME}")
endif()
message(STATUS "CMAKE_SYSTEM_NAME:${CMAKE_SYSTEM_NAME}")
message(STATUS "JCPP_OS:${JCPP_OS}")

if(CMAKE_SYSTEM_PROCESSOR MATCHES "^(aarch64|arm64|ARM64)")
	set(JCPP_ARCH "aarch64")
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "^(x86_64|AMD64)")
	set(JCPP_ARCH "x86_64")
else()
	message(WARNING "Unknown processor:${CMAKE_SYSTEM_PROCESSOR}")
endif()
message(STATUS "CMAKE_SYSTEM_PROCESSOR:${CMAKE_SYSTEM_PROCESSOR}")
message(STATUS "JCPP_ARCH:${JCPP_ARCH}")

set(SUBSYSTEM "CONSOLE" CACHE STRING "Set the subsystem for the executable")
message(STATUS "SUBSYSTEM:${SUBSYSTEM}")
set(JCPP_SUBSYSTEM "${SUBSYSTEM}")

if(NOT JCPP_REPOSITORY_ROOT)
	if(NOT JCPP_HOME)
		set(JCPP_HOME "$ENV{JCPP_HOME}")
		if(NOT JCPP_HOME)
			if(JCPP_OS MATCHES "windows")
				set(JCPP_HOME "$ENV{HOMEDRIVE}$ENV{HOMEPATH}/jcpp")
			else()
				set(JCPP_HOME "$ENV{HOME}/jcpp")
			endif()
		endif()
	endif()
	get_filename_component(JCPP_HOME "${JCPP_HOME}" ABSOLUTE)
	cmake_path(SET JCPP_HOME "${JCPP_HOME}")
	set(JCPP_REPOSITORY_ROOT "${JCPP_HOME}/repository")
else()
	get_filename_component(JCPP_REPOSITORY_ROOT "${JCPP_REPOSITORY_ROOT}" ABSOLUTE)
	cmake_path(SET JCPP_REPOSITORY_ROOT "${JCPP_REPOSITORY_ROOT}")
endif()

set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /Zi /source-charset:utf-8 /execution-charset:utf-8")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Zi /source-charset:utf-8 /execution-charset:utf-8")
	set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /DEBUG /OPT:REF /OPT:ICF /INCREMENTAL:NO")
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /DEBUG /OPT:REF /OPT:ICF /INCREMENTAL:NO")
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	add_definitions(-fwrapv)
	add_definitions(-fno-optimize-sibling-calls)
	add_definitions(-ftls-model=initial-exec)
	add_definitions(-fnon-call-exceptions)
	add_definitions(-fomit-frame-pointer)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive")
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	add_definitions(-Wno-implicit-function-declaration)
endif()

if(JCPP_OS STREQUAL "macos" AND JCPP_ARCH STREQUAL "x86_64")
	add_definitions(-fno-stack-check)
endif()

macro(jcpp_add_dependencies)
	foreach(dep ${ARGV})
		string(REPLACE ":" ";" depInfo ${dep})
		list(LENGTH depInfo depInfoLength)
		if(depInfoLength EQUAL 2)
			set(groupId "")
			list(GET depInfo 0 artifactId)
			list(GET depInfo 1 version)
			set(libName "${artifactId}")
			set(jcppDepPath "${JCPP_REPOSITORY_ROOT}/${artifactId}/${version}")
		else()
			list(GET depInfo 0 groupId)
			list(GET depInfo 1 artifactId)
			list(GET depInfo 2 version)
			string(REPLACE "." "/" groupPath ${groupId})
			set(libName "${groupId}-${artifactId}")
			set(jcppDepPath "${JCPP_REPOSITORY_ROOT}/${groupPath}/${artifactId}/${version}")
		endif()
		if(CMAKE_BUILD_TYPE MATCHES "Debug")
			set(binDir "${jcppDepPath}/debug/bin")
			set(libDir "${jcppDepPath}/debug/lib")
		else()
			set(binDir "${jcppDepPath}$<$<CONFIG:Debug>:/debug>/bin")
			set(libDir "${jcppDepPath}$<$<CONFIG:Debug>:/debug>/lib")
		endif()
		set(includeDir "${jcppDepPath}/include")
		if(groupId STREQUAL "" AND artifactId STREQUAL "java.base")
			set(JCPP_ENCODE_SYMBOL_CMD "${binDir}/encodesymbol")
		endif()
		set(JCPP_DEPENDENCY_LIBS ${JCPP_DEPENDENCY_LIBS} "${libName}")
		set(JCPP_DEPENDENCY_LIB_DIRS ${JCPP_DEPENDENCY_LIB_DIRS} "${libDir}")
		set(JCPP_DEPENDENCY_INCLUDE_DIRS ${JCPP_DEPENDENCY_INCLUDE_DIRS} "${includeDir}")
		if(JCPP_OS MATCHES "windows")
			set(runtimeFiles "${binDir}/${libName}.dll")
		else()
			file(GLOB runtimeFiles "${libDir}/lib${libName}.*")
			list(REMOVE_ITEM runtimeFiles "${libDir}/lib${libName}.a")
		endif()
		set(JCPP_DEPENDENCY_RUNTIME_FILE_PATHS ${JCPP_DEPENDENCY_RUNTIME_FILE_PATHS} "${runtimeFiles}")
	endforeach()
	include_directories(
		${JCPP_DEPENDENCY_INCLUDE_DIRS}
	)
	link_directories(
		${JCPP_DEPENDENCY_LIB_DIRS}
	)
endmacro()

function(jcpp_encode_symbol target)
	if(JCPP_OS MATCHES "windows")
		add_custom_command(TARGET ${target} POST_BUILD
			COMMAND cmd /c ${JCPP_ENCODE_SYMBOL_CMD} $<TARGET_FILE:${target}>
		)
	endif()
endfunction(jcpp_encode_symbol)

jcpp_add_dependencies("java.base:17.35")

aux_source_directory("." source_SRCS)
add_executable(${JCPP_PROJECT_NAME} "${source_SRCS}")

SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME} PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_NAME}")
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME} PROPERTIES INSTALL_RPATH "\$ORIGIN;\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macos")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME} PROPERTIES INSTALL_RPATH ".;../lib")
endif()

jcpp_encode_symbol(${JCPP_PROJECT_NAME})

target_link_libraries(${JCPP_PROJECT_NAME}
	PRIVATE ${JCPP_DEPENDENCY_LIBS}
)

if(JCPP_OS MATCHES "windows")
	foreach(runtimeFile IN LISTS JCPP_DEPENDENCY_RUNTIME_FILE_PATHS)
		add_custom_command(TARGET ${JCPP_PROJECT_NAME} POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_if_different 
				${runtimeFile}
				$<TARGET_FILE_DIR:${JCPP_PROJECT_NAME}>
		)
	endforeach()
else()
	foreach(runtimeFile IN LISTS JCPP_DEPENDENCY_RUNTIME_FILE_PATHS)
		add_custom_command(TARGET ${JCPP_PROJECT_NAME} POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_if_different 
				${runtimeFile}
				$<TARGET_FILE_DIR:${JCPP_PROJECT_NAME}>
		)
	endforeach()
endif()

install(TARGETS ${JCPP_PROJECT_NAME} DESTINATION "bin")