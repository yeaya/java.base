#include <java/util/concurrent/locks/StampedLock.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalMonitorStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/StampedLock$Node.h>
#include <java/util/concurrent/locks/StampedLock$ReadLockView.h>
#include <java/util/concurrent/locks/StampedLock$ReadWriteLockView.h>
#include <java/util/concurrent/locks/StampedLock$ReaderNode.h>
#include <java/util/concurrent/locks/StampedLock$WriteLockView.h>
#include <java/util/concurrent/locks/StampedLock$WriterNode.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ABITS
#undef CANCELLED
#undef HEAD
#undef INTERRUPTED
#undef LG_READERS
#undef ORIGIN
#undef RBITS
#undef RFULL
#undef RSAFE
#undef RUNIT
#undef SBITS
#undef STATE
#undef TAIL
#undef U
#undef WAITING
#undef WBIT

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalMonitorStateException = ::java::lang::IllegalMonitorStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Lock = ::java::util::concurrent::locks::Lock;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $StampedLock$Node = ::java::util::concurrent::locks::StampedLock$Node;
using $StampedLock$ReadLockView = ::java::util::concurrent::locks::StampedLock$ReadLockView;
using $StampedLock$ReadWriteLockView = ::java::util::concurrent::locks::StampedLock$ReadWriteLockView;
using $StampedLock$ReaderNode = ::java::util::concurrent::locks::StampedLock$ReaderNode;
using $StampedLock$WriteLockView = ::java::util::concurrent::locks::StampedLock$WriteLockView;
using $StampedLock$WriterNode = ::java::util::concurrent::locks::StampedLock$WriterNode;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$CompoundAttribute _StampedLock_MethodAnnotations_readLock19[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _StampedLock_MethodAnnotations_tryAcquireRead26[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _StampedLock_MethodAnnotations_tryAcquireWrite27[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _StampedLock_MethodAnnotations_tryUnlockRead37[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _StampedLock_MethodAnnotations_tryUnlockWrite38[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _StampedLock_MethodAnnotations_unlockRead43[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _StampedLock_MethodAnnotations_unlockWrite44[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$CompoundAttribute _StampedLock_MethodAnnotations_writeLock49[] = {
	{"Ljdk/internal/vm/annotation/ReservedStackAccess;", nullptr},
	{}
};

$FieldInfo _StampedLock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, serialVersionUID)},
	{"LG_READERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, LG_READERS)},
	{"RUNIT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, RUNIT)},
	{"WBIT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, WBIT)},
	{"RBITS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, RBITS)},
	{"RFULL", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, RFULL)},
	{"ABITS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, ABITS)},
	{"SBITS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, SBITS)},
	{"RSAFE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, RSAFE)},
	{"ORIGIN", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, ORIGIN)},
	{"INTERRUPTED", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StampedLock, INTERRUPTED)},
	{"WAITING", "I", nullptr, $STATIC | $FINAL, $constField(StampedLock, WAITING)},
	{"CANCELLED", "I", nullptr, $STATIC | $FINAL, $constField(StampedLock, CANCELLED)},
	{"head", "Ljava/util/concurrent/locks/StampedLock$Node;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(StampedLock, head)},
	{"tail", "Ljava/util/concurrent/locks/StampedLock$Node;", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(StampedLock, tail)},
	{"readLockView", "Ljava/util/concurrent/locks/StampedLock$ReadLockView;", nullptr, $TRANSIENT, $field(StampedLock, readLockView)},
	{"writeLockView", "Ljava/util/concurrent/locks/StampedLock$WriteLockView;", nullptr, $TRANSIENT, $field(StampedLock, writeLockView)},
	{"readWriteLockView", "Ljava/util/concurrent/locks/StampedLock$ReadWriteLockView;", nullptr, $TRANSIENT, $field(StampedLock, readWriteLockView)},
	{"state", "J", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(StampedLock, state)},
	{"readerOverflow", "I", nullptr, $PRIVATE | $TRANSIENT, $field(StampedLock, readerOverflow)},
	{"U", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StampedLock, U)},
	{"STATE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StampedLock, STATE)},
	{"HEAD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StampedLock, HEAD)},
	{"TAIL", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StampedLock, TAIL)},
	{}
};

$MethodInfo _StampedLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StampedLock::*)()>(&StampedLock::init$))},
	{"acquireRead", "(ZZJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(StampedLock::*)(bool,bool,int64_t)>(&StampedLock::acquireRead))},
	{"acquireWrite", "(ZZJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(StampedLock::*)(bool,bool,int64_t)>(&StampedLock::acquireWrite))},
	{"asReadLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PUBLIC},
	{"asReadWriteLock", "()Ljava/util/concurrent/locks/ReadWriteLock;", nullptr, $PUBLIC},
	{"asWriteLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PUBLIC},
	{"cancelAcquire", "(Ljava/util/concurrent/locks/StampedLock$Node;Z)J", nullptr, $PRIVATE, $method(static_cast<int64_t(StampedLock::*)($StampedLock$Node*,bool)>(&StampedLock::cancelAcquire))},
	{"cancelCowaiter", "(Ljava/util/concurrent/locks/StampedLock$ReaderNode;Ljava/util/concurrent/locks/StampedLock$ReaderNode;Z)J", nullptr, $PRIVATE, $method(static_cast<int64_t(StampedLock::*)($StampedLock$ReaderNode*,$StampedLock$ReaderNode*,bool)>(&StampedLock::cancelCowaiter))},
	{"casState", "(JJ)Z", nullptr, $PRIVATE, $method(static_cast<bool(StampedLock::*)(int64_t,int64_t)>(&StampedLock::casState))},
	{"casTail", "(Ljava/util/concurrent/locks/StampedLock$Node;Ljava/util/concurrent/locks/StampedLock$Node;)Z", nullptr, $PRIVATE, $method(static_cast<bool(StampedLock::*)($StampedLock$Node*,$StampedLock$Node*)>(&StampedLock::casTail))},
	{"cleanQueue", "()V", nullptr, $PRIVATE, $method(static_cast<void(StampedLock::*)()>(&StampedLock::cleanQueue))},
	{"getReadLockCount", "(J)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StampedLock::*)(int64_t)>(&StampedLock::getReadLockCount))},
	{"getReadLockCount", "()I", nullptr, $PUBLIC},
	{"isLockStamp", "(J)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int64_t)>(&StampedLock::isLockStamp))},
	{"isOptimisticReadStamp", "(J)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int64_t)>(&StampedLock::isOptimisticReadStamp))},
	{"isReadLockStamp", "(J)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int64_t)>(&StampedLock::isReadLockStamp))},
	{"isReadLocked", "()Z", nullptr, $PUBLIC},
	{"isWriteLockStamp", "(J)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int64_t)>(&StampedLock::isWriteLockStamp))},
	{"isWriteLocked", "()Z", nullptr, $PUBLIC},
	{"readLock", "()J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _StampedLock_MethodAnnotations_readLock19},
	{"readLockInterruptibly", "()J", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(StampedLock::*)($ObjectInputStream*)>(&StampedLock::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"releaseWrite", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(StampedLock::*)(int64_t)>(&StampedLock::releaseWrite))},
	{"signalCowaiters", "(Ljava/util/concurrent/locks/StampedLock$ReaderNode;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StampedLock$ReaderNode*)>(&StampedLock::signalCowaiters))},
	{"signalNext", "(Ljava/util/concurrent/locks/StampedLock$Node;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($StampedLock$Node*)>(&StampedLock::signalNext))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAcquireRead", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(StampedLock::*)()>(&StampedLock::tryAcquireRead)), nullptr, nullptr, _StampedLock_MethodAnnotations_tryAcquireRead26},
	{"tryAcquireWrite", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(StampedLock::*)()>(&StampedLock::tryAcquireWrite)), nullptr, nullptr, _StampedLock_MethodAnnotations_tryAcquireWrite27},
	{"tryConvertToOptimisticRead", "(J)J", nullptr, $PUBLIC},
	{"tryConvertToReadLock", "(J)J", nullptr, $PUBLIC},
	{"tryConvertToWriteLock", "(J)J", nullptr, $PUBLIC},
	{"tryDecReaderOverflow", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(StampedLock::*)(int64_t)>(&StampedLock::tryDecReaderOverflow))},
	{"tryIncReaderOverflow", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(StampedLock::*)(int64_t)>(&StampedLock::tryIncReaderOverflow))},
	{"tryInitializeHead", "()V", nullptr, $PRIVATE, $method(static_cast<void(StampedLock::*)()>(&StampedLock::tryInitializeHead))},
	{"tryOptimisticRead", "()J", nullptr, $PUBLIC},
	{"tryReadLock", "()J", nullptr, $PUBLIC},
	{"tryReadLock", "(JLjava/util/concurrent/TimeUnit;)J", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"tryUnlockRead", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _StampedLock_MethodAnnotations_tryUnlockRead37},
	{"tryUnlockWrite", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _StampedLock_MethodAnnotations_tryUnlockWrite38},
	{"tryWriteLock", "()J", nullptr, $PUBLIC},
	{"tryWriteLock", "(JLjava/util/concurrent/TimeUnit;)J", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"unlinkCowaiter", "(Ljava/util/concurrent/locks/StampedLock$ReaderNode;Ljava/util/concurrent/locks/StampedLock$ReaderNode;)V", nullptr, $PRIVATE, $method(static_cast<void(StampedLock::*)($StampedLock$ReaderNode*,$StampedLock$ReaderNode*)>(&StampedLock::unlinkCowaiter))},
	{"unlock", "(J)V", nullptr, $PUBLIC},
	{"unlockRead", "(J)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _StampedLock_MethodAnnotations_unlockRead43},
	{"unlockWrite", "(J)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _StampedLock_MethodAnnotations_unlockWrite44},
	{"unlockWriteState", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&StampedLock::unlockWriteState))},
	{"unstampedUnlockRead", "()V", nullptr, $FINAL, $method(static_cast<void(StampedLock::*)()>(&StampedLock::unstampedUnlockRead))},
	{"unstampedUnlockWrite", "()V", nullptr, $FINAL, $method(static_cast<void(StampedLock::*)()>(&StampedLock::unstampedUnlockWrite))},
	{"validate", "(J)Z", nullptr, $PUBLIC},
	{"writeLock", "()J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _StampedLock_MethodAnnotations_writeLock49},
	{"writeLockInterruptibly", "()J", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _StampedLock_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.StampedLock$ReadWriteLockView", "java.util.concurrent.locks.StampedLock", "ReadWriteLockView", $FINAL},
	{"java.util.concurrent.locks.StampedLock$WriteLockView", "java.util.concurrent.locks.StampedLock", "WriteLockView", $FINAL},
	{"java.util.concurrent.locks.StampedLock$ReadLockView", "java.util.concurrent.locks.StampedLock", "ReadLockView", $FINAL},
	{"java.util.concurrent.locks.StampedLock$ReaderNode", "java.util.concurrent.locks.StampedLock", "ReaderNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.StampedLock$WriterNode", "java.util.concurrent.locks.StampedLock", "WriterNode", $STATIC | $FINAL},
	{"java.util.concurrent.locks.StampedLock$Node", "java.util.concurrent.locks.StampedLock", "Node", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StampedLock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.locks.StampedLock",
	"java.lang.Object",
	"java.io.Serializable",
	_StampedLock_FieldInfo_,
	_StampedLock_MethodInfo_,
	nullptr,
	nullptr,
	_StampedLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.StampedLock$ReadWriteLockView,java.util.concurrent.locks.StampedLock$WriteLockView,java.util.concurrent.locks.StampedLock$ReadLockView,java.util.concurrent.locks.StampedLock$ReaderNode,java.util.concurrent.locks.StampedLock$WriterNode,java.util.concurrent.locks.StampedLock$Node"
};

$Object* allocate$StampedLock($Class* clazz) {
	return $of($alloc(StampedLock));
}

$Unsafe* StampedLock::U = nullptr;
int64_t StampedLock::STATE = 0;
int64_t StampedLock::HEAD = 0;
int64_t StampedLock::TAIL = 0;

void StampedLock::init$() {
	this->state = StampedLock::ORIGIN;
}

bool StampedLock::casState(int64_t expect, int64_t update) {
	return $nc(StampedLock::U)->compareAndSetLong(this, StampedLock::STATE, expect, update);
}

int64_t StampedLock::tryAcquireWrite() {
	int64_t s = 0;
	int64_t nextState = 0;
	bool var$0 = ((int64_t)((s = this->state) & (uint64_t)StampedLock::ABITS)) == (int64_t)0;
	if (var$0 && casState(s, nextState = s | StampedLock::WBIT)) {
		$nc(StampedLock::U)->storeStoreFence();
		return nextState;
	}
	return 0;
}

int64_t StampedLock::tryAcquireRead() {
	{
		int64_t s = 0;
		int64_t m = 0;
		int64_t nextState = 0;
		for (;;) {
			if ((m = (int64_t)((s = this->state) & (uint64_t)StampedLock::ABITS)) < StampedLock::RFULL) {
				if (casState(s, nextState = s + StampedLock::RUNIT)) {
					return nextState;
				}
			} else if (m == StampedLock::WBIT) {
				return 0;
			} else if ((nextState = tryIncReaderOverflow(s)) != (int64_t)0) {
				return nextState;
			}
		}
	}
}

int64_t StampedLock::unlockWriteState(int64_t s) {
	$init(StampedLock);
	return ((s += StampedLock::WBIT) == (int64_t)0) ? StampedLock::ORIGIN : s;
}

int64_t StampedLock::releaseWrite(int64_t s) {
	int64_t nextState = this->state = unlockWriteState(s);
	signalNext(this->head);
	return nextState;
}

int64_t StampedLock::writeLock() {
	int64_t s = (int64_t)($nc(StampedLock::U)->getLongOpaque(this, StampedLock::STATE) & (uint64_t)~StampedLock::ABITS);
	int64_t nextState = 0;
	if (casState(s, nextState = s | StampedLock::WBIT)) {
		$nc(StampedLock::U)->storeStoreFence();
		return nextState;
	}
	return acquireWrite(false, false, 0);
}

int64_t StampedLock::tryWriteLock() {
	return tryAcquireWrite();
}

int64_t StampedLock::tryWriteLock(int64_t time, $TimeUnit* unit) {
	int64_t nanos = $nc(unit)->toNanos(time);
	if (!$Thread::interrupted()) {
		int64_t nextState = 0;
		if ((nextState = tryAcquireWrite()) != (int64_t)0) {
			return nextState;
		}
		if (nanos <= (int64_t)0) {
			return 0;
		}
		nextState = acquireWrite(true, true, $System::nanoTime() + nanos);
		if (nextState != StampedLock::INTERRUPTED) {
			return nextState;
		}
	}
	$throwNew($InterruptedException);
}

int64_t StampedLock::writeLockInterruptibly() {
	int64_t nextState = 0;
	bool var$0 = !$Thread::interrupted();
	if (var$0) {
		bool var$1 = (nextState = tryAcquireWrite()) != (int64_t)0;
		var$0 = (var$1 || (nextState = acquireWrite(true, false, 0)) != StampedLock::INTERRUPTED);
	}
	if (var$0) {
		return nextState;
	}
	$throwNew($InterruptedException);
}

int64_t StampedLock::readLock() {
	int64_t s = (int64_t)($nc(StampedLock::U)->getLongOpaque(this, StampedLock::STATE) & (uint64_t)StampedLock::RSAFE);
	int64_t nextState = 0;
	if (casState(s, nextState = s + StampedLock::RUNIT)) {
		return nextState;
	} else {
		return acquireRead(false, false, 0);
	}
}

int64_t StampedLock::tryReadLock() {
	return tryAcquireRead();
}

int64_t StampedLock::tryReadLock(int64_t time, $TimeUnit* unit) {
	int64_t nanos = $nc(unit)->toNanos(time);
	if (!$Thread::interrupted()) {
		int64_t nextState = 0;
		if (this->tail == this->head && (nextState = tryAcquireRead()) != (int64_t)0) {
			return nextState;
		}
		if (nanos <= (int64_t)0) {
			return 0;
		}
		nextState = acquireRead(true, true, $System::nanoTime() + nanos);
		if (nextState != StampedLock::INTERRUPTED) {
			return nextState;
		}
	}
	$throwNew($InterruptedException);
}

int64_t StampedLock::readLockInterruptibly() {
	int64_t nextState = 0;
	bool var$0 = !$Thread::interrupted();
	if (var$0) {
		bool var$1 = (nextState = tryAcquireRead()) != (int64_t)0;
		var$0 = (var$1 || (nextState = acquireRead(true, false, 0)) != StampedLock::INTERRUPTED);
	}
	if (var$0) {
		return nextState;
	}
	$throwNew($InterruptedException);
}

int64_t StampedLock::tryOptimisticRead() {
	int64_t s = 0;
	return (((int64_t)((s = this->state) & (uint64_t)StampedLock::WBIT)) == (int64_t)0) ? ((int64_t)(s & (uint64_t)StampedLock::SBITS)) : (int64_t)0;
}

bool StampedLock::validate(int64_t stamp) {
	$nc(StampedLock::U)->loadFence();
	return ((int64_t)(stamp & (uint64_t)StampedLock::SBITS)) == ((int64_t)(this->state & (uint64_t)StampedLock::SBITS));
}

void StampedLock::unlockWrite(int64_t stamp) {
	if (this->state != stamp || ((int64_t)(stamp & (uint64_t)StampedLock::WBIT)) == (int64_t)0) {
		$throwNew($IllegalMonitorStateException);
	}
	releaseWrite(stamp);
}

void StampedLock::unlockRead(int64_t stamp) {
	int64_t s = 0;
	int64_t m = 0;
	if (((int64_t)(stamp & (uint64_t)StampedLock::RBITS)) != (int64_t)0) {
		while (true) {
			bool var$0 = ((int64_t)((s = this->state) & (uint64_t)StampedLock::SBITS)) == ((int64_t)(stamp & (uint64_t)StampedLock::SBITS));
			if (!(var$0 && ((m = (int64_t)(s & (uint64_t)StampedLock::RBITS)) != (int64_t)0))) {
				break;
			}
			{
				if (m < StampedLock::RFULL) {
					if (casState(s, s - StampedLock::RUNIT)) {
						if (m == StampedLock::RUNIT) {
							signalNext(this->head);
						}
						return;
					}
				} else if (tryDecReaderOverflow(s) != (int64_t)0) {
					return;
				}
			}
		}
	}
	$throwNew($IllegalMonitorStateException);
}

void StampedLock::unlock(int64_t stamp) {
	if (((int64_t)(stamp & (uint64_t)StampedLock::WBIT)) != (int64_t)0) {
		unlockWrite(stamp);
	} else {
		unlockRead(stamp);
	}
}

int64_t StampedLock::tryConvertToWriteLock(int64_t stamp) {
	int64_t a = (int64_t)(stamp & (uint64_t)StampedLock::ABITS);
	int64_t m = 0;
	int64_t s = 0;
	int64_t nextState = 0;
	while (((int64_t)((s = this->state) & (uint64_t)StampedLock::SBITS)) == ((int64_t)(stamp & (uint64_t)StampedLock::SBITS))) {
		if ((m = (int64_t)(s & (uint64_t)StampedLock::ABITS)) == (int64_t)0) {
			if (a != (int64_t)0) {
				break;
			}
			if (casState(s, nextState = s | StampedLock::WBIT)) {
				$nc(StampedLock::U)->storeStoreFence();
				return nextState;
			}
		} else if (m == StampedLock::WBIT) {
			if (a != m) {
				break;
			}
			return stamp;
		} else if (m == StampedLock::RUNIT && a != (int64_t)0) {
			if (casState(s, nextState = s - StampedLock::RUNIT + StampedLock::WBIT)) {
				return nextState;
			}
		} else {
			break;
		}
	}
	return 0;
}

int64_t StampedLock::tryConvertToReadLock(int64_t stamp) {
	int64_t a = 0;
	int64_t s = 0;
	int64_t nextState = 0;
	while (((int64_t)((s = this->state) & (uint64_t)StampedLock::SBITS)) == ((int64_t)(stamp & (uint64_t)StampedLock::SBITS))) {
		if ((a = (int64_t)(stamp & (uint64_t)StampedLock::ABITS)) >= StampedLock::WBIT) {
			if (s != stamp) {
				break;
			}
			nextState = (this->state = unlockWriteState(s) + StampedLock::RUNIT);
			signalNext(this->head);
			return nextState;
		} else if (a == (int64_t)0) {
			if (((int64_t)(s & (uint64_t)StampedLock::ABITS)) < StampedLock::RFULL) {
				if (casState(s, nextState = s + StampedLock::RUNIT)) {
					return nextState;
				}
			} else if ((nextState = tryIncReaderOverflow(s)) != (int64_t)0) {
				return nextState;
			}
		} else {
			if (((int64_t)(s & (uint64_t)StampedLock::ABITS)) == (int64_t)0) {
				break;
			}
			return stamp;
		}
	}
	return 0;
}

int64_t StampedLock::tryConvertToOptimisticRead(int64_t stamp) {
	int64_t a = 0;
	int64_t m = 0;
	int64_t s = 0;
	int64_t nextState = 0;
	$nc(StampedLock::U)->loadFence();
	while (((int64_t)((s = this->state) & (uint64_t)StampedLock::SBITS)) == ((int64_t)(stamp & (uint64_t)StampedLock::SBITS))) {
		if ((a = (int64_t)(stamp & (uint64_t)StampedLock::ABITS)) >= StampedLock::WBIT) {
			if (s != stamp) {
				break;
			}
			return releaseWrite(s);
		} else if (a == (int64_t)0) {
			return stamp;
		} else if ((m = (int64_t)(s & (uint64_t)StampedLock::ABITS)) == (int64_t)0) {
			break;
		} else if (m < StampedLock::RFULL) {
			if (casState(s, nextState = s - StampedLock::RUNIT)) {
				if (m == StampedLock::RUNIT) {
					signalNext(this->head);
				}
				return (int64_t)(nextState & (uint64_t)StampedLock::SBITS);
			}
		} else if ((nextState = tryDecReaderOverflow(s)) != (int64_t)0) {
			return (int64_t)(nextState & (uint64_t)StampedLock::SBITS);
		}
	}
	return 0;
}

bool StampedLock::tryUnlockWrite() {
	int64_t s = 0;
	if (((int64_t)((s = this->state) & (uint64_t)StampedLock::WBIT)) != (int64_t)0) {
		releaseWrite(s);
		return true;
	}
	return false;
}

bool StampedLock::tryUnlockRead() {
	int64_t s = 0;
	int64_t m = 0;
	while (true) {
		bool var$0 = (m = (int64_t)((s = this->state) & (uint64_t)StampedLock::ABITS)) != (int64_t)0;
		if (!(var$0 && m < StampedLock::WBIT)) {
			break;
		}
		{
			if (m < StampedLock::RFULL) {
				if (casState(s, s - StampedLock::RUNIT)) {
					if (m == StampedLock::RUNIT) {
						signalNext(this->head);
					}
					return true;
				}
			} else if (tryDecReaderOverflow(s) != (int64_t)0) {
				return true;
			}
		}
	}
	return false;
}

int32_t StampedLock::getReadLockCount(int64_t s) {
	int64_t readers = 0;
	if ((readers = (int64_t)(s & (uint64_t)StampedLock::RBITS)) >= StampedLock::RFULL) {
		readers = StampedLock::RFULL + this->readerOverflow;
	}
	return (int32_t)readers;
}

bool StampedLock::isWriteLocked() {
	return ((int64_t)(this->state & (uint64_t)StampedLock::WBIT)) != (int64_t)0;
}

bool StampedLock::isReadLocked() {
	return ((int64_t)(this->state & (uint64_t)StampedLock::RBITS)) != (int64_t)0;
}

bool StampedLock::isWriteLockStamp(int64_t stamp) {
	$init(StampedLock);
	return ((int64_t)(stamp & (uint64_t)StampedLock::ABITS)) == StampedLock::WBIT;
}

bool StampedLock::isReadLockStamp(int64_t stamp) {
	$init(StampedLock);
	return ((int64_t)(stamp & (uint64_t)StampedLock::RBITS)) != (int64_t)0;
}

bool StampedLock::isLockStamp(int64_t stamp) {
	$init(StampedLock);
	return ((int64_t)(stamp & (uint64_t)StampedLock::ABITS)) != (int64_t)0;
}

bool StampedLock::isOptimisticReadStamp(int64_t stamp) {
	$init(StampedLock);
	return ((int64_t)(stamp & (uint64_t)StampedLock::ABITS)) == (int64_t)0 && stamp != (int64_t)0;
}

int32_t StampedLock::getReadLockCount() {
	return getReadLockCount(this->state);
}

$String* StampedLock::toString() {
	int64_t s = this->state;
	$var($String, var$0, $($Serializable::toString()));
	return $concat(var$0, (((int64_t)(s & (uint64_t)StampedLock::ABITS)) == (int64_t)0 ? "[Unlocked]"_s : ((int64_t)(s & (uint64_t)StampedLock::WBIT)) != (int64_t)0 ? "[Write-locked]"_s : $$str({"[Read-locks:"_s, $$str(getReadLockCount(s)), "]"_s})));
}

$Lock* StampedLock::asReadLock() {
	$var($StampedLock$ReadLockView, v, nullptr);
	if (($assign(v, this->readLockView)) != nullptr) {
		return v;
	}
	return ($assignField(this, readLockView, $new($StampedLock$ReadLockView, this)));
}

$Lock* StampedLock::asWriteLock() {
	$var($StampedLock$WriteLockView, v, nullptr);
	if (($assign(v, this->writeLockView)) != nullptr) {
		return v;
	}
	return ($assignField(this, writeLockView, $new($StampedLock$WriteLockView, this)));
}

$ReadWriteLock* StampedLock::asReadWriteLock() {
	$var($StampedLock$ReadWriteLockView, v, nullptr);
	if (($assign(v, this->readWriteLockView)) != nullptr) {
		return v;
	}
	return ($assignField(this, readWriteLockView, $new($StampedLock$ReadWriteLockView, this)));
}

void StampedLock::unstampedUnlockWrite() {
	int64_t s = 0;
	if (((int64_t)((s = this->state) & (uint64_t)StampedLock::WBIT)) == (int64_t)0) {
		$throwNew($IllegalMonitorStateException);
	}
	releaseWrite(s);
}

void StampedLock::unstampedUnlockRead() {
	int64_t s = 0;
	int64_t m = 0;
	while ((m = (int64_t)((s = this->state) & (uint64_t)StampedLock::RBITS)) > (int64_t)0) {
		if (m < StampedLock::RFULL) {
			if (casState(s, s - StampedLock::RUNIT)) {
				if (m == StampedLock::RUNIT) {
					signalNext(this->head);
				}
				return;
			}
		} else if (tryDecReaderOverflow(s) != (int64_t)0) {
			return;
		}
	}
	$throwNew($IllegalMonitorStateException);
}

void StampedLock::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	this->state = StampedLock::ORIGIN;
}

int64_t StampedLock::tryIncReaderOverflow(int64_t s) {
	if (((int64_t)(s & (uint64_t)StampedLock::ABITS)) != StampedLock::RFULL) {
		$Thread::onSpinWait();
	} else if (casState(s, s | StampedLock::RBITS)) {
		++this->readerOverflow;
		return this->state = s;
	}
	return 0;
}

int64_t StampedLock::tryDecReaderOverflow(int64_t s) {
	if (((int64_t)(s & (uint64_t)StampedLock::ABITS)) != StampedLock::RFULL) {
		$Thread::onSpinWait();
	} else if (casState(s, s | StampedLock::RBITS)) {
		int32_t r = 0;
		int64_t nextState = 0;
		if ((r = this->readerOverflow) > 0) {
			this->readerOverflow = r - 1;
			nextState = s;
		} else {
			nextState = s - StampedLock::RUNIT;
		}
		return this->state = nextState;
	}
	return 0;
}

void StampedLock::signalNext($StampedLock$Node* h) {
	$init(StampedLock);
	$var($StampedLock$Node, s, nullptr);
	bool var$0 = h != nullptr && ($assign(s, h->next)) != nullptr;
	if (var$0 && $nc(s)->status > 0) {
		s->getAndUnsetStatus(StampedLock::WAITING);
		$LockSupport::unpark(s->waiter);
	}
}

void StampedLock::signalCowaiters($StampedLock$ReaderNode* node) {
	$init(StampedLock);
	if (node != nullptr) {
		{
			$var($StampedLock$ReaderNode, c, nullptr);
			for (; ($assign(c, node->cowaiters)) != nullptr;) {
				if (node->casCowaiters(c, $nc(c)->cowaiters)) {
					$LockSupport::unpark($nc(c)->waiter);
				}
			}
		}
	}
}

bool StampedLock::casTail($StampedLock$Node* c, $StampedLock$Node* v) {
	return $nc(StampedLock::U)->compareAndSetReference(this, StampedLock::TAIL, c, v);
}

void StampedLock::tryInitializeHead() {
	$var($StampedLock$Node, h, $new($StampedLock$WriterNode));
	if ($nc(StampedLock::U)->compareAndSetReference(this, StampedLock::HEAD, nullptr, h)) {
		$set(this, tail, h);
	}
}

int64_t StampedLock::acquireWrite(bool interruptible, bool timed, int64_t time) {
	int8_t spins = (int8_t)0;
	int8_t postSpins = (int8_t)0;
	bool interrupted = false;
	bool first = false;
	$var($StampedLock$WriterNode, node, nullptr);
	$var($StampedLock$Node, pred, nullptr);
	{
		int64_t s = 0;
		int64_t nextState = 0;
		for (;;) {
			bool var$0 = !first && ($assign(pred, (node == nullptr) ? ($StampedLock$Node*)nullptr : $cast($StampedLock$Node, $nc(node)->prev))) != nullptr;
			if (var$0 && !(first = (this->head == pred))) {
				if ($nc(pred)->status < 0) {
					cleanQueue();
					continue;
				} else if (pred->prev == nullptr) {
					$Thread::onSpinWait();
					continue;
				}
			}
			bool var$1 = (first || pred == nullptr) && ((int64_t)((s = this->state) & (uint64_t)StampedLock::ABITS)) == (int64_t)0;
			if (var$1 && casState(s, nextState = s | StampedLock::WBIT)) {
				$nc(StampedLock::U)->storeStoreFence();
				if (first) {
					$set($nc(node), prev, nullptr);
					$set(this, head, node);
					$set($nc(pred), next, nullptr);
					$set(node, waiter, nullptr);
					if (interrupted) {
						$($Thread::currentThread())->interrupt();
					}
				}
				return nextState;
			} else if (node == nullptr) {
				$assign(node, $new($StampedLock$WriterNode));
			} else if (pred == nullptr) {
				$var($StampedLock$Node, t, this->tail);
				$nc(node)->setPrevRelaxed(t);
				if (t == nullptr) {
					tryInitializeHead();
				} else if (!casTail(t, node)) {
					node->setPrevRelaxed(nullptr);
				} else {
					$set($nc(t), next, node);
				}
			} else if (first && spins != 0) {
				--spins;
				$Thread::onSpinWait();
			} else if (node->status == 0) {
				if (node->waiter == nullptr) {
					$set(node, waiter, $Thread::currentThread());
				}
				node->status = StampedLock::WAITING;
			} else {
				int64_t nanos = 0;
				spins = (postSpins = (int8_t)((postSpins << 1) | 1));
				if (!timed) {
					$LockSupport::park(this);
				} else if ((nanos = time - $System::nanoTime()) > (int64_t)0) {
					$LockSupport::parkNanos(this, nanos);
				} else {
					break;
				}
				node->clearStatus();
				if ((interrupted |= $Thread::interrupted()) && interruptible) {
					break;
				}
			}
		}
	}
	return cancelAcquire(node, interrupted);
}

int64_t StampedLock::acquireRead(bool interruptible, bool timed, int64_t time) {
	bool interrupted = false;
	$var($StampedLock$ReaderNode, node, nullptr);
	for (;;) {
		$var($StampedLock$ReaderNode, leader, nullptr);
		int64_t nextState = 0;
		$var($StampedLock$Node, tailPred, nullptr);
		$var($StampedLock$Node, t, this->tail);
		if ((t == nullptr || ($assign(tailPred, $nc(t)->prev)) == nullptr) && (nextState = tryAcquireRead()) != (int64_t)0) {
			return nextState;
		} else if (t == nullptr) {
			tryInitializeHead();
		} else if (tailPred == nullptr || !($instanceOf($StampedLock$ReaderNode, t))) {
			if (node == nullptr) {
				$assign(node, $new($StampedLock$ReaderNode));
			}
			if (this->tail == t) {
				$nc(node)->setPrevRelaxed(t);
				if (casTail(t, node)) {
					$set(t, next, node);
					break;
				}
				node->setPrevRelaxed(nullptr);
			}
		} else if ($equals($assign(leader, $cast($StampedLock$ReaderNode, t)), this->tail)) {
			for (bool attached = false;;) {
				if ($nc(leader)->status < 0 || $nc(leader)->prev == nullptr) {
					break;
				} else if (node == nullptr) {
					$assign(node, $new($StampedLock$ReaderNode));
				} else if (node->waiter == nullptr) {
					$set(node, waiter, $Thread::currentThread());
				} else if (!attached) {
					$var($StampedLock$ReaderNode, c, leader->cowaiters);
					node->setCowaitersRelaxed(c);
					attached = leader->casCowaiters(c, node);
					if (!attached) {
						node->setCowaitersRelaxed(nullptr);
					}
				} else {
					int64_t nanos = 0;
					if (!timed) {
						$LockSupport::park(this);
					} else if ((nanos = time - $System::nanoTime()) > (int64_t)0) {
						$LockSupport::parkNanos(this, nanos);
					}
					interrupted |= $Thread::interrupted();
					if ((interrupted && interruptible) || (timed && nanos <= (int64_t)0)) {
						return cancelCowaiter(node, leader, interrupted);
					}
				}
			}
			if (node != nullptr) {
				$set(node, waiter, nullptr);
			}
			int64_t ns = tryAcquireRead();
			signalCowaiters(leader);
			if (interrupted) {
				$($Thread::currentThread())->interrupt();
			}
			if (ns != (int64_t)0) {
				return ns;
			} else {
				$assign(node, nullptr);
			}
		}
	}
	int8_t spins = (int8_t)0;
	int8_t postSpins = (int8_t)0;
	bool first = false;
	$var($StampedLock$Node, pred, nullptr);
	for (int64_t nextState = 0;;) {
		bool var$0 = !first && ($assign(pred, $nc(node)->prev)) != nullptr;
		if (var$0 && !(first = (this->head == pred))) {
			if ($nc(pred)->status < 0) {
				cleanQueue();
				continue;
			} else if (pred->prev == nullptr) {
				$Thread::onSpinWait();
				continue;
			}
		}
		if ((first || pred == nullptr) && (nextState = tryAcquireRead()) != (int64_t)0) {
			if (first) {
				$set($nc(node), prev, nullptr);
				$set(this, head, node);
				$set($nc(pred), next, nullptr);
				$set(node, waiter, nullptr);
			}
			signalCowaiters(node);
			if (interrupted) {
				$($Thread::currentThread())->interrupt();
			}
			return nextState;
		} else if (first && spins != 0) {
			--spins;
			$Thread::onSpinWait();
		} else if (node->status == 0) {
			if (node->waiter == nullptr) {
				$set(node, waiter, $Thread::currentThread());
			}
			node->status = StampedLock::WAITING;
		} else {
			int64_t nanos = 0;
			spins = (postSpins = (int8_t)((postSpins << 1) | 1));
			if (!timed) {
				$LockSupport::park(this);
			} else if ((nanos = time - $System::nanoTime()) > (int64_t)0) {
				$LockSupport::parkNanos(this, nanos);
			} else {
				break;
			}
			node->clearStatus();
			if ((interrupted |= $Thread::interrupted()) && interruptible) {
				break;
			}
		}
	}
	return cancelAcquire(node, interrupted);
}

void StampedLock::cleanQueue() {
	for (;;) {
		{
			$var($StampedLock$Node, q, this->tail);
			$var($StampedLock$Node, s, nullptr);
			$var($StampedLock$Node, p, nullptr);
			$var($StampedLock$Node, n, nullptr);
			for (;;) {
				if (q == nullptr || ($assign(p, $nc(q)->prev)) == nullptr) {
					return;
				}
				if (s == nullptr ? this->tail != q : ($nc(s)->prev != q || $nc(s)->status < 0)) {
					break;
				}
				if ($nc(q)->status < 0) {
					if ((s == nullptr ? casTail(q, p) : $nc(s)->casPrev(q, p)) && q->prev == p) {
						$nc(p)->casNext(q, s);
						if (p->prev == nullptr) {
							signalNext(p);
						}
					}
					break;
				}
				if (($assign(n, $nc(p)->next)) != q) {
					if (n != nullptr && $nc(q)->prev == p && q->status >= 0) {
						p->casNext(n, q);
						if (p->prev == nullptr) {
							signalNext(p);
						}
					}
					break;
				}
				$assign(s, q);
				$assign(q, $nc(q)->prev);
			}
		}
	}
}

void StampedLock::unlinkCowaiter($StampedLock$ReaderNode* node, $StampedLock$ReaderNode* leader) {
	if (leader != nullptr) {
		while (leader->prev != nullptr && leader->status >= 0) {
			{
				$var($StampedLock$ReaderNode, p, leader);
				$var($StampedLock$ReaderNode, q, nullptr);
				for (;; $assign(p, q)) {
					if (($assign(q, $nc(p)->cowaiters)) == nullptr) {
						return;
					}
					if (q == node) {
						$nc(p)->casCowaiters(q, $nc(q)->cowaiters);
						break;
					}
				}
			}
		}
	}
}

int64_t StampedLock::cancelAcquire($StampedLock$Node* node, bool interrupted) {
	if (node != nullptr) {
		$set(node, waiter, nullptr);
		node->status = StampedLock::CANCELLED;
		cleanQueue();
		if ($instanceOf($StampedLock$ReaderNode, node)) {
			signalCowaiters($cast($StampedLock$ReaderNode, node));
		}
	}
	return (interrupted || $Thread::interrupted()) ? StampedLock::INTERRUPTED : (int64_t)0;
}

int64_t StampedLock::cancelCowaiter($StampedLock$ReaderNode* node, $StampedLock$ReaderNode* leader, bool interrupted) {
	if (node != nullptr) {
		$set(node, waiter, nullptr);
		node->status = StampedLock::CANCELLED;
		unlinkCowaiter(node, leader);
	}
	return (interrupted || $Thread::interrupted()) ? StampedLock::INTERRUPTED : (int64_t)0;
}

void clinit$StampedLock($Class* class$) {
	$assignStatic(StampedLock::U, $Unsafe::getUnsafe());
	StampedLock::STATE = $nc(StampedLock::U)->objectFieldOffset(StampedLock::class$, "state"_s);
	StampedLock::HEAD = $nc(StampedLock::U)->objectFieldOffset(StampedLock::class$, "head"_s);
	StampedLock::TAIL = $nc(StampedLock::U)->objectFieldOffset(StampedLock::class$, "tail"_s);
	{
		$load($LockSupport);
		$Class* ensureLoaded = $LockSupport::class$;
	}
}

StampedLock::StampedLock() {
}

$Class* StampedLock::load$($String* name, bool initialize) {
	$loadClass(StampedLock, name, initialize, &_StampedLock_ClassInfo_, clinit$StampedLock, allocate$StampedLock);
	return class$;
}

$Class* StampedLock::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java