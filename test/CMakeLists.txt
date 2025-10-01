#machine generated

jcpp_add_dependencies(
)

include_directories("share/classes")
include_directories("share/native")
include_directories("../main/share/include")

if(JCPP_OS MATCHES "linux")
	include_directories("../main/linux/include")
endif()

if(JCPP_OS MATCHES "macosx")
	include_directories("../main/macosx/include")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../main/windows/include")
endif()

add_subdirectory("share/classes")
add_subdirectory("share/native")

if(JCPP_OS MATCHES "linux")
	aux_source_directory("linux" source_SRCS)
endif()

if(JCPP_OS MATCHES "macosx")
	aux_source_directory("macosx" source_SRCS)
endif()

if(JCPP_OS MATCHES "windows")
	aux_source_directory("windows" source_SRCS)
endif()

set(local_object ${local_object}
	"$<TARGET_OBJECTS:test-classes>"
	"$<TARGET_OBJECTS:test-classes.a>"
	"$<TARGET_OBJECTS:test-classes.anotherpkg>"
	"$<TARGET_OBJECTS:test-classes.b>"
	"$<TARGET_OBJECTS:test-classes.c>"
	"$<TARGET_OBJECTS:test-classes.c1>"
	"$<TARGET_OBJECTS:test-classes.c2>"
	"$<TARGET_OBJECTS:test-classes.cl>"
	"$<TARGET_OBJECTS:test-classes.com.app>"
	"$<TARGET_OBJECTS:test-classes.com.foo.conten_84>"
	"$<TARGET_OBJECTS:test-classes.common>"
	"$<TARGET_OBJECTS:test-classes.comSA>"
	"$<TARGET_OBJECTS:test-classes.comSB>"
	"$<TARGET_OBJECTS:test-classes.custom>"
	"$<TARGET_OBJECTS:test-classes.d1>"
	"$<TARGET_OBJECTS:test-classes.d2>"
	"$<TARGET_OBJECTS:test-classes.e1>"
	"$<TARGET_OBJECTS:test-classes.e2>"
	"$<TARGET_OBJECTS:test-classes.foo>"
	"$<TARGET_OBJECTS:test-classes.foo.bar>"
	"$<TARGET_OBJECTS:test-classes.handlers.bar>"
	"$<TARGET_OBJECTS:test-classes.handlers.foo>"
	"$<TARGET_OBJECTS:test-classes.handlers.jar>"
	"$<TARGET_OBJECTS:test-classes.helper>"
	"$<TARGET_OBJECTS:test-classes.indify>"
	"$<TARGET_OBJECTS:test-classes.java.fake>"
	"$<TARGET_OBJECTS:test-classes.java.lang.Float2>"
	"$<TARGET_OBJECTS:test-classes.java.lang.Math2>"
	"$<TARGET_OBJECTS:test-classes.jdk.test>"
	"$<TARGET_OBJECTS:test-classes.jdk.test.internal>"
	"$<TARGET_OBJECTS:test-classes.jdk.test.inter_85>"
	"$<TARGET_OBJECTS:test-classes.LambdaReceiver_86>"
	"$<TARGET_OBJECTS:test-classes.org.w3c.dom.css>"
	"$<TARGET_OBJECTS:test-classes.p>"
	"$<TARGET_OBJECTS:test-classes.p.internal>"
	"$<TARGET_OBJECTS:test-classes.p.one>"
	"$<TARGET_OBJECTS:test-classes.p.one.internal>"
	"$<TARGET_OBJECTS:test-classes.p.three.internal>"
	"$<TARGET_OBJECTS:test-classes.p.two>"
	"$<TARGET_OBJECTS:test-classes.p.two.internal>"
	"$<TARGET_OBJECTS:test-classes.p1>"
	"$<TARGET_OBJECTS:test-classes.p1.impl>"
	"$<TARGET_OBJECTS:test-classes.p1.internal>"
	"$<TARGET_OBJECTS:test-classes.p1.resources>"
	"$<TARGET_OBJECTS:test-classes.p2>"
	"$<TARGET_OBJECTS:test-classes.p2.impl>"
	"$<TARGET_OBJECTS:test-classes.p2.internal>"
	"$<TARGET_OBJECTS:test-classes.p2.resources>"
	"$<TARGET_OBJECTS:test-classes.p2.test>"
	"$<TARGET_OBJECTS:test-classes.p3>"
	"$<TARGET_OBJECTS:test-classes.p3.internal>"
	"$<TARGET_OBJECTS:test-classes.package1>"
	"$<TARGET_OBJECTS:test-classes.package1.package3>"
	"$<TARGET_OBJECTS:test-classes.package2>"
	"$<TARGET_OBJECTS:test-classes.pkg>"
	"$<TARGET_OBJECTS:test-classes.pkg.subpkg>"
	"$<TARGET_OBJECTS:test-classes.pkg1>"
	"$<TARGET_OBJECTS:test-classes.pkg2>"
	"$<TARGET_OBJECTS:test-classes.q>"
	"$<TARGET_OBJECTS:test-classes.q1>"
	"$<TARGET_OBJECTS:test-classes.q2>"
	"$<TARGET_OBJECTS:test-classes.repeatingAnnot_87>"
	"$<TARGET_OBJECTS:test-classes.SpecialInterfa_88>"
	"$<TARGET_OBJECTS:test-classes.subpackage>"
	"$<TARGET_OBJECTS:test-classes.sun.misc>"
	"$<TARGET_OBJECTS:test-classes.T8032697_anoth_89>"
	"$<TARGET_OBJECTS:test-classes.tck.java.time>"
	"$<TARGET_OBJECTS:test-classes.tck.java.time._90>"
	"$<TARGET_OBJECTS:test-classes.test>"
	"$<TARGET_OBJECTS:test-classes.test.java.lang_91>"
	"$<TARGET_OBJECTS:test-classes.test.java.time>"
	"$<TARGET_OBJECTS:test-classes.test.java.time_92>"
	"$<TARGET_OBJECTS:test-classes.test.java.time_93>"
	"$<TARGET_OBJECTS:test-classes.TestC1>"
	"$<TARGET_OBJECTS:test-classes.testPkg>"
	"$<TARGET_OBJECTS:test-classes.UniTest>"
	"$<TARGET_OBJECTS:test-classes.util>"
)

add_executable(${JCPP_PROJECT_FULL_NAME}-test "${local_object}" "${source_SRCS}")

SET_TARGET_PROPERTIES(${JCPP_PROJECT_FULL_NAME}-test PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}-test")
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_FULL_NAME}-test PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macosx")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_FULL_NAME}-test PROPERTIES INSTALL_RPATH ".;../lib")
endif()

jcpp_enable_debug_info(${JCPP_PROJECT_FULL_NAME}-test)

if(BUILD_SHARED_LIB)
	target_link_libraries(${JCPP_PROJECT_FULL_NAME}-test
		PRIVATE ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_PROJECT_NAME}_shared
	)
	add_dependencies(${JCPP_PROJECT_FULL_NAME}-test ${JCPP_PROJECT_NAME}_shared)
	if(WIN32)
		foreach(runtimeFile IN LISTS JCPP_DEPENDENCY_RUNTIME_FILE_PATHS)
			add_custom_command(TARGET ${JCPP_PROJECT_FULL_NAME}-test POST_BUILD
				COMMAND ${CMAKE_COMMAND} -E copy_if_different 
					${runtimeFile}
					"${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>"
			)
		endforeach()
		add_custom_command(TARGET ${JCPP_PROJECT_FULL_NAME}-test POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_if_different 
				$<TARGET_FILE:${JCPP_PROJECT_NAME}_shared>
				"${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>/"
		)
	else()
		foreach(runtimeFile IN LISTS JCPP_DEPENDENCY_RUNTIME_FILE_PATHS)
			add_custom_command(TARGET ${JCPP_PROJECT_FULL_NAME}-test POST_BUILD
				COMMAND ${CMAKE_COMMAND} -E copy_if_different 
					${runtimeFile}
					"${CMAKE_CURRENT_BINARY_DIR}/"
			)
		endforeach()
	endif()
else()

	target_link_libraries(${JCPP_PROJECT_FULL_NAME}-test
		PRIVATE ${JCPP_PROJECT_NAME}_static
		${JCPP_EXT_LIBS}
	)
	add_dependencies(${JCPP_PROJECT_FULL_NAME}-test ${JCPP_PROJECT_NAME}_static)
endif()

jcpp_enable_bigobj(${JCPP_PROJECT_FULL_NAME}-test)

install(TARGETS ${JCPP_PROJECT_FULL_NAME}-test DESTINATION "${JCPP_BIN_INSTALL_PATH}")