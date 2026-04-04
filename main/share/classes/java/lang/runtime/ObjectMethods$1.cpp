#include <java/lang/runtime/ObjectMethods$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/runtime/ObjectMethods.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace runtime {

void ObjectMethods$1::init$() {
}

$Object* ObjectMethods$1::run() {
	$beforeCallerSensitive();
	return $ClassLoader::getPlatformClassLoader();
}

ObjectMethods$1::ObjectMethods$1() {
}

$Class* ObjectMethods$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ObjectMethods$1, init$, void)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(ObjectMethods$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.runtime.ObjectMethods",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.runtime.ObjectMethods$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.runtime.ObjectMethods$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.runtime.ObjectMethods"
	};
	$loadClass(ObjectMethods$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectMethods$1);
	});
	return class$;
}

$Class* ObjectMethods$1::class$ = nullptr;

		} // runtime
	} // lang
} // java