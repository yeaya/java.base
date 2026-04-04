#include <java/nio/file/spi/FileTypeDetector.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/nio/file/Path.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $Path = ::java::nio::file::Path;

namespace java {
	namespace nio {
		namespace file {
			namespace spi {

$Void* FileTypeDetector::checkPermission() {
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "fileTypeDetector"_s));
	}
	return nullptr;
}

void FileTypeDetector::init$($Void* ignore) {
}

void FileTypeDetector::init$() {
	FileTypeDetector::init$($(checkPermission()));
}

FileTypeDetector::FileTypeDetector() {
}

$Class* FileTypeDetector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(FileTypeDetector, init$, void, $Void*)},
		{"<init>", "()V", nullptr, $PROTECTED, $method(FileTypeDetector, init$, void)},
		{"checkPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $staticMethod(FileTypeDetector, checkPermission, $Void*)},
		{"probeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileTypeDetector, probeContentType, $String*, $Path*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.nio.file.spi.FileTypeDetector",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FileTypeDetector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileTypeDetector);
	});
	return class$;
}

$Class* FileTypeDetector::class$ = nullptr;

			} // spi
		} // file
	} // nio
} // java