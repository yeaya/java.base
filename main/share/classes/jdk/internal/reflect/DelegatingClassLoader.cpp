#include <jdk/internal/reflect/DelegatingClassLoader.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

void DelegatingClassLoader::init$($ClassLoader* parent) {
	$ClassLoader::init$(parent);
}

DelegatingClassLoader::DelegatingClassLoader() {
}

$Class* DelegatingClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, 0, $method(DelegatingClassLoader, init$, void, $ClassLoader*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.DelegatingClassLoader",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DelegatingClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DelegatingClassLoader);
	});
	return class$;
}

$Class* DelegatingClassLoader::class$ = nullptr;

		} // reflect
	} // internal
} // jdk