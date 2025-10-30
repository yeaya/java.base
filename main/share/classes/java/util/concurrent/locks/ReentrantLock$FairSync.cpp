#include <java/util/concurrent/locks/ReentrantLock$FairSync.h>

#include <java/lang/Error.h>
#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <java/util/concurrent/locks/ReentrantLock$Sync.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractOwnableSynchronizer = ::java::util::concurrent::locks::AbstractOwnableSynchronizer;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $ReentrantLock$Sync = ::java::util::concurrent::locks::ReentrantLock$Sync;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _ReentrantLock$FairSync_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantLock$FairSync, serialVersionUID)},
	{}
};

$MethodInfo _ReentrantLock$FairSync_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReentrantLock$FairSync::*)()>(&ReentrantLock$FairSync::init$))},
	{"initialTryLock", "()Z", nullptr, $FINAL},
	{"tryAcquire", "(I)Z", nullptr, $PROTECTED | $FINAL},
	{}
};

$InnerClassInfo _ReentrantLock$FairSync_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantLock$FairSync", "java.util.concurrent.locks.ReentrantLock", "FairSync", $STATIC | $FINAL},
	{"java.util.concurrent.locks.ReentrantLock$Sync", "java.util.concurrent.locks.ReentrantLock", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReentrantLock$FairSync_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.ReentrantLock$FairSync",
	"java.util.concurrent.locks.ReentrantLock$Sync",
	nullptr,
	_ReentrantLock$FairSync_FieldInfo_,
	_ReentrantLock$FairSync_MethodInfo_,
	nullptr,
	nullptr,
	_ReentrantLock$FairSync_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantLock"
};

$Object* allocate$ReentrantLock$FairSync($Class* clazz) {
	return $of($alloc(ReentrantLock$FairSync));
}

void ReentrantLock$FairSync::init$() {
	$ReentrantLock$Sync::init$();
}

bool ReentrantLock$FairSync::initialTryLock() {
	$var($Thread, current, $Thread::currentThread());
	int32_t c = getState();
	if (c == 0) {
		bool var$0 = !hasQueuedThreads();
		if (var$0 && compareAndSetState(0, 1)) {
			setExclusiveOwnerThread(current);
			return true;
		}
	} else if (getExclusiveOwnerThread() == current) {
		if (++c < 0) {
			$throwNew($Error, "Maximum lock count exceeded"_s);
		}
		setState(c);
		return true;
	}
	return false;
}

bool ReentrantLock$FairSync::tryAcquire(int32_t acquires) {
	bool var$1 = getState() == 0;
	bool var$0 = var$1 && !hasQueuedPredecessors();
	if (var$0 && compareAndSetState(0, acquires)) {
		setExclusiveOwnerThread($($Thread::currentThread()));
		return true;
	}
	return false;
}

ReentrantLock$FairSync::ReentrantLock$FairSync() {
}

$Class* ReentrantLock$FairSync::load$($String* name, bool initialize) {
	$loadClass(ReentrantLock$FairSync, name, initialize, &_ReentrantLock$FairSync_ClassInfo_, allocate$ReentrantLock$FairSync);
	return class$;
}

$Class* ReentrantLock$FairSync::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java