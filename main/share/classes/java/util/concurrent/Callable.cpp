#include <java/util/concurrent/Callable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$Class* Callable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"call", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $ABSTRACT, $virtualMethod(Callable, call, $Object*), "java.lang.Exception"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.Callable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Callable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Callable);
	});
	return class$;
}

$Class* Callable::class$ = nullptr;

		} // concurrent
	} // util
} // java