#include <java/util/concurrent/locks/ReentrantLock.h>

#include <java/util/Collection.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantLock$FairSync.h>
#include <java/util/concurrent/locks/ReentrantLock$NonfairSync.h>
#include <java/util/concurrent/locks/ReentrantLock$Sync.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Collection = ::java::util::Collection;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;
using $AbstractQueuedSynchronizer$ConditionObject = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject;
using $Condition = ::java::util::concurrent::locks::Condition;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReentrantLock$FairSync = ::java::util::concurrent::locks::ReentrantLock$FairSync;
using $ReentrantLock$NonfairSync = ::java::util::concurrent::locks::ReentrantLock$NonfairSync;
using $ReentrantLock$Sync = ::java::util::concurrent::locks::ReentrantLock$Sync;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _ReentrantLock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantLock, serialVersionUID)},
	{"sync", "Ljava/util/concurrent/locks/ReentrantLock$Sync;", nullptr, $PRIVATE | $FINAL, $field(ReentrantLock, sync)},
	{}
};

$MethodInfo _ReentrantLock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReentrantLock::*)()>(&ReentrantLock::init$))},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ReentrantLock::*)(bool)>(&ReentrantLock::init$))},
	{"getHoldCount", "()I", nullptr, $PUBLIC},
	{"getOwner", "()Ljava/lang/Thread;", nullptr, $PROTECTED},
	{"getQueueLength", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(ReentrantLock::*)()>(&ReentrantLock::getQueueLength))},
	{"getQueuedThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PROTECTED},
	{"getWaitQueueLength", "(Ljava/util/concurrent/locks/Condition;)I", nullptr, $PUBLIC},
	{"getWaitingThreads", "(Ljava/util/concurrent/locks/Condition;)Ljava/util/Collection;", "(Ljava/util/concurrent/locks/Condition;)Ljava/util/Collection<Ljava/lang/Thread;>;", $PROTECTED},
	{"hasQueuedThread", "(Ljava/lang/Thread;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ReentrantLock::*)($Thread*)>(&ReentrantLock::hasQueuedThread))},
	{"hasQueuedThreads", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ReentrantLock::*)()>(&ReentrantLock::hasQueuedThreads))},
	{"hasWaiters", "(Ljava/util/concurrent/locks/Condition;)Z", nullptr, $PUBLIC},
	{"isFair", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(ReentrantLock::*)()>(&ReentrantLock::isFair))},
	{"isHeldByCurrentThread", "()Z", nullptr, $PUBLIC},
	{"isLocked", "()Z", nullptr, $PUBLIC},
	{"lock", "()V", nullptr, $PUBLIC},
	{"lockInterruptibly", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"newCondition", "()Ljava/util/concurrent/locks/Condition;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryLock", "()Z", nullptr, $PUBLIC},
	{"tryLock", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"unlock", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReentrantLock_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantLock$FairSync", "java.util.concurrent.locks.ReentrantLock", "FairSync", $STATIC | $FINAL},
	{"java.util.concurrent.locks.ReentrantLock$NonfairSync", "java.util.concurrent.locks.ReentrantLock", "NonfairSync", $STATIC | $FINAL},
	{"java.util.concurrent.locks.ReentrantLock$Sync", "java.util.concurrent.locks.ReentrantLock", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReentrantLock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.locks.ReentrantLock",
	"java.lang.Object",
	"java.util.concurrent.locks.Lock,java.io.Serializable",
	_ReentrantLock_FieldInfo_,
	_ReentrantLock_MethodInfo_,
	nullptr,
	nullptr,
	_ReentrantLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantLock$FairSync,java.util.concurrent.locks.ReentrantLock$NonfairSync,java.util.concurrent.locks.ReentrantLock$Sync"
};

$Object* allocate$ReentrantLock($Class* clazz) {
	return $of($alloc(ReentrantLock));
}

int32_t ReentrantLock::hashCode() {
	 return this->$Lock::hashCode();
}

bool ReentrantLock::equals(Object$* obj) {
	 return this->$Lock::equals(obj);
}

$Object* ReentrantLock::clone() {
	 return this->$Lock::clone();
}

void ReentrantLock::finalize() {
	this->$Lock::finalize();
}

void ReentrantLock::init$() {
	$set(this, sync, $new($ReentrantLock$NonfairSync));
}

void ReentrantLock::init$(bool fair) {
	$set(this, sync, fair ? static_cast<$ReentrantLock$Sync*>($new($ReentrantLock$FairSync)) : static_cast<$ReentrantLock$Sync*>($new($ReentrantLock$NonfairSync)));
}

void ReentrantLock::lock() {
	$nc(this->sync)->lock();
}

void ReentrantLock::lockInterruptibly() {
	$nc(this->sync)->lockInterruptibly();
}

bool ReentrantLock::tryLock() {
	return $nc(this->sync)->tryLock();
}

bool ReentrantLock::tryLock(int64_t timeout, $TimeUnit* unit) {
	return $nc(this->sync)->tryLockNanos($nc(unit)->toNanos(timeout));
}

void ReentrantLock::unlock() {
	$nc(this->sync)->release(1);
}

$Condition* ReentrantLock::newCondition() {
	return $nc(this->sync)->newCondition();
}

int32_t ReentrantLock::getHoldCount() {
	return $nc(this->sync)->getHoldCount();
}

bool ReentrantLock::isHeldByCurrentThread() {
	return $nc(this->sync)->isHeldExclusively();
}

bool ReentrantLock::isLocked() {
	return $nc(this->sync)->isLocked();
}

bool ReentrantLock::isFair() {
	return $instanceOf($ReentrantLock$FairSync, this->sync);
}

$Thread* ReentrantLock::getOwner() {
	return $nc(this->sync)->getOwner();
}

bool ReentrantLock::hasQueuedThreads() {
	return $nc(this->sync)->hasQueuedThreads();
}

bool ReentrantLock::hasQueuedThread($Thread* thread) {
	return $nc(this->sync)->isQueued(thread);
}

int32_t ReentrantLock::getQueueLength() {
	return $nc(this->sync)->getQueueLength();
}

$Collection* ReentrantLock::getQueuedThreads() {
	return $nc(this->sync)->getQueuedThreads();
}

bool ReentrantLock::hasWaiters($Condition* condition) {
	if (condition == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($AbstractQueuedSynchronizer$ConditionObject, condition))) {
		$throwNew($IllegalArgumentException, "not owner"_s);
	}
	return $nc(this->sync)->hasWaiters($cast($AbstractQueuedSynchronizer$ConditionObject, condition));
}

int32_t ReentrantLock::getWaitQueueLength($Condition* condition) {
	if (condition == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($AbstractQueuedSynchronizer$ConditionObject, condition))) {
		$throwNew($IllegalArgumentException, "not owner"_s);
	}
	return $nc(this->sync)->getWaitQueueLength($cast($AbstractQueuedSynchronizer$ConditionObject, condition));
}

$Collection* ReentrantLock::getWaitingThreads($Condition* condition) {
	if (condition == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($AbstractQueuedSynchronizer$ConditionObject, condition))) {
		$throwNew($IllegalArgumentException, "not owner"_s);
	}
	return $nc(this->sync)->getWaitingThreads($cast($AbstractQueuedSynchronizer$ConditionObject, condition));
}

$String* ReentrantLock::toString() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, o, $nc(this->sync)->getOwner());
	$var($String, var$0, $($Lock::toString()));
	return $concat(var$0, ((o == nullptr) ? "[Unlocked]"_s : $$str({"[Locked by thread "_s, $($nc(o)->getName()), "]"_s})));
}

ReentrantLock::ReentrantLock() {
}

$Class* ReentrantLock::load$($String* name, bool initialize) {
	$loadClass(ReentrantLock, name, initialize, &_ReentrantLock_ClassInfo_, allocate$ReentrantLock);
	return class$;
}

$Class* ReentrantLock::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java