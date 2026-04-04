#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync$HoldCounter.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $ReentrantReadWriteLock$Sync$HoldCounter = ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync$HoldCounter;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

void ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter::init$() {
	$ThreadLocal::init$();
}

$Object* ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter::initialValue() {
	return $new($ReentrantReadWriteLock$Sync$HoldCounter);
}

ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter::ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter() {
}

$Class* ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter, init$, void)},
		{"initialValue", "()Ljava/util/concurrent/locks/ReentrantReadWriteLock$Sync$HoldCounter;", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter, initialValue, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "java.util.concurrent.locks.ReentrantReadWriteLock", "Sync", $STATIC | $ABSTRACT},
		{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter", "java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "ThreadLocalHoldCounter", $STATIC | $FINAL},
		{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync$HoldCounter", "java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "HoldCounter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.locks.ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/util/concurrent/locks/ReentrantReadWriteLock$Sync$HoldCounter;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.locks.ReentrantReadWriteLock"
	};
	$loadClass(ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter);
	});
	return class$;
}

$Class* ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java