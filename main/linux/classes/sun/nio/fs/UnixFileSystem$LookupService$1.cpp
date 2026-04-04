#include <sun/nio/fs/UnixFileSystem$LookupService$1.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <sun/nio/fs/UnixUserPrincipals.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $UserPrincipalLookupService = ::java::nio::file::attribute::UserPrincipalLookupService;
using $UnixUserPrincipals = ::sun::nio::fs::UnixUserPrincipals;

namespace sun {
	namespace nio {
		namespace fs {

void UnixFileSystem$LookupService$1::init$() {
	$UserPrincipalLookupService::init$();
}

$UserPrincipal* UnixFileSystem$LookupService$1::lookupPrincipalByName($String* name) {
	return $UnixUserPrincipals::lookupUser(name);
}

$GroupPrincipal* UnixFileSystem$LookupService$1::lookupPrincipalByGroupName($String* group) {
	return $UnixUserPrincipals::lookupGroup(group);
}

UnixFileSystem$LookupService$1::UnixFileSystem$LookupService$1() {
}

$Class* UnixFileSystem$LookupService$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UnixFileSystem$LookupService$1, init$, void)},
		{"lookupPrincipalByGroupName", "(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem$LookupService$1, lookupPrincipalByGroupName, $GroupPrincipal*, $String*), "java.io.IOException"},
		{"lookupPrincipalByName", "(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystem$LookupService$1, lookupPrincipalByName, $UserPrincipal*, $String*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.UnixFileSystem$LookupService",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixFileSystem$LookupService", "sun.nio.fs.UnixFileSystem", "LookupService", $PRIVATE | $STATIC},
		{"sun.nio.fs.UnixFileSystem$LookupService$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixFileSystem$LookupService$1",
		"java.nio.file.attribute.UserPrincipalLookupService",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.UnixFileSystem"
	};
	$loadClass(UnixFileSystem$LookupService$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileSystem$LookupService$1);
	});
	return class$;
}

$Class* UnixFileSystem$LookupService$1::class$ = nullptr;

		} // fs
	} // nio
} // sun