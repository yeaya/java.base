#include <java/nio/file/Files$FileTypeDetectors$2.h>
#include <java/lang/ClassLoader.h>
#include <java/nio/file/Files$FileTypeDetectors.h>
#include <java/nio/file/spi/FileTypeDetector.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileTypeDetector = ::java::nio::file::spi::FileTypeDetector;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ServiceLoader = ::java::util::ServiceLoader;

namespace java {
	namespace nio {
		namespace file {

void Files$FileTypeDetectors$2::init$() {
}

$Object* Files$FileTypeDetectors$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($List, list, $new($ArrayList));
	$load($FileTypeDetector);
	$var($ServiceLoader, loader, $ServiceLoader::load($FileTypeDetector::class$, $($ClassLoader::getSystemClassLoader())));
	{
		$var($Iterator, i$, $nc(loader)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FileTypeDetector, detector, $cast($FileTypeDetector, i$->next()));
			{
				list->add(detector);
			}
		}
	}
	return list;
}

Files$FileTypeDetectors$2::Files$FileTypeDetectors$2() {
}

$Class* Files$FileTypeDetectors$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Files$FileTypeDetectors$2, init$, void)},
		{"run", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/file/spi/FileTypeDetector;>;", $PUBLIC, $virtualMethod(Files$FileTypeDetectors$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.file.Files$FileTypeDetectors",
		"loadInstalledDetectors",
		"()Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.Files$FileTypeDetectors", "java.nio.file.Files", "FileTypeDetectors", $PRIVATE | $STATIC},
		{"java.nio.file.Files$FileTypeDetectors$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.Files$FileTypeDetectors$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/List<Ljava/nio/file/spi/FileTypeDetector;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.Files"
	};
	$loadClass(Files$FileTypeDetectors$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Files$FileTypeDetectors$2);
	});
	return class$;
}

$Class* Files$FileTypeDetectors$2::class$ = nullptr;

		} // file
	} // nio
} // java