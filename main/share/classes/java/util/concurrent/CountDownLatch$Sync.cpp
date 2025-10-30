#include <java/util/concurrent/CountDownLatch$Sync.h>

#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _CountDownLatch$Sync_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CountDownLatch$Sync, serialVersionUID)},
	{}
};

$MethodInfo _CountDownLatch$Sync_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(CountDownLatch$Sync::*)(int32_t)>(&CountDownLatch$Sync::init$))},
	{"getCount", "()I", nullptr, 0, $method(static_cast<int32_t(CountDownLatch$Sync::*)()>(&CountDownLatch$Sync::getCount))},
	{"tryAcquireShared", "(I)I", nullptr, $PROTECTED},
	{"tryReleaseShared", "(I)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _CountDownLatch$Sync_InnerClassesInfo_[] = {
	{"java.util.concurrent.CountDownLatch$Sync", "java.util.concurrent.CountDownLatch", "Sync", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CountDownLatch$Sync_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.CountDownLatch$Sync",
	"java.util.concurrent.locks.AbstractQueuedSynchronizer",
	nullptr,
	_CountDownLatch$Sync_FieldInfo_,
	_CountDownLatch$Sync_MethodInfo_,
	nullptr,
	nullptr,
	_CountDownLatch$Sync_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.CountDownLatch"
};

$Object* allocate$CountDownLatch$Sync($Class* clazz) {
	return $of($alloc(CountDownLatch$Sync));
}

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
	$loadClass(CountDownLatch$Sync, name, initialize, &_CountDownLatch$Sync_ClassInfo_, allocate$CountDownLatch$Sync);
	return class$;
}

$Class* CountDownLatch$Sync::class$ = nullptr;

		} // concurrent
	} // util
} // java