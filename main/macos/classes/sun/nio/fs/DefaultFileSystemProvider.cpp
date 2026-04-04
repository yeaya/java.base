#include <sun/nio/fs/DefaultFileSystemProvider.h>
#include <java/nio/file/FileSystem.h>
#include <sun/nio/fs/MacOSXFileSystemProvider.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixFileSystemProvider.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystem = ::java::nio::file::FileSystem;
using $MacOSXFileSystemProvider = ::sun::nio::fs::MacOSXFileSystemProvider;

namespace sun {
	namespace nio {
		namespace fs {

$MacOSXFileSystemProvider* DefaultFileSystemProvider::INSTANCE = nullptr;

void DefaultFileSystemProvider::init$() {
}

$MacOSXFileSystemProvider* DefaultFileSystemProvider::instance() {
	$init(DefaultFileSystemProvider);
	return DefaultFileSystemProvider::INSTANCE;
}

$FileSystem* DefaultFileSystemProvider::theFileSystem() {
	$init(DefaultFileSystemProvider);
	return DefaultFileSystemProvider::INSTANCE->theFileSystem();
}

void DefaultFileSystemProvider::clinit$($Class* clazz) {
	$assignStatic(DefaultFileSystemProvider::INSTANCE, $new($MacOSXFileSystemProvider));
}

DefaultFileSystemProvider::DefaultFileSystemProvider() {
}

$Class* DefaultFileSystemProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Lsun/nio/fs/MacOSXFileSystemProvider;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultFileSystemProvider, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultFileSystemProvider, init$, void)},
		{"instance", "()Lsun/nio/fs/MacOSXFileSystemProvider;", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultFileSystemProvider, instance, $MacOSXFileSystemProvider*)},
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