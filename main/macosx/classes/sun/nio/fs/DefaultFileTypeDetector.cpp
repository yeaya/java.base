#include <sun/nio/fs/DefaultFileTypeDetector.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/nio/file/spi/FileTypeDetector.h>
#include <sun/nio/fs/UnixFileSystemProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $FileTypeDetector = ::java::nio::file::spi::FileTypeDetector;
using $UnixFileSystemProvider = ::sun::nio::fs::UnixFileSystemProvider;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _DefaultFileTypeDetector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultFileTypeDetector::*)()>(&DefaultFileTypeDetector::init$))},
	{"create", "()Ljava/nio/file/spi/FileTypeDetector;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FileTypeDetector*(*)()>(&DefaultFileTypeDetector::create))},
	{}
};

$ClassInfo _DefaultFileTypeDetector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.fs.DefaultFileTypeDetector",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefaultFileTypeDetector_MethodInfo_
};

$Object* allocate$DefaultFileTypeDetector($Class* clazz) {
	return $of($alloc(DefaultFileTypeDetector));
}

void DefaultFileTypeDetector::init$() {
}

$FileTypeDetector* DefaultFileTypeDetector::create() {
	$var($FileSystemProvider, provider, $nc($($FileSystems::getDefault()))->provider());
	return $nc(($cast($UnixFileSystemProvider, provider)))->getFileTypeDetector();
}

DefaultFileTypeDetector::DefaultFileTypeDetector() {
}

$Class* DefaultFileTypeDetector::load$($String* name, bool initialize) {
	$loadClass(DefaultFileTypeDetector, name, initialize, &_DefaultFileTypeDetector_ClassInfo_, allocate$DefaultFileTypeDetector);
	return class$;
}

$Class* DefaultFileTypeDetector::class$ = nullptr;

		} // fs
	} // nio
} // sun