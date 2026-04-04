#include <sun/nio/fs/DefaultFileTypeDetector.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/nio/file/spi/FileTypeDetector.h>
#include <sun/nio/fs/UnixFileSystemProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystems = ::java::nio::file::FileSystems;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $FileTypeDetector = ::java::nio::file::spi::FileTypeDetector;
using $UnixFileSystemProvider = ::sun::nio::fs::UnixFileSystemProvider;

namespace sun {
	namespace nio {
		namespace fs {

void DefaultFileTypeDetector::init$() {
}

$FileTypeDetector* DefaultFileTypeDetector::create() {
	$useLocalObjectStack();
	$var($FileSystemProvider, provider, $$nc($FileSystems::getDefault())->provider());
	return $nc($cast($UnixFileSystemProvider, provider))->getFileTypeDetector();
}

DefaultFileTypeDetector::DefaultFileTypeDetector() {
}

$Class* DefaultFileTypeDetector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultFileTypeDetector, init$, void)},
		{"create", "()Ljava/nio/file/spi/FileTypeDetector;", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultFileTypeDetector, create, $FileTypeDetector*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.fs.DefaultFileTypeDetector",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultFileTypeDetector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultFileTypeDetector);
	});
	return class$;
}

$Class* DefaultFileTypeDetector::class$ = nullptr;

		} // fs
	} // nio
} // sun