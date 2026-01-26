#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>

#include <java/util/Collection.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$FairSync.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$NonfairSync.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Collection = ::java::util::Collection;
using $AbstractQueuedSynchronizer$ConditionObject = ::java::util::concurrent::locks::AbstractQueuedSynchronizer$ConditionObject;
using $Condition = ::java::util::concurrent::locks::Condition;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $ReentrantReadWriteLock$FairSync = ::java::util::concurrent::locks::ReentrantReadWriteLock$FairSync;
using $ReentrantReadWriteLock$NonfairSync = ::java::util::concurrent::locks::ReentrantReadWriteLock$NonfairSync;
using $ReentrantReadWriteLock$ReadLock = ::java::util::concurrent::locks::ReentrantReadWriteLock$ReadLock;
using $ReentrantReadWriteLock$Sync = ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync;
using $ReentrantReadWriteLock$WriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock$WriteLock;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _ReentrantReadWriteLock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantReadWriteLock, serialVersionUID)},
	{"readerLock", "Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;", nullptr, $PRIVATE | $FINAL, $field(ReentrantReadWriteLock, readerLock)},
	{"writerLock", "Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;", nullptr, $PRIVATE | $FINAL, $field(ReentrantReadWriteLock, writerLock)},
	{"sync", "Ljava/util/concurrent/locks/ReentrantReadWriteLock$Sync;", nullptr, $FINAL, $field(ReentrantReadWriteLock, sync)},
	{}
};

$MethodInfo _ReentrantReadWriteLock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ReentrantReadWriteLock, init$, void)},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(ReentrantReadWriteLock, init$, void, bool)},
	{"getOwner", "()Ljava/lang/Thread;", nullptr, $PROTECTED, $virtualMethod(ReentrantReadWriteLock, getOwner, $Thread*)},
	{"getQueueLength", "()I", nullptr, $PUBLIC | $FINAL, $method(ReentrantReadWriteLock, getQueueLength, int32_t)},
	{"getQueuedReaderThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PROTECTED, $virtualMethod(ReentrantReadWriteLock, getQueuedReaderThreads, $Collection*)},
	{"getQueuedThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PROTECTED, $virtualMethod(ReentrantReadWriteLock, getQueuedThreads, $Collection*)},
	{"getQueuedWriterThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PROTECTED, $virtualMethod(ReentrantReadWriteLock, getQueuedWriterThreads, $Collection*)},
	{"getReadHoldCount", "()I", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock, getReadHoldCount, int32_t)},
	{"getReadLockCount", "()I", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock, getReadLockCount, int32_t)},
	{"getWaitQueueLength", "(Ljava/util/concurrent/locks/Condition;)I", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock, getWaitQueueLength, int32_t, $Condition*)},
	{"getWaitingThreads", "(Ljava/util/concurrent/locks/Condition;)Ljava/util/Collection;", "(Ljava/util/concurrent/locks/Condition;)Ljava/util/Collection<Ljava/lang/Thread;>;", $PROTECTED, $virtualMethod(ReentrantReadWriteLock, getWaitingThreads, $Collection*, $Condition*)},
	{"getWriteHoldCount", "()I", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock, getWriteHoldCount, int32_t)},
	{"hasQueuedThread", "(Ljava/lang/Thread;)Z", nullptr, $PUBLIC | $FINAL, $method(ReentrantReadWriteLock, hasQueuedThread, bool, $Thread*)},
	{"hasQueuedThreads", "()Z", nullptr, $PUBLIC | $FINAL, $method(ReentrantReadWriteLock, hasQueuedThreads, bool)},
	{"hasWaiters", "(Ljava/util/concurrent/locks/Condition;)Z", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock, hasWaiters, bool, $Condition*)},
	{"isFair", "()Z", nullptr, $PUBLIC | $FINAL, $method(ReentrantReadWriteLock, isFair, bool)},
	{"isWriteLocked", "()Z", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock, isWriteLocked, bool)},
	{"isWriteLockedByCurrentThread", "()Z", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock, isWriteLockedByCurrentThread, bool)},
	{"readLock", "()Ljava/util/concurrent/locks/ReentrantReadWriteLock$ReadLock;", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock, readLock, $Lock*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock, toString, $String*)},
	{"writeLock", "()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock, writeLock, $Lock*)},
	{}
};

$InnerClassInfo _ReentrantReadWriteLock_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock", "java.util.concurrent.locks.ReentrantReadWriteLock", "WriteLock", $PUBLIC | $STATIC},
	{"java.util.concurrent.locks.ReentrantReadWriteLock$ReadLock", "java.util.concurrent.locks.ReentrantReadWriteLock", "ReadLock", $PUBLIC | $STATIC},
	{"java.util.concurrent.locks.ReentrantReadWriteLock$FairSync", "java.util.concurrent.locks.ReentrantReadWriteLock", "FairSync", $STATIC | $FINAL},
	{"java.util.concurrent.locks.ReentrantReadWriteLock$NonfairSync", "java.util.concurrent.locks.ReentrantReadWriteLock", "NonfairSync", $STATIC | $FINAL},
	{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "java.util.concurrent.locks.ReentrantReadWriteLock", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReentrantReadWriteLock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.locks.ReentrantReadWriteLock",
	"java.lang.Object",
	"java.util.concurrent.locks.ReadWriteLock,java.io.Serializable",
	_ReentrantReadWriteLock_FieldInfo_,
	_ReentrantReadWriteLock_MethodInfo_,
	nullptr,
	nullptr,
	_ReentrantReadWriteLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock,java.util.concurrent.locks.ReentrantReadWriteLock$ReadLock,java.util.concurrent.locks.ReentrantReadWriteLock$FairSync,java.util.concurrent.locks.ReentrantReadWriteLock$NonfairSync,java.util.concurrent.locks.ReentrantReadWriteLock$Sync,java.util.concurrent.locks.ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter,java.util.concurrent.locks.ReentrantReadWriteLock$Sync$HoldCounter"
};

$Object* allocate$ReentrantReadWriteLock($Class* clazz) {
	return $of($alloc(ReentrantReadWriteLock));
}

int32_t ReentrantReadWriteLock::hashCode() {
	 return this->$ReadWriteLock::hashCode();
}

bool ReentrantReadWriteLock::equals(Object$* obj) {
	 return this->$ReadWriteLock::equals(obj);
}

$Object* ReentrantReadWriteLock::clone() {
	 return this->$ReadWriteLock::clone();
}

void ReentrantReadWriteLock::finalize() {
	this->$ReadWriteLock::finalize();
}

void ReentrantReadWriteLock::init$() {
	ReentrantReadWriteLock::init$(false);
}

void ReentrantReadWriteLock::init$(bool fair) {
	$set(this, sync, fair ? static_cast<$ReentrantReadWriteLock$Sync*>($new($ReentrantReadWriteLock$FairSync)) : static_cast<$ReentrantReadWriteLock$Sync*>($new($ReentrantReadWriteLock$NonfairSync)));
	$set(this, readerLock, $new($ReentrantReadWriteLock$ReadLock, this));
	$set(this, writerLock, $new($ReentrantReadWriteLock$WriteLock, this));
}

$Lock* ReentrantReadWriteLock::writeLock() {
	return this->writerLock;
}

$Lock* ReentrantReadWriteLock::readLock() {
	return this->readerLock;
}

bool ReentrantReadWriteLock::isFair() {
	return $instanceOf($ReentrantReadWriteLock$FairSync, this->sync);
}

$Thread* ReentrantReadWriteLock::getOwner() {
	return $nc(this->sync)->getOwner();
}

int32_t ReentrantReadWriteLock::getReadLockCount() {
	return $nc(this->sync)->getReadLockCount();
}

bool ReentrantReadWriteLock::isWriteLocked() {
	return $nc(this->sync)->isWriteLocked();
}

bool ReentrantReadWriteLock::isWriteLockedByCurrentThread() {
	return $nc(this->sync)->isHeldExclusively();
}

int32_t ReentrantReadWriteLock::getWriteHoldCount() {
	return $nc(this->sync)->getWriteHoldCount();
}

int32_t ReentrantReadWriteLock::getReadHoldCount() {
	return $nc(this->sync)->getReadHoldCount();
}

$Collection* ReentrantReadWriteLock::getQueuedWriterThreads() {
	return $nc(this->sync)->getExclusiveQueuedThreads();
}

$Collection* ReentrantReadWriteLock::getQueuedReaderThreads() {
	return $nc(this->sync)->getSharedQueuedThreads();
}

bool ReentrantReadWriteLock::hasQueuedThreads() {
	return $nc(this->sync)->hasQueuedThreads();
}

bool ReentrantReadWriteLock::hasQueuedThread($Thread* thread) {
	return $nc(this->sync)->isQueued(thread);
}

int32_t ReentrantReadWriteLock::getQueueLength() {
	return $nc(this->sync)->getQueueLength();
}

$Collection* ReentrantReadWriteLock::getQueuedThreads() {
	return $nc(this->sync)->getQueuedThreads();
}

bool ReentrantReadWriteLock::hasWaiters($Condition* condition) {
	if (condition == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($AbstractQueuedSynchronizer$ConditionObject, condition))) {
		$throwNew($IllegalArgumentException, "not owner"_s);
	}
	return $nc(this->sync)->hasWaiters($cast($AbstractQueuedSynchronizer$ConditionObject, condition));
}

int32_t ReentrantReadWriteLock::getWaitQueueLength($Condition* condition) {
	if (condition == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($AbstractQueuedSynchronizer$ConditionObject, condition))) {
		$throwNew($IllegalArgumentException, "not owner"_s);
	}
	return $nc(this->sync)->getWaitQueueLength($cast($AbstractQueuedSynchronizer$ConditionObject, condition));
}

$Collection* ReentrantReadWriteLock::getWaitingThreads($Condition* condition) {
	if (condition == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($AbstractQueuedSynchronizer$ConditionObject, condition))) {
		$throwNew($IllegalArgumentException, "not owner"_s);
	}
	return $nc(this->sync)->getWaitingThreads($cast($AbstractQueuedSynchronizer$ConditionObject, condition));
}

$String* ReentrantReadWriteLock::toString() {
	$useLocalCurrentObjectStackCache();
	int32_t c = $nc(this->sync)->getCount();
	int32_t w = $ReentrantReadWriteLock$Sync::exclusiveCount(c);
	int32_t r = $ReentrantReadWriteLock$Sync::sharedCount(c);
	return $str({$($ReadWriteLock::toString()), "[Write locks = "_s, $$str(w), ", Read locks = "_s, $$str(r), "]"_s});
}

ReentrantReadWriteLock::ReentrantReadWriteLock() {
}

$Class* ReentrantReadWriteLock::load$($String* name, bool initialize) {
	$loadClass(ReentrantReadWriteLock, name, initialize, &_ReentrantReadWriteLock_ClassInfo_, allocate$ReentrantReadWriteLock);
	return class$;
}

$Class* ReentrantReadWriteLock::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java