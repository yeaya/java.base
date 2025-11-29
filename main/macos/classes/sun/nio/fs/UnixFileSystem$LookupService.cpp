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

$FieldInfo _UnixFileSystem$LookupService_FieldInfo_[] = {
	{"instance", "Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $STATIC | $FINAL, $staticField(UnixFileSystem$LookupService, instance)},
	{}
};

$MethodInfo _UnixFileSystem$LookupService_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnixFileSystem$LookupService::*)()>(&UnixFileSystem$LookupService::init$))},
	{}
};

$InnerClassInfo _UnixFileSystem$LookupService_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileSystem$LookupService", "sun.nio.fs.UnixFileSystem", "LookupService", $PRIVATE | $STATIC},
	{"sun.nio.fs.UnixFileSystem$LookupService$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnixFileSystem$LookupService_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileSystem$LookupService",
	"java.lang.Object",
	nullptr,
	_UnixFileSystem$LookupService_FieldInfo_,
	_UnixFileSystem$LookupService_MethodInfo_,
	nullptr,
	nullptr,
	_UnixFileSystem$LookupService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileSystem"
};

$Object* allocate$UnixFileSystem$LookupService($Class* clazz) {
	return $of($alloc(UnixFileSystem$LookupService));
}

$UserPrincipalLookupService* UnixFileSystem$LookupService::instance = nullptr;

void UnixFileSystem$LookupService::init$() {
}

void clinit$UnixFileSystem$LookupService($Class* class$) {
	$assignStatic(UnixFileSystem$LookupService::instance, $new($UnixFileSystem$LookupService$1));
}

UnixFileSystem$LookupService::UnixFileSystem$LookupService() {
}

$Class* UnixFileSystem$LookupService::load$($String* name, bool initialize) {
	$loadClass(UnixFileSystem$LookupService, name, initialize, &_UnixFileSystem$LookupService_ClassInfo_, clinit$UnixFileSystem$LookupService, allocate$UnixFileSystem$LookupService);
	return class$;
}

$Class* UnixFileSystem$LookupService::class$ = nullptr;

		} // fs
	} // nio
} // sun