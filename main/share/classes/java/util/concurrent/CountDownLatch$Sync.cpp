#include <java/util/concurrent/CountDownLatch$Sync.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;

namespace java {
	namespace util {
		namespace concurrent {

void CountDownLatch$Sync::init$(int32_t count) {
	$AbstractQueuedSynchronizer::init$();
	setState(count);
}

int32_t CountDownLatch$Sync::getCount() {
	return getState();
}

int32_t CountDownLatch$Sync::tryAcquireShared(int32_t acquires) {
	return (getState() == 0) ? 1 : -1;
}

bool CountDownLatch$Sync::tryReleaseShared(int32_t releases) {
	for (;;) {
		int32_t c = getState();
		if (c == 0) {
			return false;
		}
		int32_t nextc = c - 1;
		if (compareAndSetState(c, nextc)) {
			return nextc == 0;
		}
	}
}

CountDownLatch$Sync::CountDownLatch$Sync() {
}

$Class* CountDownLatch$Sync::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CountDownLatch$Sync, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(CountDownLatch$Sync, init$, void, int32_t)},
		{"getCount", "()I", nullptr, 0, $method(CountDownLatch$Sync, getCount, int32_t)},
		{"tryAcquireShared", "(I)I", nullptr, $PROTECTED, $virtualMethod(CountDownLatch$Sync, tryAcquireShared, int32_t, int32_t)},
		{"tryReleaseShared", "(I)Z", nullptr, $PROTECTED, $virtualMethod(CountDownLatch$Sync, tryReleaseShared, bool, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.CountDownLatch$Sync", "java.util.concurrent.CountDownLatch", "Sync", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.CountDownLatch$Sync",
		"java.util.concurrent.locks.AbstractQueuedSynchronizer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.CountDownLatch"
	};
	$loadClass(CountDownLatch$Sync, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CountDownLatch$Sync);
	});
	return class$;
}

$Class* CountDownLatch$Sync::class$ = nullptr;

		} // concurrent
	} // util
} // java