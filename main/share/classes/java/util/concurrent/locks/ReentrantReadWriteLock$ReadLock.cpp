#include <java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Condition = ::java::util::concurrent::locks::Condition;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $ReentrantReadWriteLock$Sync = ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _ReentrantReadWriteLock$ReadLock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantReadWriteLock$ReadLock, serialVersionUID)},
	{"sync", "Ljava/util/concurrent/locks/ReentrantReadWriteLock$Sync;", nullptr, $PRIVATE | $FINAL, $field(ReentrantReadWriteLock$ReadLock, sync)},
	{}
};

$MethodInfo _ReentrantReadWriteLock$ReadLock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/locks/ReentrantReadWriteLock;)V", nullptr, $PROTECTED, $method(static_cast<void(ReentrantReadWriteLock$ReadLock::*)($ReentrantReadWriteLock*)>(&ReentrantReadWriteLock$ReadLock::init$))},
	{"lock", "()V", nullptr, $PUBLIC},
	{"lockInterruptibly", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"newCondition", "()Ljava/util/concurrent/locks/Condition;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryLock", "()Z", nullptr, $PUBLIC},
	{"tryLock", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"unlock", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReentrantReadWriteLock$ReadLock_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantReadWriteLock$ReadLock", "java.util.concurrent.locks.ReentrantReadWriteLock", "ReadLock", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ReentrantReadWriteLock$ReadLock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.locks.ReentrantReadWriteLock$ReadLock",
	"java.lang.Object",
	"java.util.concurrent.locks.Lock,java.io.Serializable",
	_ReentrantReadWriteLock$ReadLock_FieldInfo_,
	_ReentrantReadWriteLock$ReadLock_MethodInfo_,
	nullptr,
	nullptr,
	_ReentrantReadWriteLock$ReadLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantReadWriteLock"
};

$Object* allocate$ReentrantReadWriteLock$ReadLock($Class* clazz) {
	return $of($alloc(ReentrantReadWriteLock$ReadLock));
}

int32_t ReentrantReadWriteLock$ReadLock::hashCode() {
	 return this->$Lock::hashCode();
}

bool ReentrantReadWriteLock$ReadLock::equals(Object$* obj) {
	 return this->$Lock::equals(obj);
}

$Object* ReentrantReadWriteLock$ReadLock::clone() {
	 return this->$Lock::clone();
}

void ReentrantReadWriteLock$ReadLock::finalize() {
	this->$Lock::finalize();
}

void ReentrantReadWriteLock$ReadLock::init$($ReentrantReadWriteLock* lock) {
	$set(this, sync, $nc(lock)->sync);
}

void ReentrantReadWriteLock$ReadLock::lock() {
	$nc(this->sync)->acquireShared(1);
}

void ReentrantReadWriteLock$ReadLock::lockInterruptibly() {
	$nc(this->sync)->acquireSharedInterruptibly(1);
}

bool ReentrantReadWriteLock$ReadLock::tryLock() {
	return $nc(this->sync)->tryReadLock();
}

bool ReentrantReadWriteLock$ReadLock::tryLock(int64_t timeout, $TimeUnit* unit) {
	return $nc(this->sync)->tryAcquireSharedNanos(1, $nc(unit)->toNanos(timeout));
}

void ReentrantReadWriteLock$ReadLock::unlock() {
	$nc(this->sync)->releaseShared(1);
}

$Condition* ReentrantReadWriteLock$ReadLock::newCondition() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* ReentrantReadWriteLock$ReadLock::toString() {
	$useLocalCurrentObjectStackCache();
	int32_t r = $nc(this->sync)->getReadLockCount();
	return $str({$($Lock::toString()), "[Read locks = "_s, $$str(r), "]"_s});
}

ReentrantReadWriteLock$ReadLock::ReentrantReadWriteLock$ReadLock() {
}

$Class* ReentrantReadWriteLock$ReadLock::load$($String* name, bool initialize) {
	$loadClass(ReentrantReadWriteLock$ReadLock, name, initialize, &_ReentrantReadWriteLock$ReadLock_ClassInfo_, allocate$ReentrantReadWriteLock$ReadLock);
	return class$;
}

$Class* ReentrantReadWriteLock$ReadLock::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java