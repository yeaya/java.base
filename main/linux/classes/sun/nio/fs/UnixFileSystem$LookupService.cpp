#include <sun/nio/fs/UnixFileSystem$LookupService.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <sun/nio/fs/UnixFileSystem$LookupService$1.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UserPrincipalLookupService = ::java::nio::file::attribute::UserPrincipalLookupService;
using $UnixFileSystem$LookupService$1 = ::sun::nio::fs::UnixFileSystem$LookupService$1;

namespace sun {
	namespace nio {
		namespace fs {

$UserPrincipalLookupService* UnixFileSystem$LookupService::instance = nullptr;

void UnixFileSystem$LookupService::init$() {
}

void UnixFileSystem$LookupService::clinit$($Class* clazz) {
	$assignStatic(UnixFileSystem$LookupService::instance, $new($UnixFileSystem$LookupService$1));
}

UnixFileSystem$LookupService::UnixFileSystem$LookupService() {
}

$Class* UnixFileSystem$LookupService::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $STATIC | $FINAL, $staticField(UnixFileSystem$LookupService, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(UnixFileSystem$LookupService, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixFileSystem$LookupService", "sun.nio.fs.UnixFileSystem", "LookupService", $PRIVATE | $STATIC},
		{"sun.nio.fs.UnixFileSystem$LookupService$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixFileSystem$LookupService",
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
		"sun.nio.fs.UnixFileSystem"
	};
	$loadClass(UnixFileSystem$LookupService, name, initialize, &classInfo$$, UnixFileSystem$LookupService::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileSystem$LookupService);
	});
	return class$;
}

$Class* UnixFileSystem$LookupService::class$ = nullptr;

		} // fs
	} // nio
} // sun