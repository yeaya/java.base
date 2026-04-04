#include <sun/nio/fs/WindowsFileSystem$LookupService$1.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <java/nio/file/attribute/UserPrincipalNotFoundException.h>
#include <sun/nio/fs/WindowsUserPrincipals.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;
using $UserPrincipalLookupService = ::java::nio::file::attribute::UserPrincipalLookupService;
using $UserPrincipalNotFoundException = ::java::nio::file::attribute::UserPrincipalNotFoundException;
using $WindowsUserPrincipals = ::sun::nio::fs::WindowsUserPrincipals;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsFileSystem$LookupService$1::init$() {
	$UserPrincipalLookupService::init$();
}

$UserPrincipal* WindowsFileSystem$LookupService$1::lookupPrincipalByName($String* name) {
	return $WindowsUserPrincipals::lookup(name);
}

$GroupPrincipal* WindowsFileSystem$LookupService$1::lookupPrincipalByGroupName($String* group) {
	$var($UserPrincipal, user, $WindowsUserPrincipals::lookup(group));
	if (!($instanceOf($GroupPrincipal, user))) {
		$throwNew($UserPrincipalNotFoundException, group);
	}
	return $cast($GroupPrincipal, user);
}

WindowsFileSystem$LookupService$1::WindowsFileSystem$LookupService$1() {
}

$Class* WindowsFileSystem$LookupService$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WindowsFileSystem$LookupService$1, init$, void)},
		{"lookupPrincipalByGroupName", "(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystem$LookupService$1, lookupPrincipalByGroupName, $GroupPrincipal*, $String*), "java.io.IOException"},
		{"lookupPrincipalByName", "(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC, $virtualMethod(WindowsFileSystem$LookupService$1, lookupPrincipalByName, $UserPrincipal*, $String*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.WindowsFileSystem$LookupService",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsFileSystem$LookupService", "sun.nio.fs.WindowsFileSystem", "LookupService", $PRIVATE | $STATIC},
		{"sun.nio.fs.WindowsFileSystem$LookupService$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsFileSystem$LookupService$1",
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
		"sun.nio.fs.WindowsFileSystem"
	};
	$loadClass(WindowsFileSystem$LookupService$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileSystem$LookupService$1);
	});
	return class$;
}

$Class* WindowsFileSystem$LookupService$1::class$ = nullptr;

		} // fs
	} // nio
} // sun