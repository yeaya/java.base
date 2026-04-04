#include <java/io/DefaultFileSystem.h>
#include <java/io/FileSystem.h>
#include <java/io/UnixFileSystem.h>
#include <jcpp.h>

using $FileSystem = ::java::io::FileSystem;
using $UnixFileSystem = ::java::io::UnixFileSystem;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void DefaultFileSystem::init$() {
}

$FileSystem* DefaultFileSystem::getFileSystem() {
	return $new($UnixFileSystem);
}

DefaultFileSystem::DefaultFileSystem() {
}

$Class* DefaultFileSystem::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultFileSystem, init$, void)},
		{"getFileSystem", "()Ljava/io/FileSystem;", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultFileSystem, getFileSystem, $FileSystem*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.DefaultFileSystem",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultFileSystem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultFileSystem);
	});
	return class$;
}

$Class* DefaultFileSystem::class$ = nullptr;

	} // io
} // java