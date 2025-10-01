#include <sun/nio/fs/DefaultFileSystemProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystem.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <sun/nio/fs/WindowsFileSystemProvider.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystem = ::java::nio::file::FileSystem;
using $WindowsFileSystem = ::sun::nio::fs::WindowsFileSystem;
using $WindowsFileSystemProvider = ::sun::nio::fs::WindowsFileSystemProvider;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _DefaultFileSystemProvider_FieldInfo_[] = {
	{"INSTANCE", "Lsun/nio/fs/WindowsFileSystemProvider;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultFileSystemProvider, INSTANCE)},
	{}
};

$MethodInfo _DefaultFileSystemProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultFileSystemProvider::*)()>(&DefaultFileSystemProvider::init$))},
	{"instance", "()Lsun/nio/fs/WindowsFileSystemProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WindowsFileSystemProvider*(*)()>(&DefaultFileSystemProvider::instance))},
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

$WindowsFileSystemProvider* DefaultFileSystemProvider::INSTANCE = nullptr;

void DefaultFileSystemProvider::init$() {
}

$WindowsFileSystemProvider* DefaultFileSystemProvider::instance() {
	$init(DefaultFileSystemProvider);
	return DefaultFileSystemProvider::INSTANCE;
}

$FileSystem* DefaultFileSystemProvider::theFileSystem() {
	$init(DefaultFileSystemProvider);
	return $nc(DefaultFileSystemProvider::INSTANCE)->theFileSystem();
}

void clinit$DefaultFileSystemProvider($Class* class$) {
	$assignStatic(DefaultFileSystemProvider::INSTANCE, $new($WindowsFileSystemProvider));
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