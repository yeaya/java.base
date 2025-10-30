#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalMonitorStateException.h>
#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync$HoldCounter.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <jcpp.h>

#undef EXCLUSIVE_MASK
#undef MAX_COUNT
#undef SHARED_SHIFT
#undef SHARED_UNIT

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalMonitorStateException = ::java::lang::IllegalMonitorStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $AbstractOwnableSynchronizer = ::java::util::concurrent::locks::AbstractOwnableSynchronizer;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;
using $AbstractQueuedSynchronizer$ConditionObject = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $ReentrantReadWriteLock$Sync$HoldCounter = ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync$HoldCounter;
using $ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter = ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$CompoundAttribute _ReentrantReadWriteLock$Sync_MethodAnnotations_tryAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _ReentrantReadWriteLock$Sync_MethodAnnotations_tryAcquireShared15[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _ReentrantReadWriteLock$Sync_MethodAnnotations_tryReadLock16[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _ReentrantReadWriteLock$Sync_MethodAnnotations_tryRelease17[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _ReentrantReadWriteLock$Sync_MethodAnnotations_tryReleaseShared18[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _ReentrantReadWriteLock$Sync_MethodAnnotations_tryWriteLock19[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$FieldInfo _ReentrantReadWriteLock$Sync_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantReadWriteLock$Sync, serialVersionUID)},
	{"SHARED_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(ReentrantReadWriteLock$Sync, SHARED_SHIFT)},
	{"SHARED_UNIT", "I", nullptr, $STATIC | $FINAL, $constField(ReentrantReadWriteLock$Sync, SHARED_UNIT)},
	{"MAX_COUNT", "I", nullptr, $STATIC | $FINAL, $constField(ReentrantReadWriteLock$Sync, MAX_COUNT)},
	{"EXCLUSIVE_MASK", "I", nullptr, $STATIC | $FINAL, $constField(ReentrantReadWriteLock$Sync, EXCLUSIVE_MASK)},
	{"readHolds", "Ljava/util/concurrent/locks/ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter;", nullptr, $PRIVATE | $TRANSIENT, $field(ReentrantReadWriteLock$Sync, readHolds)},
	{"cachedHoldCounter", "Ljava/util/concurrent/locks/ReentrantReadWriteLock$Sync$HoldCounter;", nullptr, $PRIVATE | $TRANSIENT, $field(ReentrantReadWriteLock$Sync, cachedHoldCounter)},
	{"firstReader", "Ljava/lang/Thread;", nullptr, $PRIVATE | $TRANSIENT, $field(ReentrantReadWriteLock$Sync, firstReader)},
	{"firstReaderHoldCount", "I", nullptr, $PRIVATE | $TRANSIENT, $field(ReentrantReadWriteLock$Sync, firstReaderHoldCount)},
	{}
};

$MethodInfo _ReentrantReadWriteLock$Sync_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReentrantReadWriteLock$Sync::*)()>(&ReentrantReadWriteLock$Sync::init$))},
	{"exclusiveCount", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ReentrantReadWriteLock$Sync::exclusiveCount))},
	{"fullTryAcquireShared", "(Ljava/lang/Thread;)I", nullptr, $FINAL, $method(static_cast<int32_t(ReentrantReadWriteLock$Sync::*)($Thread*)>(&ReentrantReadWriteLock$Sync::fullTryAcquireShared))},
	{"getCount", "()I", nullptr, $FINAL, $method(static_cast<int32_t(ReentrantReadWriteLock$Sync::*)()>(&ReentrantReadWriteLock$Sync::getCount))},
	{"getOwner", "()Ljava/lang/Thread;", nullptr, $FINAL, $method(static_cast<$Thread*(ReentrantReadWriteLock$Sync::*)()>(&ReentrantReadWriteLock$Sync::getOwner))},
	{"getReadHoldCount", "()I", nullptr, $FINAL, $method(static_cast<int32_t(ReentrantReadWriteLock$Sync::*)()>(&ReentrantReadWriteLock$Sync::getReadHoldCount))},
	{"getReadLockCount", "()I", nullptr, $FINAL, $method(static_cast<int32_t(ReentrantReadWriteLock$Sync::*)()>(&ReentrantReadWriteLock$Sync::getReadLockCount))},
	{"getWriteHoldCount", "()I", nullptr, $FINAL, $method(static_cast<int32_t(ReentrantReadWriteLock$Sync::*)()>(&ReentrantReadWriteLock$Sync::getWriteHoldCount))},
	{"isHeldExclusively", "()Z", nullptr, $PROTECTED | $FINAL},
	{"isWriteLocked", "()Z", nullptr, $FINAL, $method(static_cast<bool(ReentrantReadWriteLock$Sync::*)()>(&ReentrantReadWriteLock$Sync::isWriteLocked))},
	{"newCondition", "()Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;", nullptr, $FINAL, $method(static_cast<$AbstractQueuedSynchronizer$ConditionObject*(ReentrantReadWriteLock$Sync::*)()>(&ReentrantReadWriteLock$Sync::newCondition))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ReentrantReadWriteLock$Sync::*)($ObjectInputStream*)>(&ReentrantReadWriteLock$Sync::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readerShouldBlock", "()Z", nullptr, $ABSTRACT},
	{"sharedCount", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ReentrantReadWriteLock$Sync::sharedCount))},
	{"tryAcquire", "(I)Z", nullptr, $PROTECTED | $FINAL, nullptr, nullptr, nullptr, _ReentrantReadWriteLock$Sync_MethodAnnotations_tryAcquire14},
	{"tryAcquireShared", "(I)I", nullptr, $PROTECTED | $FINAL, nullptr, nullptr, nullptr, _ReentrantReadWriteLock$Sync_MethodAnnotations_tryAcquireShared15},
	{"tryReadLock", "()Z", nullptr, $FINAL, $method(static_cast<bool(ReentrantReadWriteLock$Sync::*)()>(&ReentrantReadWriteLock$Sync::tryReadLock)), nullptr, nullptr, _ReentrantReadWriteLock$Sync_MethodAnnotations_tryReadLock16},
	{"tryRelease", "(I)Z", nullptr, $PROTECTED | $FINAL, nullptr, nullptr, nullptr, _ReentrantReadWriteLock$Sync_MethodAnnotations_tryRelease17},
	{"tryReleaseShared", "(I)Z", nullptr, $PROTECTED | $FINAL, nullptr, nullptr, nullptr, _ReentrantReadWriteLock$Sync_MethodAnnotations_tryReleaseShared18},
	{"tryWriteLock", "()Z", nullptr, $FINAL, $method(static_cast<bool(ReentrantReadWriteLock$Sync::*)()>(&ReentrantReadWriteLock$Sync::tryWriteLock)), nullptr, nullptr, _ReentrantReadWriteLock$Sync_MethodAnnotations_tryWriteLock19},
	{"unmatchedUnlockException", "()Ljava/lang/IllegalMonitorStateException;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$IllegalMonitorStateException*(*)()>(&ReentrantReadWriteLock$Sync::unmatchedUnlockException))},
	{"writerShouldBlock", "()Z", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _ReentrantReadWriteLock$Sync_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "java.util.concurrent.locks.ReentrantReadWriteLock", "Sync", $STATIC | $ABSTRACT},
	{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter", "java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "ThreadLocalHoldCounter", $STATIC | $FINAL},
	{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync$HoldCounter", "java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "HoldCounter", $STATIC | $FINAL},
	{}
};

$ClassInfo _ReentrantReadWriteLock$Sync_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.locks.ReentrantReadWriteLock$Sync",
	"java.util.concurrent.locks.AbstractQueuedSynchronizer",
	nullptr,
	_ReentrantReadWriteLock$Sync_FieldInfo_,
	_ReentrantReadWriteLock$Sync_MethodInfo_,
	nullptr,
	nullptr,
	_ReentrantReadWriteLock$Sync_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantReadWriteLock"
};

$Object* allocate$ReentrantReadWriteLock$Sync($Class* clazz) {
	return $of($alloc(ReentrantReadWriteLock$Sync));
}

int32_t ReentrantReadWriteLock$Sync::sharedCount(int32_t c) {
	$init(ReentrantReadWriteLock$Sync);
	return $usr(c, ReentrantReadWriteLock$Sync::SHARED_SHIFT);
}

int32_t ReentrantReadWriteLock$Sync::exclusiveCount(int32_t c) {
	$init(ReentrantReadWriteLock$Sync);
	return (int32_t)(c & (uint32_t)ReentrantReadWriteLock$Sync::EXCLUSIVE_MASK);
}

void ReentrantReadWriteLock$Sync::init$() {
	$AbstractQueuedSynchronizer::init$();
	$set(this, readHolds, $new($ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter));
	setState(getState());
}

bool ReentrantReadWriteLock$Sync::tryRelease(int32_t releases) {
	if (!isHeldExclusively()) {
		$throwNew($IllegalMonitorStateException);
	}
	int32_t nextc = getState() - releases;
	bool free = exclusiveCount(nextc) == 0;
	if (free) {
		setExclusiveOwnerThread(nullptr);
	}
	setState(nextc);
	return free;
}

bool ReentrantReadWriteLock$Sync::tryAcquire(int32_t acquires) {
	$var($Thread, current, $Thread::currentThread());
	int32_t c = getState();
	int32_t w = exclusiveCount(c);
	if (c != 0) {
		if (w == 0 || current != getExclusiveOwnerThread()) {
			return false;
		}
		if (w + exclusiveCount(acquires) > ReentrantReadWriteLock$Sync::MAX_COUNT) {
			$throwNew($Error, "Maximum lock count exceeded"_s);
		}
		setState(c + acquires);
		return true;
	}
	bool var$0 = writerShouldBlock();
	if (var$0 || !compareAndSetState(c, c + acquires)) {
		return false;
	}
	setExclusiveOwnerThread(current);
	return true;
}

bool ReentrantReadWriteLock$Sync::tryReleaseShared(int32_t unused) {
	$useLocalCurrentObjectStackCache();
	$var($Thread, current, $Thread::currentThread());
	if (this->firstReader == current) {
		if (this->firstReaderHoldCount == 1) {
			$set(this, firstReader, nullptr);
		} else {
			--this->firstReaderHoldCount;
		}
	} else {
		$var($ReentrantReadWriteLock$Sync$HoldCounter, rh, this->cachedHoldCounter);
		if (rh == nullptr || $nc(rh)->tid != $LockSupport::getThreadId(current)) {
			$assign(rh, $cast($ReentrantReadWriteLock$Sync$HoldCounter, $nc(this->readHolds)->get()));
		}
		int32_t count = $nc(rh)->count;
		if (count <= 1) {
			$nc(this->readHolds)->remove();
			if (count <= 0) {
				$throw($(unmatchedUnlockException()));
			}
		}
		--rh->count;
	}
	for (;;) {
		int32_t c = getState();
		int32_t nextc = c - ReentrantReadWriteLock$Sync::SHARED_UNIT;
		if (compareAndSetState(c, nextc)) {
			return nextc == 0;
		}
	}
}

$IllegalMonitorStateException* ReentrantReadWriteLock$Sync::unmatchedUnlockException() {
	$init(ReentrantReadWriteLock$Sync);
	return $new($IllegalMonitorStateException, "attempt to unlock read lock, not locked by current thread"_s);
}

int32_t ReentrantReadWriteLock$Sync::tryAcquireShared(int32_t unused) {
	$useLocalCurrentObjectStackCache();
	$var($Thread, current, $Thread::currentThread());
	int32_t c = getState();
	bool var$0 = exclusiveCount(c) != 0;
	if (var$0 && getExclusiveOwnerThread() != current) {
		return -1;
	}
	int32_t r = sharedCount(c);
	bool var$1 = !readerShouldBlock() && r < ReentrantReadWriteLock$Sync::MAX_COUNT;
	if (var$1 && compareAndSetState(c, c + ReentrantReadWriteLock$Sync::SHARED_UNIT)) {
		if (r == 0) {
			$set(this, firstReader, current);
			this->firstReaderHoldCount = 1;
		} else if (this->firstReader == current) {
			++this->firstReaderHoldCount;
		} else {
			$var($ReentrantReadWriteLock$Sync$HoldCounter, rh, this->cachedHoldCounter);
			if (rh == nullptr || $nc(rh)->tid != $LockSupport::getThreadId(current)) {
				$set(this, cachedHoldCounter, ($assign(rh, $cast($ReentrantReadWriteLock$Sync$HoldCounter, $nc(this->readHolds)->get()))));
			} else if (rh->count == 0) {
				$nc(this->readHolds)->set(rh);
			}
			++$nc(rh)->count;
		}
		return 1;
	}
	return fullTryAcquireShared(current);
}

int32_t ReentrantReadWriteLock$Sync::fullTryAcquireShared($Thread* current) {
	$var($ReentrantReadWriteLock$Sync$HoldCounter, rh, nullptr);
	for (;;) {
		int32_t c = getState();
		if (exclusiveCount(c) != 0) {
			if (getExclusiveOwnerThread() != current) {
				return -1;
			}
		} else if (readerShouldBlock()) {
			if (this->firstReader == current) {
			} else {
				if (rh == nullptr) {
					$assign(rh, this->cachedHoldCounter);
					if (rh == nullptr || $nc(rh)->tid != $LockSupport::getThreadId(current)) {
						$assign(rh, $cast($ReentrantReadWriteLock$Sync$HoldCounter, $nc(this->readHolds)->get()));
						if ($nc(rh)->count == 0) {
							$nc(this->readHolds)->remove();
						}
					}
				}
				if ($nc(rh)->count == 0) {
					return -1;
				}
			}
		}
		if (sharedCount(c) == ReentrantReadWriteLock$Sync::MAX_COUNT) {
			$throwNew($Error, "Maximum lock count exceeded"_s);
		}
		if (compareAndSetState(c, c + ReentrantReadWriteLock$Sync::SHARED_UNIT)) {
			if (sharedCount(c) == 0) {
				$set(this, firstReader, current);
				this->firstReaderHoldCount = 1;
			} else if (this->firstReader == current) {
				++this->firstReaderHoldCount;
			} else {
				if (rh == nullptr) {
					$assign(rh, this->cachedHoldCounter);
				}
				if (rh == nullptr || $nc(rh)->tid != $LockSupport::getThreadId(current)) {
					$assign(rh, $cast($ReentrantReadWriteLock$Sync$HoldCounter, $nc(this->readHolds)->get()));
				} else if (rh->count == 0) {
					$nc(this->readHolds)->set(rh);
				}
				++$nc(rh)->count;
				$set(this, cachedHoldCounter, rh);
			}
			return 1;
		}
	}
}

bool ReentrantReadWriteLock$Sync::tryWriteLock() {
	$var($Thread, current, $Thread::currentThread());
	int32_t c = getState();
	if (c != 0) {
		int32_t w = exclusiveCount(c);
		if (w == 0 || current != getExclusiveOwnerThread()) {
			return false;
		}
		if (w == ReentrantReadWriteLock$Sync::MAX_COUNT) {
			$throwNew($Error, "Maximum lock count exceeded"_s);
		}
	}
	if (!compareAndSetState(c, c + 1)) {
		return false;
	}
	setExclusiveOwnerThread(current);
	return true;
}

bool ReentrantReadWriteLock$Sync::tryReadLock() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, current, $Thread::currentThread());
	for (;;) {
		int32_t c = getState();
		bool var$0 = exclusiveCount(c) != 0;
		if (var$0 && getExclusiveOwnerThread() != current) {
			return false;
		}
		int32_t r = sharedCount(c);
		if (r == ReentrantReadWriteLock$Sync::MAX_COUNT) {
			$throwNew($Error, "Maximum lock count exceeded"_s);
		}
		if (compareAndSetState(c, c + ReentrantReadWriteLock$Sync::SHARED_UNIT)) {
			if (r == 0) {
				$set(this, firstReader, current);
				this->firstReaderHoldCount = 1;
			} else if (this->firstReader == current) {
				++this->firstReaderHoldCount;
			} else {
				$var($ReentrantReadWriteLock$Sync$HoldCounter, rh, this->cachedHoldCounter);
				if (rh == nullptr || $nc(rh)->tid != $LockSupport::getThreadId(current)) {
					$set(this, cachedHoldCounter, ($assign(rh, $cast($ReentrantReadWriteLock$Sync$HoldCounter, $nc(this->readHolds)->get()))));
				} else if (rh->count == 0) {
					$nc(this->readHolds)->set(rh);
				}
				++$nc(rh)->count;
			}
			return true;
		}
	}
}

bool ReentrantReadWriteLock$Sync::isHeldExclusively() {
	return getExclusiveOwnerThread() == $Thread::currentThread();
}

$AbstractQueuedSynchronizer$ConditionObject* ReentrantReadWriteLock$Sync::newCondition() {
	return $new($AbstractQueuedSynchronizer$ConditionObject, this);
}

$Thread* ReentrantReadWriteLock$Sync::getOwner() {
	return ((exclusiveCount(getState()) == 0) ? ($Thread*)nullptr : getExclusiveOwnerThread());
}

int32_t ReentrantReadWriteLock$Sync::getReadLockCount() {
	return sharedCount(getState());
}

bool ReentrantReadWriteLock$Sync::isWriteLocked() {
	return exclusiveCount(getState()) != 0;
}

int32_t ReentrantReadWriteLock$Sync::getWriteHoldCount() {
	return isHeldExclusively() ? exclusiveCount(getState()) : 0;
}

int32_t ReentrantReadWriteLock$Sync::getReadHoldCount() {
	$useLocalCurrentObjectStackCache();
	if (getReadLockCount() == 0) {
		return 0;
	}
	$var($Thread, current, $Thread::currentThread());
	if (this->firstReader == current) {
		return this->firstReaderHoldCount;
	}
	$var($ReentrantReadWriteLock$Sync$HoldCounter, rh, this->cachedHoldCounter);
	if (rh != nullptr && rh->tid == $LockSupport::getThreadId(current)) {
		return rh->count;
	}
	int32_t count = $nc(($cast($ReentrantReadWriteLock$Sync$HoldCounter, $($nc(this->readHolds)->get()))))->count;
	if (count == 0) {
		$nc(this->readHolds)->remove();
	}
	return count;
}

void ReentrantReadWriteLock$Sync::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, readHolds, $new($ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter));
	setState(0);
}

int32_t ReentrantReadWriteLock$Sync::getCount() {
	return getState();
}

ReentrantReadWriteLock$Sync::ReentrantReadWriteLock$Sync() {
}

$Class* ReentrantReadWriteLock$Sync::load$($String* name, bool initialize) {
	$loadClass(ReentrantReadWriteLock$Sync, name, initialize, &_ReentrantReadWriteLock$Sync_ClassInfo_, allocate$ReentrantReadWriteLock$Sync);
	return class$;
}

$Class* ReentrantReadWriteLock$Sync::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java