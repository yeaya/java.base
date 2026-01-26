#include <java/util/concurrent/locks/ReentrantLock$NonfairSync.h>

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
using $ReentrantLock$Sync = ::java::util::concurrent::locks::ReentrantLock$Sync;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _ReentrantLock$NonfairSync_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantLock$NonfairSync, serialVersionUID)},
	{}
};

$MethodInfo _ReentrantLock$NonfairSync_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ReentrantLock$NonfairSync, init$, void)},
	{"initialTryLock", "()Z", nullptr, $FINAL, $virtualMethod(ReentrantLock$NonfairSync, initialTryLock, bool)},
	{"tryAcquire", "(I)Z", nullptr, $PROTECTED | $FINAL, $virtualMethod(ReentrantLock$NonfairSync, tryAcquire, bool, int32_t)},
	{}
};

$InnerClassInfo _ReentrantLock$NonfairSync_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantLock$NonfairSync", "java.util.concurrent.locks.ReentrantLock", "NonfairSync", $STATIC | $FINAL},
	{"java.util.concurrent.locks.ReentrantLock$Sync", "java.util.concurrent.locks.ReentrantLock", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReentrantLock$NonfairSync_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.ReentrantLock$NonfairSync",
	"java.util.concurrent.locks.ReentrantLock$Sync",
	nullptr,
	_ReentrantLock$NonfairSync_FieldInfo_,
	_ReentrantLock$NonfairSync_MethodInfo_,
	nullptr,
	nullptr,
	_ReentrantLock$NonfairSync_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantLock"
};

$Object* allocate$ReentrantLock$NonfairSync($Class* clazz) {
	return $of($alloc(ReentrantLock$NonfairSync));
}

void ReentrantLock$NonfairSync::init$() {
	$ReentrantLock$Sync::init$();
}

bool ReentrantLock$NonfairSync::initialTryLock() {
	$var($Thread, current, $Thread::currentThread());
	if (compareAndSetState(0, 1)) {
		setExclusiveOwnerThread(current);
		return true;
	} else if (getExclusiveOwnerThread() == current) {
		int32_t c = getState() + 1;
		if (c < 0) {
			$throwNew($Error, "Maximum lock count exceeded"_s);
		}
		setState(c);
		return true;
	} else {
		return false;
	}
}

bool ReentrantLock$NonfairSync::tryAcquire(int32_t acquires) {
	bool var$0 = getState() == 0;
	if (var$0 && compareAndSetState(0, acquires)) {
		setExclusiveOwnerThread($($Thread::currentThread()));
		return true;
	}
	return false;
}

ReentrantLock$NonfairSync::ReentrantLock$NonfairSync() {
}

$Class* ReentrantLock$NonfairSync::load$($String* name, bool initialize) {
	$loadClass(ReentrantLock$NonfairSync, name, initialize, &_ReentrantLock$NonfairSync_ClassInfo_, allocate$ReentrantLock$NonfairSync);
	return class$;
}

$Class* ReentrantLock$NonfairSync::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java