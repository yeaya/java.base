#include <java/util/concurrent/Semaphore$Sync.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Semaphore.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Semaphore = ::java::util::concurrent::Semaphore;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Semaphore$Sync_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Semaphore$Sync, serialVersionUID)},
	{}
};

$MethodInfo _Semaphore$Sync_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(Semaphore$Sync::*)(int32_t)>(&Semaphore$Sync::init$))},
	{"drainPermits", "()I", nullptr, $FINAL, $method(static_cast<int32_t(Semaphore$Sync::*)()>(&Semaphore$Sync::drainPermits))},
	{"getPermits", "()I", nullptr, $FINAL, $method(static_cast<int32_t(Semaphore$Sync::*)()>(&Semaphore$Sync::getPermits))},
	{"nonfairTryAcquireShared", "(I)I", nullptr, $FINAL, $method(static_cast<int32_t(Semaphore$Sync::*)(int32_t)>(&Semaphore$Sync::nonfairTryAcquireShared))},
	{"reducePermits", "(I)V", nullptr, $FINAL, $method(static_cast<void(Semaphore$Sync::*)(int32_t)>(&Semaphore$Sync::reducePermits))},
	{"tryReleaseShared", "(I)Z", nullptr, $PROTECTED | $FINAL},
	{}
};

$InnerClassInfo _Semaphore$Sync_InnerClassesInfo_[] = {
	{"java.util.concurrent.Semaphore$Sync", "java.util.concurrent.Semaphore", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Semaphore$Sync_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.concurrent.Semaphore$Sync",
	"java.util.concurrent.locks.AbstractQueuedSynchronizer",
	nullptr,
	_Semaphore$Sync_FieldInfo_,
	_Semaphore$Sync_MethodInfo_,
	nullptr,
	nullptr,
	_Semaphore$Sync_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Semaphore"
};

$Object* allocate$Semaphore$Sync($Class* clazz) {
	return $of($alloc(Semaphore$Sync));
}

void Semaphore$Sync::init$(int32_t permits) {
	$AbstractQueuedSynchronizer::init$();
	setState(permits);
}

int32_t Semaphore$Sync::getPermits() {
	return getState();
}

int32_t Semaphore$Sync::nonfairTryAcquireShared(int32_t acquires) {
	for (;;) {
		int32_t available = getState();
		int32_t remaining = available - acquires;
		if (remaining < 0 || compareAndSetState(available, remaining)) {
			return remaining;
		}
	}
}

bool Semaphore$Sync::tryReleaseShared(int32_t releases) {
	for (;;) {
		int32_t current = getState();
		int32_t next = current + releases;
		if (next < current) {
			$throwNew($Error, "Maximum permit count exceeded"_s);
		}
		if (compareAndSetState(current, next)) {
			return true;
		}
	}
}

void Semaphore$Sync::reducePermits(int32_t reductions) {
	for (;;) {
		int32_t current = getState();
		int32_t next = current - reductions;
		if (next > current) {
			$throwNew($Error, "Permit count underflow"_s);
		}
		if (compareAndSetState(current, next)) {
			return;
		}
	}
}

int32_t Semaphore$Sync::drainPermits() {
	for (;;) {
		int32_t current = getState();
		if (current == 0 || compareAndSetState(current, 0)) {
			return current;
		}
	}
}

Semaphore$Sync::Semaphore$Sync() {
}

$Class* Semaphore$Sync::load$($String* name, bool initialize) {
	$loadClass(Semaphore$Sync, name, initialize, &_Semaphore$Sync_ClassInfo_, allocate$Semaphore$Sync);
	return class$;
}

$Class* Semaphore$Sync::class$ = nullptr;

		} // concurrent
	} // util
} // java