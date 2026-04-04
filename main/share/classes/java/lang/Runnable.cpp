#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$Class* Runnable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Runnable, run, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.Runnable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Runnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Runnable);
	});
	return class$;
}

$Class* Runnable::class$ = nullptr;

	} // lang
} // java