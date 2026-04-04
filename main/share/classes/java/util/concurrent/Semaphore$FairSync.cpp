#include <java/util/concurrent/Semaphore$FairSync.h>
#include <java/util/concurrent/Semaphore$Sync.h>
#include <java/util/concurrent/Semaphore.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Semaphore$Sync = ::java::util::concurrent::Semaphore$Sync;

namespace java {
	namespace util {
		namespace concurrent {

void Semaphore$FairSync::init$(int32_t permits) {
	$Semaphore$Sync::init$(permits);
}

int32_t Semaphore$FairSync::tryAcquireShared(int32_t acquires) {
	for (;;) {
		if (hasQueuedPredecessors()) {
			return -1;
		}
		int32_t available = getState();
		int32_t remaining = available - acquires;
		if (remaining < 0 || compareAndSetState(available, remaining)) {
			return remaining;
		}
	}
}

Semaphore$FairSync::Semaphore$FairSync() {
}

$Class* Semaphore$FairSync::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Semaphore$FairSync, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(Semaphore$FairSync, init$, void, int32_t)},
		{"tryAcquireShared", "(I)I", nullptr, $PROTECTED, $virtualMethod(Semaphore$FairSync, tryAcquireShared, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Semaphore$FairSync", "java.util.concurrent.Semaphore", "FairSync", $STATIC | $FINAL},
		{"java.util.concurrent.Semaphore$Sync", "java.util.concurrent.Semaphore", "Sync", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.Semaphore$FairSync",
		"java.util.concurrent.Semaphore$Sync",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Semaphore"
	};
	$loadClass(Semaphore$FairSync, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Semaphore$FairSync);
	});
	return class$;
}

$Class* Semaphore$FairSync::class$ = nullptr;

		} // concurrent
	} // util
} // java