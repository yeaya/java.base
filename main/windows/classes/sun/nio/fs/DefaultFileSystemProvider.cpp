#include <sun/nio/fs/DefaultFileSystemProvider.h>
#include <java/nio/file/FileSystem.h>
#include <sun/nio/fs/WindowsFileSystem.h>
#include <sun/nio/fs/WindowsFileSystemProvider.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystem = ::java::nio::file::FileSystem;
using $WindowsFileSystemProvider = ::sun::nio::fs::WindowsFileSystemProvider;

namespace sun {
	namespace nio {
		namespace fs {

$WindowsFileSystemProvider* DefaultFileSystemProvider::INSTANCE = nullptr;

void DefaultFileSystemProvider::init$() {
}

$WindowsFileSystemProvider* DefaultFileSystemProvider::instance() {
	$init(DefaultFileSystemProvider);
	return DefaultFileSystemProvider::INSTANCE;
}

$FileSystem* DefaultFileSystemProvider::theFileSystem() {
	$init(DefaultFileSystemProvider);
	return DefaultFileSystemProvider::INSTANCE->theFileSystem();
}

void DefaultFileSystemProvider::clinit$($Class* clazz) {
	$assignStatic(DefaultFileSystemProvider::INSTANCE, $new($WindowsFileSystemProvider));
}

DefaultFileSystemProvider::DefaultFileSystemProvider() {
}

$Class* DefaultFileSystemProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Lsun/nio/fs/WindowsFileSystemProvider;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultFileSystemProvider, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultFileSystemProvider, init$, void)},
		{"instance", "()Lsun/nio/fs/WindowsFileSystemProvider;", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultFileSystemProvider, instance, $WindowsFileSystemProvider*)},
		{"theFileSystem", "()Ljava/nio/file/FileSystem;", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultFileSystemProvider, theFileSystem, $FileSystem*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.fs.DefaultFileSystemProvider",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultFileSystemProvider, name, initialize, &classInfo$$, DefaultFileSystemProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultFileSystemProvider);
	});
	return class$;
}

$Class* DefaultFileSystemProvider::class$ = nullptr;

		} // fs
	} // nio
} // sun