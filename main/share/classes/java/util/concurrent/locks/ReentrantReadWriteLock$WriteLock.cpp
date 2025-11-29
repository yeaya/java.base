#include <java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock.h>

#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Condition = ::java::util::concurrent::locks::Condition;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $ReentrantReadWriteLock$Sync = ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _ReentrantReadWriteLock$WriteLock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantReadWriteLock$WriteLock, serialVersionUID)},
	{"sync", "Ljava/util/concurrent/locks/ReentrantReadWriteLock$Sync;", nullptr, $PRIVATE | $FINAL, $field(ReentrantReadWriteLock$WriteLock, sync)},
	{}
};

$MethodInfo _ReentrantReadWriteLock$WriteLock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/locks/ReentrantReadWriteLock;)V", nullptr, $PROTECTED, $method(static_cast<void(ReentrantReadWriteLock$WriteLock::*)($ReentrantReadWriteLock*)>(&ReentrantReadWriteLock$WriteLock::init$))},
	{"getHoldCount", "()I", nullptr, $PUBLIC},
	{"isHeldByCurrentThread", "()Z", nullptr, $PUBLIC},
	{"lock", "()V", nullptr, $PUBLIC},
	{"lockInterruptibly", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"newCondition", "()Ljava/util/concurrent/locks/Condition;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryLock", "()Z", nullptr, $PUBLIC},
	{"tryLock", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"unlock", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReentrantReadWriteLock$WriteLock_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock", "java.util.concurrent.locks.ReentrantReadWriteLock", "WriteLock", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ReentrantReadWriteLock$WriteLock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock",
	"java.lang.Object",
	"java.util.concurrent.locks.Lock,java.io.Serializable",
	_ReentrantReadWriteLock$WriteLock_FieldInfo_,
	_ReentrantReadWriteLock$WriteLock_MethodInfo_,
	nullptr,
	nullptr,
	_ReentrantReadWriteLock$WriteLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantReadWriteLock"
};

$Object* allocate$ReentrantReadWriteLock$WriteLock($Class* clazz) {
	return $of($alloc(ReentrantReadWriteLock$WriteLock));
}

int32_t ReentrantReadWriteLock$WriteLock::hashCode() {
	 return this->$Lock::hashCode();
}

bool ReentrantReadWriteLock$WriteLock::equals(Object$* obj) {
	 return this->$Lock::equals(obj);
}

$Object* ReentrantReadWriteLock$WriteLock::clone() {
	 return this->$Lock::clone();
}

void ReentrantReadWriteLock$WriteLock::finalize() {
	this->$Lock::finalize();
}

void ReentrantReadWriteLock$WriteLock::init$($ReentrantReadWriteLock* lock) {
	$set(this, sync, $nc(lock)->sync);
}

void ReentrantReadWriteLock$WriteLock::lock() {
	$nc(this->sync)->acquire(1);
}

void ReentrantReadWriteLock$WriteLock::lockInterruptibly() {
	$nc(this->sync)->acquireInterruptibly(1);
}

bool ReentrantReadWriteLock$WriteLock::tryLock() {
	return $nc(this->sync)->tryWriteLock();
}

bool ReentrantReadWriteLock$WriteLock::tryLock(int64_t timeout, $TimeUnit* unit) {
	return $nc(this->sync)->tryAcquireNanos(1, $nc(unit)->toNanos(timeout));
}

void ReentrantReadWriteLock$WriteLock::unlock() {
	$nc(this->sync)->release(1);
}

$Condition* ReentrantReadWriteLock$WriteLock::newCondition() {
	return $nc(this->sync)->newCondition();
}

$String* ReentrantReadWriteLock$WriteLock::toString() {
	$useLocalCurrentObjectStackCache();
	$var($Thread, o, $nc(this->sync)->getOwner());
	$var($String, var$0, $($Lock::toString()));
	return $concat(var$0, ((o == nullptr) ? "[Unlocked]"_s : $$str({"[Locked by thread "_s, $($nc(o)->getName()), "]"_s})));
}

bool ReentrantReadWriteLock$WriteLock::isHeldByCurrentThread() {
	return $nc(this->sync)->isHeldExclusively();
}

int32_t ReentrantReadWriteLock$WriteLock::getHoldCount() {
	return $nc(this->sync)->getWriteHoldCount();
}

ReentrantReadWriteLock$WriteLock::ReentrantReadWriteLock$WriteLock() {
}

$Class* ReentrantReadWriteLock$WriteLock::load$($String* name, bool initialize) {
	$loadClass(ReentrantReadWriteLock$WriteLock, name, initialize, &_ReentrantReadWriteLock$WriteLock_ClassInfo_, allocate$ReentrantReadWriteLock$WriteLock);
	return class$;
}

$Class* ReentrantReadWriteLock$WriteLock::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java