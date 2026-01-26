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

$FieldInfo _Semaphore$FairSync_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Semaphore$FairSync, serialVersionUID)},
	{}
};

$MethodInfo _Semaphore$FairSync_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(Semaphore$FairSync, init$, void, int32_t)},
	{"tryAcquireShared", "(I)I", nullptr, $PROTECTED, $virtualMethod(Semaphore$FairSync, tryAcquireShared, int32_t, int32_t)},
	{}
};

$InnerClassInfo _Semaphore$FairSync_InnerClassesInfo_[] = {
	{"java.util.concurrent.Semaphore$FairSync", "java.util.concurrent.Semaphore", "FairSync", $STATIC | $FINAL},
	{"java.util.concurrent.Semaphore$Sync", "java.util.concurrent.Semaphore", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Semaphore$FairSync_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.Semaphore$FairSync",
	"java.util.concurrent.Semaphore$Sync",
	nullptr,
	_Semaphore$FairSync_FieldInfo_,
	_Semaphore$FairSync_MethodInfo_,
	nullptr,
	nullptr,
	_Semaphore$FairSync_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Semaphore"
};

$Object* allocate$Semaphore$FairSync($Class* clazz) {
	return $of($alloc(Semaphore$FairSync));
}

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
	$loadClass(Semaphore$FairSync, name, initialize, &_Semaphore$FairSync_ClassInfo_, allocate$Semaphore$FairSync);
	return class$;
}

$Class* Semaphore$FairSync::class$ = nullptr;

		} // concurrent
	} // util
} // java