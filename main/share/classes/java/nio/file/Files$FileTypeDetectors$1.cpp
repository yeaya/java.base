#include <java/nio/file/Files$FileTypeDetectors$1.h>
#include <java/nio/file/Files$FileTypeDetectors.h>
#include <java/nio/file/spi/FileTypeDetector.h>
#include <sun/nio/fs/DefaultFileTypeDetector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultFileTypeDetector = ::sun::nio::fs::DefaultFileTypeDetector;

namespace java {
	namespace nio {
		namespace file {

void Files$FileTypeDetectors$1::init$() {
}

$Object* Files$FileTypeDetectors$1::run() {
	return $DefaultFileTypeDetector::create();
}

Files$FileTypeDetectors$1::Files$FileTypeDetectors$1() {
}

$Class* Files$FileTypeDetectors$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Files$FileTypeDetectors$1, init$, void)},
		{"run", "()Ljava/nio/file/spi/FileTypeDetector;", nullptr, $PUBLIC, $virtualMethod(Files$FileTypeDetectors$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.file.Files$FileTypeDetectors",
		"createDefaultFileTypeDetector",
		"()Ljava/nio/file/spi/FileTypeDetector;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.Files$FileTypeDetectors", "java.nio.file.Files", "FileTypeDetectors", $PRIVATE | $STATIC},
		{"java.nio.file.Files$FileTypeDetectors$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.Files$FileTypeDetectors$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/nio/file/spi/FileTypeDetector;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.Files"
	};
	$loadClass(Files$FileTypeDetectors$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Files$FileTypeDetectors$1);
	});
	return class$;
}

$Class* Files$FileTypeDetectors$1::class$ = nullptr;

		} // file
	} // nio
} // java