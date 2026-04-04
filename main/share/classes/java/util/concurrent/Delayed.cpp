#include <java/util/concurrent/Delayed.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$Class* Delayed::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDelay", "(Ljava/util/concurrent/TimeUnit;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Delayed, getDelay, int64_t, $TimeUnit*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.Delayed",
		nullptr,
		"java.lang.Comparable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/util/concurrent/Delayed;>;"
	};
	$loadClass(Delayed, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Delayed);
	});
	return class$;
}

$Class* Delayed::class$ = nullptr;

		} // concurrent
	} // util
} // java