#include <java/nio/file/spi/FileSystemProvider$1.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;

namespace java {
	namespace nio {
		namespace file {
			namespace spi {

void FileSystemProvider$1::init$() {
}

$Object* FileSystemProvider$1::run() {
	return $FileSystemProvider::loadInstalledProviders();
}

FileSystemProvider$1::FileSystemProvider$1() {
}

$Class* FileSystemProvider$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileSystemProvider$1, init$, void)},
		{"run", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/file/spi/FileSystemProvider;>;", $PUBLIC, $virtualMethod(FileSystemProvider$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.file.spi.FileSystemProvider",
		"installedProviders",
		"()Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.spi.FileSystemProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.spi.FileSystemProvider$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/List<Ljava/nio/file/spi/FileSystemProvider;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.spi.FileSystemProvider"
	};
	$loadClass(FileSystemProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemProvider$1);
	});
	return class$;
}

$Class* FileSystemProvider$1::class$ = nullptr;

			} // spi
		} // file
	} // nio
} // java