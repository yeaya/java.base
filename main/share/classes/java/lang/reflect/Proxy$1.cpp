#include <java/lang/reflect/Proxy$1.h>
#include <java/lang/ClassValue.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace lang {
		namespace reflect {

void Proxy$1::init$() {
	$ClassValue::init$();
}

$Object* Proxy$1::computeValue($Class* type) {
	return $of($new($ConcurrentHashMap, 4));
}

Proxy$1::Proxy$1() {
}

$Class* Proxy$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Proxy$1, init$, void)},
		{"computeValue", "(Ljava/lang/Class;)Ljava/util/concurrent/ConcurrentHashMap;", "(Ljava/lang/Class<*>;)Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/reflect/Method;Ljava/lang/invoke/MethodHandle;>;", $PROTECTED, $virtualMethod(Proxy$1, computeValue, $Object*, $Class*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.reflect.Proxy",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.reflect.Proxy$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.reflect.Proxy$1",
		"java.lang.ClassValue",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ClassValue<Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/reflect/Method;Ljava/lang/invoke/MethodHandle;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.reflect.Proxy"
	};
	$loadClass(Proxy$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Proxy$1);
	});
	return class$;
}

$Class* Proxy$1::class$ = nullptr;

		} // reflect
	} // lang
} // java