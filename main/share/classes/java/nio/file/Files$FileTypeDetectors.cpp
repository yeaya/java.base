#include <java/nio/file/Files$FileTypeDetectors.h>
#include <java/nio/file/Files$FileTypeDetectors$1.h>
#include <java/nio/file/Files$FileTypeDetectors$2.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/spi/FileTypeDetector.h>
#include <java/security/AccessController.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files$FileTypeDetectors$1 = ::java::nio::file::Files$FileTypeDetectors$1;
using $Files$FileTypeDetectors$2 = ::java::nio::file::Files$FileTypeDetectors$2;
using $FileTypeDetector = ::java::nio::file::spi::FileTypeDetector;
using $AccessController = ::java::security::AccessController;
using $List = ::java::util::List;

namespace java {
	namespace nio {
		namespace file {

$FileTypeDetector* Files$FileTypeDetectors::defaultFileTypeDetector = nullptr;
$List* Files$FileTypeDetectors::installedDetectors = nullptr;

void Files$FileTypeDetectors::init$() {
}

$FileTypeDetector* Files$FileTypeDetectors::createDefaultFileTypeDetector() {
	$init(Files$FileTypeDetectors);
	$beforeCallerSensitive();
	return $cast($FileTypeDetector, $AccessController::doPrivileged($$new($Files$FileTypeDetectors$1)));
}

$List* Files$FileTypeDetectors::loadInstalledDetectors() {
	$init(Files$FileTypeDetectors);
	$beforeCallerSensitive();
	return $cast($List, $AccessController::doPrivileged($$new($Files$FileTypeDetectors$2)));
}

void Files$FileTypeDetectors::clinit$($Class* clazz) {
	$assignStatic(Files$FileTypeDetectors::defaultFileTypeDetector, Files$FileTypeDetectors::createDefaultFileTypeDetector());
	$assignStatic(Files$FileTypeDetectors::installedDetectors, Files$FileTypeDetectors::loadInstalledDetectors());
}

Files$FileTypeDetectors::Files$FileTypeDetectors() {
}

$Class* Files$FileTypeDetectors::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultFileTypeDetector", "Ljava/nio/file/spi/FileTypeDetector;", nullptr, $STATIC | $FINAL, $staticField(Files$FileTypeDetectors, defaultFileTypeDetector)},
		{"installedDetectors", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/file/spi/FileTypeDetector;>;", $STATIC | $FINAL, $staticField(Files$FileTypeDetectors, installedDetectors)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Files$FileTypeDetectors, init$, void)},
		{"createDefaultFileTypeDetector", "()Ljava/nio/file/spi/FileTypeDetector;", nullptr, $PRIVATE | $STATIC, $staticMethod(Files$FileTypeDetectors, createDefaultFileTypeDetector, $FileTypeDetector*)},
		{"loadInstalledDetectors", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/file/spi/FileTypeDetector;>;", $PRIVATE | $STATIC, $staticMethod(Files$FileTypeDetectors, loadInstalledDetectors, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.Files$FileTypeDetectors", "java.nio.file.Files", "FileTypeDetectors", $PRIVATE | $STATIC},
		{"java.nio.file.Files$FileTypeDetectors$2", nullptr, nullptr, 0},
		{"java.nio.file.Files$FileTypeDetectors$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.Files$FileTypeDetectors",
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
		"java.nio.file.Files"
	};
	$loadClass(Files$FileTypeDetectors, name, initialize, &classInfo$$, Files$FileTypeDetectors::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Files$FileTypeDetectors);
	});
	return class$;
}

$Class* Files$FileTypeDetectors::class$ = nullptr;

		} // file
	} // nio
} // java