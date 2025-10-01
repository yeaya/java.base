#include <java/nio/file/Files$FileTypeDetectors.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Files$FileTypeDetectors$1.h>
#include <java/nio/file/Files$FileTypeDetectors$2.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/spi/FileTypeDetector.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $Files$FileTypeDetectors$1 = ::java::nio::file::Files$FileTypeDetectors$1;
using $Files$FileTypeDetectors$2 = ::java::nio::file::Files$FileTypeDetectors$2;
using $FileTypeDetector = ::java::nio::file::spi::FileTypeDetector;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $List = ::java::util::List;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _Files$FileTypeDetectors_FieldInfo_[] = {
	{"defaultFileTypeDetector", "Ljava/nio/file/spi/FileTypeDetector;", nullptr, $STATIC | $FINAL, $staticField(Files$FileTypeDetectors, defaultFileTypeDetector)},
	{"installedDetectors", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/file/spi/FileTypeDetector;>;", $STATIC | $FINAL, $staticField(Files$FileTypeDetectors, installedDetectors)},
	{}
};

$MethodInfo _Files$FileTypeDetectors_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Files$FileTypeDetectors::*)()>(&Files$FileTypeDetectors::init$))},
	{"createDefaultFileTypeDetector", "()Ljava/nio/file/spi/FileTypeDetector;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FileTypeDetector*(*)()>(&Files$FileTypeDetectors::createDefaultFileTypeDetector))},
	{"loadInstalledDetectors", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/file/spi/FileTypeDetector;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&Files$FileTypeDetectors::loadInstalledDetectors))},
	{}
};

$InnerClassInfo _Files$FileTypeDetectors_InnerClassesInfo_[] = {
	{"java.nio.file.Files$FileTypeDetectors", "java.nio.file.Files", "FileTypeDetectors", $PRIVATE | $STATIC},
	{"java.nio.file.Files$FileTypeDetectors$2", nullptr, nullptr, 0},
	{"java.nio.file.Files$FileTypeDetectors$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Files$FileTypeDetectors_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.Files$FileTypeDetectors",
	"java.lang.Object",
	nullptr,
	_Files$FileTypeDetectors_FieldInfo_,
	_Files$FileTypeDetectors_MethodInfo_,
	nullptr,
	nullptr,
	_Files$FileTypeDetectors_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.Files"
};

$Object* allocate$Files$FileTypeDetectors($Class* clazz) {
	return $of($alloc(Files$FileTypeDetectors));
}

$FileTypeDetector* Files$FileTypeDetectors::defaultFileTypeDetector = nullptr;
$List* Files$FileTypeDetectors::installedDetectors = nullptr;

void Files$FileTypeDetectors::init$() {
}

$FileTypeDetector* Files$FileTypeDetectors::createDefaultFileTypeDetector() {
	$init(Files$FileTypeDetectors);
	$beforeCallerSensitive();
	return $cast($FileTypeDetector, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Files$FileTypeDetectors$1))));
}

$List* Files$FileTypeDetectors::loadInstalledDetectors() {
	$init(Files$FileTypeDetectors);
	$beforeCallerSensitive();
	return $cast($List, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Files$FileTypeDetectors$2))));
}

void clinit$Files$FileTypeDetectors($Class* class$) {
	$assignStatic(Files$FileTypeDetectors::defaultFileTypeDetector, Files$FileTypeDetectors::createDefaultFileTypeDetector());
	$assignStatic(Files$FileTypeDetectors::installedDetectors, Files$FileTypeDetectors::loadInstalledDetectors());
}

Files$FileTypeDetectors::Files$FileTypeDetectors() {
}

$Class* Files$FileTypeDetectors::load$($String* name, bool initialize) {
	$loadClass(Files$FileTypeDetectors, name, initialize, &_Files$FileTypeDetectors_ClassInfo_, clinit$Files$FileTypeDetectors, allocate$Files$FileTypeDetectors);
	return class$;
}

$Class* Files$FileTypeDetectors::class$ = nullptr;

		} // file
	} // nio
} // java