#include <java/lang/ClassLoader$ParallelLoaders.h>
#include <java/lang/ClassLoader.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace java {
	namespace lang {

$Set* ClassLoader$ParallelLoaders::loaderTypes = nullptr;

void ClassLoader$ParallelLoaders::init$() {
}

bool ClassLoader$ParallelLoaders::register$($Class* c) {
	$init(ClassLoader$ParallelLoaders);
	$synchronized(ClassLoader$ParallelLoaders::loaderTypes) {
		if (ClassLoader$ParallelLoaders::loaderTypes->contains($nc(c)->getSuperclass())) {
			ClassLoader$ParallelLoaders::loaderTypes->add(c);
			return true;
		} else {
			return false;
		}
	}
}

bool ClassLoader$ParallelLoaders::isRegistered($Class* c) {
	$init(ClassLoader$ParallelLoaders);
	$synchronized(ClassLoader$ParallelLoaders::loaderTypes) {
		return ClassLoader$ParallelLoaders::loaderTypes->contains(c);
	}
}

void ClassLoader$ParallelLoaders::clinit$($Class* clazz) {
	$assignStatic(ClassLoader$ParallelLoaders::loaderTypes, $Collections::newSetFromMap($$new($WeakHashMap)));
	{
		$synchronized(ClassLoader$ParallelLoaders::loaderTypes) {
			$load($ClassLoader);
			ClassLoader$ParallelLoaders::loaderTypes->add($ClassLoader::class$);
		}
	}
}

ClassLoader$ParallelLoaders::ClassLoader$ParallelLoaders() {
}

$Class* ClassLoader$ParallelLoaders::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loaderTypes", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/ClassLoader;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ClassLoader$ParallelLoaders, loaderTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ClassLoader$ParallelLoaders, init$, void)},
		{"isRegistered", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/lang/ClassLoader;>;)Z", $STATIC, $staticMethod(ClassLoader$ParallelLoaders, isRegistered, bool, $Class*)},
		{"register", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/lang/ClassLoader;>;)Z", $STATIC, $staticMethod(ClassLoader$ParallelLoaders, register$, bool, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ClassLoader$ParallelLoaders", "java.lang.ClassLoader", "ParallelLoaders", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ClassLoader$ParallelLoaders",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ClassLoader"
	};
	$loadClass(ClassLoader$ParallelLoaders, name, initialize, &classInfo$$, ClassLoader$ParallelLoaders::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClassLoader$ParallelLoaders);
	});
	return class$;
}

$Class* ClassLoader$ParallelLoaders::class$ = nullptr;

	} // lang
} // java