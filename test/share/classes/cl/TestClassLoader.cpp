#include <cl/TestClassLoader.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;

namespace cl {

void TestClassLoader::init$($ClassLoader* parent) {
	$ClassLoader::init$(parent);
}

TestClassLoader::TestClassLoader() {
}

$Class* TestClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(TestClassLoader, init$, void, $ClassLoader*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"cl.TestClassLoader",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestClassLoader);
	});
	return class$;
}

$Class* TestClassLoader::class$ = nullptr;

} // cl