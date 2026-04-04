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

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

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
	$useLocalObjectStack();
	$var($Thread, o, $nc(this->sync)->getOwner());
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Lock::toString()));
	var$0->append((o == nullptr) ? "[Unlocked]"_s : $$str({"[Locked by thread "_s, $(o->getName()), "]"_s}));
	return $str(var$0);
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantReadWriteLock$WriteLock, serialVersionUID)},
		{"sync", "Ljava/util/concurrent/locks/ReentrantReadWriteLock$Sync;", nullptr, $PRIVATE | $FINAL, $field(ReentrantReadWriteLock$WriteLock, sync)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/concurrent/locks/ReentrantReadWriteLock;)V", nullptr, $PROTECTED, $method(ReentrantReadWriteLock$WriteLock, init$, void, $ReentrantReadWriteLock*)},
		{"getHoldCount", "()I", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$WriteLock, getHoldCount, int32_t)},
		{"isHeldByCurrentThread", "()Z", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$WriteLock, isHeldByCurrentThread, bool)},
		{"lock", "()V", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$WriteLock, lock, void)},
		{"lockInterruptibly", "()V", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$WriteLock, lockInterruptibly, void), "java.lang.InterruptedException"},
		{"newCondition", "()Ljava/util/concurrent/locks/Condition;", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$WriteLock, newCondition, $Condition*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$WriteLock, toString, $String*)},
		{"tryLock", "()Z", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$WriteLock, tryLock, bool)},
		{"tryLock", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$WriteLock, tryLock, bool, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
		{"unlock", "()V", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$WriteLock, unlock, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock", "java.util.concurrent.locks.ReentrantReadWriteLock", "WriteLock", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.concurrent.locks.ReentrantReadWriteLock$WriteLock",
		"java.lang.Object",
		"java.util.concurrent.locks.Lock,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.locks.ReentrantReadWriteLock"
	};
	$loadClass(ReentrantReadWriteLock$WriteLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReentrantReadWriteLock$WriteLock));
	});
	return class$;
}

$Class* ReentrantReadWriteLock$WriteLock::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java