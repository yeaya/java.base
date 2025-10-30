#include <jdk/internal/jrtfs/JrtFileSystemProvider$JrtFsLoader.h>

#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <jdk/internal/jrtfs/JrtFileSystemProvider.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $JrtFileSystemProvider = ::jdk::internal::jrtfs::JrtFileSystemProvider;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$MethodInfo _JrtFileSystemProvider$JrtFsLoader_MethodInfo_[] = {
	{"<init>", "([Ljava/net/URL;)V", nullptr, 0, $method(static_cast<void(JrtFileSystemProvider$JrtFsLoader::*)($URLArray*)>(&JrtFileSystemProvider$JrtFsLoader::init$))},
	{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _JrtFileSystemProvider$JrtFsLoader_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.JrtFileSystemProvider$JrtFsLoader", "jdk.internal.jrtfs.JrtFileSystemProvider", "JrtFsLoader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JrtFileSystemProvider$JrtFsLoader_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jrtfs.JrtFileSystemProvider$JrtFsLoader",
	"java.net.URLClassLoader",
	nullptr,
	nullptr,
	_JrtFileSystemProvider$JrtFsLoader_MethodInfo_,
	nullptr,
	nullptr,
	_JrtFileSystemProvider$JrtFsLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.JrtFileSystemProvider"
};

$Object* allocate$JrtFileSystemProvider$JrtFsLoader($Class* clazz) {
	return $of($alloc(JrtFileSystemProvider$JrtFsLoader));
}

void JrtFileSystemProvider$JrtFsLoader::init$($URLArray* urls) {
	$URLClassLoader::init$(urls);
}

$Class* JrtFileSystemProvider$JrtFsLoader::loadClass($String* cn, bool resolve) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(JrtFileSystemProvider$JrtFsLoader, name, initialize, &_JrtFileSystemProvider$JrtFsLoader_ClassInfo_, allocate$JrtFileSystemProvider$JrtFsLoader);
	return class$;
}

$Class* JrtFileSystemProvider$JrtFsLoader::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk