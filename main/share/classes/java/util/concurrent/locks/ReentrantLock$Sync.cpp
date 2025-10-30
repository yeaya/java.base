#include <java/util/concurrent/locks/ReentrantLock$Sync.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalMonitorStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalMonitorStateException = ::java::lang::IllegalMonitorStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractOwnableSynchronizer = ::java::util::concurrent::locks::AbstractOwnableSynchronizer;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;
using $AbstractQueuedSynchronizer$ConditionObject = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$CompoundAttribute _ReentrantLock$Sync_MethodAnnotations_lock6[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _ReentrantLock$Sync_MethodAnnotations_lockInterruptibly7[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _ReentrantLock$Sync_MethodAnnotations_tryLock10[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _ReentrantLock$Sync_MethodAnnotations_tryLockNanos11[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _ReentrantLock$Sync_MethodAnnotations_tryRelease12[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$FieldInfo _ReentrantLock$Sync_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantLock$Sync, serialVersionUID)},
	{}
};

$MethodInfo _ReentrantLock$Sync_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReentrantLock$Sync::*)()>(&ReentrantLock$Sync::init$))},
	{"getHoldCount", "()I", nullptr, $FINAL, $method(static_cast<int32_t(ReentrantLock$Sync::*)()>(&ReentrantLock$Sync::getHoldCount))},
	{"getOwner", "()Ljava/lang/Thread;", nullptr, $FINAL, $method(static_cast<$Thread*(ReentrantLock$Sync::*)()>(&ReentrantLock$Sync::getOwner))},
	{"initialTryLock", "()Z", nullptr, $ABSTRACT},
	{"isHeldExclusively", "()Z", nullptr, $PROTECTED | $FINAL},
	{"isLocked", "()Z", nullptr, $FINAL, $method(static_cast<bool(ReentrantLock$Sync::*)()>(&ReentrantLock$Sync::isLocked))},
	{"lock", "()V", nullptr, $FINAL, $method(static_cast<void(ReentrantLock$Sync::*)()>(&ReentrantLock$Sync::lock)), nullptr, nullptr, _ReentrantLock$Sync_MethodAnnotations_lock6},
	{"lockInterruptibly", "()V", nullptr, $FINAL, $method(static_cast<void(ReentrantLock$Sync::*)()>(&ReentrantLock$Sync::lockInterruptibly)), "java.lang.InterruptedException", nullptr, _ReentrantLock$Sync_MethodAnnotations_lockInterruptibly7},
	{"newCondition", "()Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;", nullptr, $FINAL, $method(static_cast<$AbstractQueuedSynchronizer$ConditionObject*(ReentrantLock$Sync::*)()>(&ReentrantLock$Sync::newCondition))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ReentrantLock$Sync::*)($ObjectInputStream*)>(&ReentrantLock$Sync::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"tryLock", "()Z", nullptr, $FINAL, $method(static_cast<bool(ReentrantLock$Sync::*)()>(&ReentrantLock$Sync::tryLock)), nullptr, nullptr, _ReentrantLock$Sync_MethodAnnotations_tryLock10},
	{"tryLockNanos", "(J)Z", nullptr, $FINAL, $method(static_cast<bool(ReentrantLock$Sync::*)(int64_t)>(&ReentrantLock$Sync::tryLockNanos)), "java.lang.InterruptedException", nullptr, _ReentrantLock$Sync_MethodAnnotations_tryLockNanos11},
	{"tryRelease", "(I)Z", nullptr, $PROTECTED | $FINAL, nullptr, nullptr, nullptr, _ReentrantLock$Sync_MethodAnnotations_tryRelease12},
	{}
};

$InnerClassInfo _ReentrantLock$Sync_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantLock$Sync", "java.util.concurrent.locks.ReentrantLock", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReentrantLock$Sync_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.locks.ReentrantLock$Sync",
	"java.util.concurrent.locks.AbstractQueuedSynchronizer",
	nullptr,
	_ReentrantLock$Sync_FieldInfo_,
	_ReentrantLock$Sync_MethodInfo_,
	nullptr,
	nullptr,
	_ReentrantLock$Sync_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantLock"
};

$Object* allocate$ReentrantLock$Sync($Class* clazz) {
	return $of($alloc(ReentrantLock$Sync));
}

void ReentrantLock$Sync::init$() {
	$AbstractQueuedSynchronizer::init$();
}

bool ReentrantLock$Sync::tryLock() {
	$var($Thread, current, $Thread::currentThread());
	int32_t c = getState();
	if (c == 0) {
		if (compareAndSetState(0, 1)) {
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

void ReentrantLock$Sync::lock() {
	if (!initialTryLock()) {
		acquire(1);
	}
}

void ReentrantLock$Sync::lockInterruptibly() {
	if ($Thread::interrupted()) {
		$throwNew($InterruptedException);
	}
	if (!initialTryLock()) {
		acquireInterruptibly(1);
	}
}

bool ReentrantLock$Sync::tryLockNanos(int64_t nanos) {
	if ($Thread::interrupted()) {
		$throwNew($InterruptedException);
	}
	bool var$0 = initialTryLock();
	return var$0 || tryAcquireNanos(1, nanos);
}

bool ReentrantLock$Sync::tryRelease(int32_t releases) {
	int32_t c = getState() - releases;
	if (getExclusiveOwnerThread() != $Thread::currentThread()) {
		$throwNew($IllegalMonitorStateException);
	}
	bool free = (c == 0);
	if (free) {
		setExclusiveOwnerThread(nullptr);
	}
	setState(c);
	return free;
}

bool ReentrantLock$Sync::isHeldExclusively() {
	return getExclusiveOwnerThread() == $Thread::currentThread();
}

$AbstractQueuedSynchronizer$ConditionObject* ReentrantLock$Sync::newCondition() {
	return $new($AbstractQueuedSynchronizer$ConditionObject, this);
}

$Thread* ReentrantLock$Sync::getOwner() {
	return getState() == 0 ? ($Thread*)nullptr : getExclusiveOwnerThread();
}

int32_t ReentrantLock$Sync::getHoldCount() {
	return isHeldExclusively() ? getState() : 0;
}

bool ReentrantLock$Sync::isLocked() {
	return getState() != 0;
}

void ReentrantLock$Sync::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	setState(0);
}

ReentrantLock$Sync::ReentrantLock$Sync() {
}

$Class* ReentrantLock$Sync::load$($String* name, bool initialize) {
	$loadClass(ReentrantLock$Sync, name, initialize, &_ReentrantLock$Sync_ClassInfo_, allocate$ReentrantLock$Sync);
	return class$;
}

$Class* ReentrantLock$Sync::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java