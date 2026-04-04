#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Condition.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Condition = ::java::util::concurrent::locks::Condition;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$Class* Lock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"lock", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lock, lock, void)},
		{"lockInterruptibly", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lock, lockInterruptibly, void), "java.lang.InterruptedException"},
		{"newCondition", "()Ljava/util/concurrent/locks/Condition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lock, newCondition, $Condition*)},
		{"tryLock", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lock, tryLock, bool)},
		{"tryLock", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lock, tryLock, bool, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
		{"unlock", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Lock, unlock, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.concurrent.locks.Lock",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Lock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lock);
	});
	return class$;
}

$Class* Lock::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java