#include <NoName$InMemoryClassLoader.h>
#include <NoName.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NoName$InMemoryClassLoader::init$() {
	$ClassLoader::init$();
}

$Class* NoName$InMemoryClassLoader::defineClass($String* name, $bytes* b) {
	return defineClass(name, b, 0, $nc(b)->length);
}

NoName$InMemoryClassLoader::NoName$InMemoryClassLoader() {
}

$Class* NoName$InMemoryClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NoName$InMemoryClassLoader, init$, void)},
		{"defineClass", "(Ljava/lang/String;[B)Ljava/lang/Class;", "(Ljava/lang/String;[B)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(NoName$InMemoryClassLoader, defineClass, $Class*, $String*, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NoName$InMemoryClassLoader", "NoName", "InMemoryClassLoader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NoName$InMemoryClassLoader",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NoName"
	};
	$loadClass(NoName$InMemoryClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoName$InMemoryClassLoader);
	});
	return class$;
}

$Class* NoName$InMemoryClassLoader::class$ = nullptr;