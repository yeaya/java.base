#include <BadClassFiles$InMemoryClassLoader.h>
#include <BadClassFiles.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void BadClassFiles$InMemoryClassLoader::init$() {
	$ClassLoader::init$();
}

$Class* BadClassFiles$InMemoryClassLoader::defineClass($String* name, $bytes* b) {
	return defineClass(name, b, 0, $nc(b)->length);
}

BadClassFiles$InMemoryClassLoader::BadClassFiles$InMemoryClassLoader() {
}

$Class* BadClassFiles$InMemoryClassLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BadClassFiles$InMemoryClassLoader, init$, void)},
		{"defineClass", "(Ljava/lang/String;[B)Ljava/lang/Class;", "(Ljava/lang/String;[B)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(BadClassFiles$InMemoryClassLoader, defineClass, $Class*, $String*, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"BadClassFiles$InMemoryClassLoader", "BadClassFiles", "InMemoryClassLoader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"BadClassFiles$InMemoryClassLoader",
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
		"BadClassFiles"
	};
	$loadClass(BadClassFiles$InMemoryClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BadClassFiles$InMemoryClassLoader);
	});
	return class$;
}

$Class* BadClassFiles$InMemoryClassLoader::class$ = nullptr;