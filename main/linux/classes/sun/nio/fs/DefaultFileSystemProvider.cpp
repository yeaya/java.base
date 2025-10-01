#include <sun/nio/fs/DefaultFileSystemProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystem.h>
#include <sun/nio/fs/LinuxFileSystemProvider.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystem = ::java::nio::file::FileSystem;
using $LinuxFileSystemProvider = ::sun::nio::fs::LinuxFileSystemProvider;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixFileSystemProvider = ::sun::nio::fs::UnixFileSystemProvider;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _DefaultFileSystemProvider_FieldInfo_[] = {
	{"INSTANCE", "Lsun/nio/fs/LinuxFileSystemProvider;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultFileSystemProvider, INSTANCE)},
	{}
};

$MethodInfo _DefaultFileSystemProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultFileSystemProvider::*)()>(&DefaultFileSystemProvider::init$))},
	{"instance", "()Lsun/nio/fs/LinuxFileSystemProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LinuxFileSystemProvider*(*)()>(&DefaultFileSystemProvider::instance))},
	{"theFileSystem", "()Ljava/nio/file/FileSystem;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FileSystem*(*)()>(&DefaultFileSystemProvider::theFileSystem))},
	{}
};

$ClassInfo _DefaultFileSystemProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.fs.DefaultFileSystemProvider",
	"java.lang.Object",
	nullptr,
	_DefaultFileSystemProvider_FieldInfo_,
	_DefaultFileSystemProvider_MethodInfo_
};

$Object* allocate$DefaultFileSystemProvider($Class* clazz) {
	return $of($alloc(DefaultFileSystemProvider));
}

$LinuxFileSystemProvider* DefaultFileSystemProvider::INSTANCE = nullptr;

void DefaultFileSystemProvider::init$() {
}

$LinuxFileSystemProvider* DefaultFileSystemProvider::instance() {
	$init(DefaultFileSystemProvider);
	return DefaultFileSystemProvider::INSTANCE;
}

$FileSystem* DefaultFileSystemProvider::theFileSystem() {
	$init(DefaultFileSystemProvider);
	return $nc(DefaultFileSystemProvider::INSTANCE)->theFileSystem();
}

void clinit$DefaultFileSystemProvider($Class* class$) {
	$assignStatic(DefaultFileSystemProvider::INSTANCE, $new($LinuxFileSystemProvider));
}

DefaultFileSystemProvider::DefaultFileSystemProvider() {
}

$Class* DefaultFileSystemProvider::load$($String* name, bool initialize) {
	$loadClass(DefaultFileSystemProvider, name, initialize, &_DefaultFileSystemProvider_ClassInfo_, clinit$DefaultFileSystemProvider, allocate$DefaultFileSystemProvider);
	return class$;
}

$Class* DefaultFileSystemProvider::class$ = nullptr;

		} // fs
	} // nio
} // sun