#include <sun/nio/fs/WindowsFileSystem$LookupService$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _WindowsFileSystem$LookupService$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WindowsFileSystem$LookupService$1::*)()>(&WindowsFileSystem$LookupService$1::init$))},
	{"lookupPrincipalByGroupName", "(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"lookupPrincipalByName", "(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _WindowsFileSystem$LookupService$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.WindowsFileSystem$LookupService",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsFileSystem$LookupService$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsFileSystem$LookupService", "sun.nio.fs.WindowsFileSystem", "LookupService", $PRIVATE | $STATIC},
	{"sun.nio.fs.WindowsFileSystem$LookupService$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileSystem$LookupService$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsFileSystem$LookupService$1",
	"java.nio.file.attribute.UserPrincipalLookupService",
	nullptr,
	nullptr,
	_WindowsFileSystem$LookupService$1_MethodInfo_,
	nullptr,
	&_WindowsFileSystem$LookupService$1_EnclosingMethodInfo_,
	_WindowsFileSystem$LookupService$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsFileSystem"
};

$Object* allocate$WindowsFileSystem$LookupService$1($Class* clazz) {
	return $of($alloc(WindowsFileSystem$LookupService$1));
}

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
	$loadClass(WindowsFileSystem$LookupService$1, name, initialize, &_WindowsFileSystem$LookupService$1_ClassInfo_, allocate$WindowsFileSystem$LookupService$1);
	return class$;
}

$Class* WindowsFileSystem$LookupService$1::class$ = nullptr;

		} // fs
	} // nio
} // sun