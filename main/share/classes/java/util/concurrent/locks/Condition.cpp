#include <java/util/concurrent/locks/Condition.h>
#include <java/util/Date.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$Class* Condition::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"await", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Condition, await, void), "java.lang.InterruptedException"},
		{"await", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Condition, await, bool, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
		{"awaitNanos", "(J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Condition, awaitNanos, int64_t, int64_t), "java.lang.InterruptedException"},
		{"awaitUninterruptibly", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Condition, awaitUninterruptibly, void)},
		{"awaitUntil", "(Ljava/util/Date;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Condition, awaitUntil, bool, $Date*), "java.lang.InterruptedException"},
		{"signal", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Condition, signal, void)},
		{"signalAll", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Condition, signalAll, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.locks.Condition",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Condition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Condition);
	});
	return class$;
}

$Class* Condition::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java