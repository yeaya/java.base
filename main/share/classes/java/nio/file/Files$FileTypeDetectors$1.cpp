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

$MethodInfo _Files$FileTypeDetectors$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Files$FileTypeDetectors$1::*)()>(&Files$FileTypeDetectors$1::init$))},
	{"run", "()Ljava/nio/file/spi/FileTypeDetector;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Files$FileTypeDetectors$1_EnclosingMethodInfo_ = {
	"java.nio.file.Files$FileTypeDetectors",
	"createDefaultFileTypeDetector",
	"()Ljava/nio/file/spi/FileTypeDetector;"
};

$InnerClassInfo _Files$FileTypeDetectors$1_InnerClassesInfo_[] = {
	{"java.nio.file.Files$FileTypeDetectors", "java.nio.file.Files", "FileTypeDetectors", $PRIVATE | $STATIC},
	{"java.nio.file.Files$FileTypeDetectors$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Files$FileTypeDetectors$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.Files$FileTypeDetectors$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Files$FileTypeDetectors$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/nio/file/spi/FileTypeDetector;>;",
	&_Files$FileTypeDetectors$1_EnclosingMethodInfo_,
	_Files$FileTypeDetectors$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.Files"
};

$Object* allocate$Files$FileTypeDetectors$1($Class* clazz) {
	return $of($alloc(Files$FileTypeDetectors$1));
}

void Files$FileTypeDetectors$1::init$() {
}

$Object* Files$FileTypeDetectors$1::run() {
	return $of($DefaultFileTypeDetector::create());
}

Files$FileTypeDetectors$1::Files$FileTypeDetectors$1() {
}

$Class* Files$FileTypeDetectors$1::load$($String* name, bool initialize) {
	$loadClass(Files$FileTypeDetectors$1, name, initialize, &_Files$FileTypeDetectors$1_ClassInfo_, allocate$Files$FileTypeDetectors$1);
	return class$;
}

$Class* Files$FileTypeDetectors$1::class$ = nullptr;

		} // file
	} // nio
} // java