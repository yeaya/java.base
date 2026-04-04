#include <jdk/internal/loader/ClassLoaders$PlatformClassLoader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jdk/internal/loader/ClassLoaders$BootClassLoader.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $ClassLoaders$BootClassLoader = ::jdk::internal::loader::ClassLoaders$BootClassLoader;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;

namespace jdk {
	namespace internal {
		namespace loader {

void ClassLoaders$PlatformClassLoader::init$($ClassLoaders$BootClassLoader* parent) {
	$BuiltinClassLoader::init$("platform"_s, parent, nullptr);
}

void ClassLoaders$PlatformClassLoader::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		if (!$ClassLoader::registerAsParallelCapable()) {
			$throwNew($InternalError);
		}
	}
}

ClassLoaders$PlatformClassLoader::ClassLoaders$PlatformClassLoader() {
}

$Class* ClassLoaders$PlatformClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/ClassLoaders$BootClassLoader;)V", nullptr, 0, $method(ClassLoaders$PlatformClassLoader, init$, void, $ClassLoaders$BootClassLoader*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.ClassLoaders$PlatformClassLoader", "jdk.internal.loader.ClassLoaders", "PlatformClassLoader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.ClassLoaders$PlatformClassLoader",
		"jdk.internal.loader.BuiltinClassLoader",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.ClassLoaders"
	};
	$loadClass(ClassLoaders$PlatformClassLoader, name, initialize, &classInfo$$, ClassLoaders$PlatformClassLoader::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClassLoaders$PlatformClassLoader);
	});
	return class$;
}

$Class* ClassLoaders$PlatformClassLoader::class$ = nullptr;

		} // loader
	} // internal
} // jdk