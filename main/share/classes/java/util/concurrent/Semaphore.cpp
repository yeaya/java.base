#include <java/util/concurrent/Semaphore.h>

#include <java/io/Serializable.h>
#include <java/util/Collection.h>
#include <java/util/concurrent/Semaphore$FairSync.h>
#include <java/util/concurrent/Semaphore$NonfairSync.h>
#include <java/util/concurrent/Semaphore$Sync.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Semaphore$FairSync = ::java::util::concurrent::Semaphore$FairSync;
using $Semaphore$NonfairSync = ::java::util::concurrent::Semaphore$NonfairSync;
using $Semaphore$Sync = ::java::util::concurrent::Semaphore$Sync;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Semaphore_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Semaphore, serialVersionUID)},
	{"sync", "Ljava/util/concurrent/Semaphore$Sync;", nullptr, $PRIVATE | $FINAL, $field(Semaphore, sync)},
	{}
};

$MethodInfo _Semaphore_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(Semaphore::*)(int32_t)>(&Semaphore::init$))},
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(Semaphore::*)(int32_t,bool)>(&Semaphore::init$))},
	{"acquire", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"acquire", "(I)V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"acquireUninterruptibly", "()V", nullptr, $PUBLIC},
	{"acquireUninterruptibly", "(I)V", nullptr, $PUBLIC},
	{"availablePermits", "()I", nullptr, $PUBLIC},
	{"drainPermits", "()I", nullptr, $PUBLIC},
	{"getQueueLength", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Semaphore::*)()>(&Semaphore::getQueueLength))},
	{"getQueuedThreads", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Thread;>;", $PROTECTED},
	{"hasQueuedThreads", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(Semaphore::*)()>(&Semaphore::hasQueuedThreads))},
	{"isFair", "()Z", nullptr, $PUBLIC},
	{"reducePermits", "(I)V", nullptr, $PROTECTED},
	{"release", "()V", nullptr, $PUBLIC},
	{"release", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAcquire", "()Z", nullptr, $PUBLIC},
	{"tryAcquire", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"tryAcquire", "(I)Z", nullptr, $PUBLIC},
	{"tryAcquire", "(IJLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _Semaphore_InnerClassesInfo_[] = {
	{"java.util.concurrent.Semaphore$FairSync", "java.util.concurrent.Semaphore", "FairSync", $STATIC | $FINAL},
	{"java.util.concurrent.Semaphore$NonfairSync", "java.util.concurrent.Semaphore", "NonfairSync", $STATIC | $FINAL},
	{"java.util.concurrent.Semaphore$Sync", "java.util.concurrent.Semaphore", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Semaphore_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.Semaphore",
	"java.lang.Object",
	"java.io.Serializable",
	_Semaphore_FieldInfo_,
	_Semaphore_MethodInfo_,
	nullptr,
	nullptr,
	_Semaphore_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.Semaphore$FairSync,java.util.concurrent.Semaphore$NonfairSync,java.util.concurrent.Semaphore$Sync"
};

$Object* allocate$Semaphore($Class* clazz) {
	return $of($alloc(Semaphore));
}

void Semaphore::init$(int32_t permits) {
	$set(this, sync, $new($Semaphore$NonfairSync, permits));
}

void Semaphore::init$(int32_t permits, bool fair) {
	$set(this, sync, fair ? static_cast<$Semaphore$Sync*>($new($Semaphore$FairSync, permits)) : static_cast<$Semaphore$Sync*>($new($Semaphore$NonfairSync, permits)));
}

void Semaphore::acquire() {
	$nc(this->sync)->acquireSharedInterruptibly(1);
}

void Semaphore::acquireUninterruptibly() {
	$nc(this->sync)->acquireShared(1);
}

bool Semaphore::tryAcquire() {
	return $nc(this->sync)->nonfairTryAcquireShared(1) >= 0;
}

bool Semaphore::tryAcquire(int64_t timeout, $TimeUnit* unit) {
	return $nc(this->sync)->tryAcquireSharedNanos(1, $nc(unit)->toNanos(timeout));
}

void Semaphore::release() {
	$nc(this->sync)->releaseShared(1);
}

void Semaphore::acquire(int32_t permits) {
	if (permits < 0) {
		$throwNew($IllegalArgumentException);
	}
	$nc(this->sync)->acquireSharedInterruptibly(permits);
}

void Semaphore::acquireUninterruptibly(int32_t permits) {
	if (permits < 0) {
		$throwNew($IllegalArgumentException);
	}
	$nc(this->sync)->acquireShared(permits);
}

bool Semaphore::tryAcquire(int32_t permits) {
	if (permits < 0) {
		$throwNew($IllegalArgumentException);
	}
	return $nc(this->sync)->nonfairTryAcquireShared(permits) >= 0;
}

bool Semaphore::tryAcquire(int32_t permits, int64_t timeout, $TimeUnit* unit) {
	if (permits < 0) {
		$throwNew($IllegalArgumentException);
	}
	return $nc(this->sync)->tryAcquireSharedNanos(permits, $nc(unit)->toNanos(timeout));
}

void Semaphore::release(int32_t permits) {
	if (permits < 0) {
		$throwNew($IllegalArgumentException);
	}
	$nc(this->sync)->releaseShared(permits);
}

int32_t Semaphore::availablePermits() {
	return $nc(this->sync)->getPermits();
}

int32_t Semaphore::drainPermits() {
	return $nc(this->sync)->drainPermits();
}

void Semaphore::reducePermits(int32_t reduction) {
	if (reduction < 0) {
		$throwNew($IllegalArgumentException);
	}
	$nc(this->sync)->reducePermits(reduction);
}

bool Semaphore::isFair() {
	return $instanceOf($Semaphore$FairSync, this->sync);
}

bool Semaphore::hasQueuedThreads() {
	return $nc(this->sync)->hasQueuedThreads();
}

int32_t Semaphore::getQueueLength() {
	return $nc(this->sync)->getQueueLength();
}

$Collection* Semaphore::getQueuedThreads() {
	return $nc(this->sync)->getQueuedThreads();
}

$String* Semaphore::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($Serializable::toString()), "[Permits = "_s}));
	$var($String, var$0, $$concat(var$1, $$str($nc(this->sync)->getPermits())));
	return $concat(var$0, "]");
}

Semaphore::Semaphore() {
}

$Class* Semaphore::load$($String* name, bool initialize) {
	$loadClass(Semaphore, name, initialize, &_Semaphore_ClassInfo_, allocate$Semaphore);
	return class$;
}

$Class* Semaphore::class$ = nullptr;

		} // concurrent
	} // util
} // java