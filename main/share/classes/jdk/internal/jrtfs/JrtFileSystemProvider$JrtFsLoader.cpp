#include <jdk/internal/jrtfs/JrtFileSystemProvider$JrtFsLoader.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <jdk/internal/jrtfs/JrtFileSystemProvider.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;

namespace jdk {
	namespace internal {
		namespace jrtfs {

void JrtFileSystemProvider$JrtFsLoader::init$($URLArray* urls) {
	$URLClassLoader::init$(urls);
}

$Class* JrtFileSystemProvider$JrtFsLoader::loadClass($String* cn, bool resolve) {
	$useLocalObjectStack();
	$Class* c = findLoadedClass(cn);
	if (c == nullptr) {
		$var($URL, u, findResource($$str({$($nc(cn)->replace(u'.', u'/')), ".class"_s})));
		if (u != nullptr) {
			c = findClass(cn);
		} else {
			return $URLClassLoader::loadClass(cn, resolve);
		}
	}
	if (resolve) {
		resolveClass(c);
	}
	return c;
}

JrtFileSystemProvider$JrtFsLoader::JrtFileSystemProvider$JrtFsLoader() {
}

$Class* JrtFileSystemProvider$JrtFsLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/net/URL;)V", nullptr, 0, $method(JrtFileSystemProvider$JrtFsLoader, init$, void, $URLArray*)},
		{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(JrtFileSystemProvider$JrtFsLoader, loadClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jrtfs.JrtFileSystemProvider$JrtFsLoader", "jdk.internal.jrtfs.JrtFileSystemProvider", "JrtFsLoader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jrtfs.JrtFileSystemProvider$JrtFsLoader",
		"java.net.URLClassLoader",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jrtfs.JrtFileSystemProvider"
	};
	$loadClass(JrtFileSystemProvider$JrtFsLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JrtFileSystemProvider$JrtFsLoader));
	});
	return class$;
}

$Class* JrtFileSystemProvider$JrtFsLoader::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk