#include <sun/nio/fs/WindowsFileSystem$LookupService.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <sun/nio/fs/WindowsFileSystem$LookupService$1.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UserPrincipalLookupService = ::java::nio::file::attribute::UserPrincipalLookupService;
using $WindowsFileSystem$LookupService$1 = ::sun::nio::fs::WindowsFileSystem$LookupService$1;

namespace sun {
	namespace nio {
		namespace fs {

$UserPrincipalLookupService* WindowsFileSystem$LookupService::instance = nullptr;

void WindowsFileSystem$LookupService::init$() {
}

void WindowsFileSystem$LookupService::clinit$($Class* clazz) {
	$assignStatic(WindowsFileSystem$LookupService::instance, $new($WindowsFileSystem$LookupService$1));
}

WindowsFileSystem$LookupService::WindowsFileSystem$LookupService() {
}

$Class* WindowsFileSystem$LookupService::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $STATIC | $FINAL, $staticField(WindowsFileSystem$LookupService, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsFileSystem$LookupService, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsFileSystem$LookupService", "sun.nio.fs.WindowsFileSystem", "LookupService", $PRIVATE | $STATIC},
		{"sun.nio.fs.WindowsFileSystem$LookupService$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsFileSystem$LookupService",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsFileSystem"
	};
	$loadClass(WindowsFileSystem$LookupService, name, initialize, &classInfo$$, WindowsFileSystem$LookupService::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileSystem$LookupService);
	});
	return class$;
}

$Class* WindowsFileSystem$LookupService::class$ = nullptr;

		} // fs
	} // nio
} // sun