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

$FieldInfo _WindowsFileSystem$LookupService_FieldInfo_[] = {
	{"instance", "Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $STATIC | $FINAL, $staticField(WindowsFileSystem$LookupService, instance)},
	{}
};

$MethodInfo _WindowsFileSystem$LookupService_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsFileSystem$LookupService, init$, void)},
	{}
};

$InnerClassInfo _WindowsFileSystem$LookupService_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsFileSystem$LookupService", "sun.nio.fs.WindowsFileSystem", "LookupService", $PRIVATE | $STATIC},
	{"sun.nio.fs.WindowsFileSystem$LookupService$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileSystem$LookupService_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsFileSystem$LookupService",
	"java.lang.Object",
	nullptr,
	_WindowsFileSystem$LookupService_FieldInfo_,
	_WindowsFileSystem$LookupService_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFileSystem$LookupService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsFileSystem"
};

$Object* allocate$WindowsFileSystem$LookupService($Class* clazz) {
	return $of($alloc(WindowsFileSystem$LookupService));
}

$UserPrincipalLookupService* WindowsFileSystem$LookupService::instance = nullptr;

void WindowsFileSystem$LookupService::init$() {
}

void clinit$WindowsFileSystem$LookupService($Class* class$) {
	$assignStatic(WindowsFileSystem$LookupService::instance, $new($WindowsFileSystem$LookupService$1));
}

WindowsFileSystem$LookupService::WindowsFileSystem$LookupService() {
}

$Class* WindowsFileSystem$LookupService::load$($String* name, bool initialize) {
	$loadClass(WindowsFileSystem$LookupService, name, initialize, &_WindowsFileSystem$LookupService_ClassInfo_, clinit$WindowsFileSystem$LookupService, allocate$WindowsFileSystem$LookupService);
	return class$;
}

$Class* WindowsFileSystem$LookupService::class$ = nullptr;

		} // fs
	} // nio
} // sun