#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter.h>

#include <java/lang/ThreadLocal.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync$HoldCounter.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $ReentrantReadWriteLock$Sync$HoldCounter = ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync$HoldCounter;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$MethodInfo _ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter, init$, void)},
	{"initialValue", "()Ljava/util/concurrent/locks/ReentrantReadWriteLock$Sync$HoldCounter;", nullptr, $PUBLIC, $virtualMethod(ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter, initialValue, $Object*)},
	{}
};

$InnerClassInfo _ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "java.util.concurrent.locks.ReentrantReadWriteLock", "Sync", $STATIC | $ABSTRACT},
	{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter", "java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "ThreadLocalHoldCounter", $STATIC | $FINAL},
	{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync$HoldCounter", "java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "HoldCounter", $STATIC | $FINAL},
	{}
};

$ClassInfo _ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/util/concurrent/locks/ReentrantReadWriteLock$Sync$HoldCounter;>;",
	nullptr,
	_ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantReadWriteLock"
};

$Object* allocate$ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter($Class* clazz) {
	return $of($alloc(ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter));
}

void ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter::init$() {
	$ThreadLocal::init$();
}

$Object* ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter::initialValue() {
	return $of($new($ReentrantReadWriteLock$Sync$HoldCounter));
}

ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter::ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter() {
}

$Class* ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter::load$($String* name, bool initialize) {
	$loadClass(ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter, name, initialize, &_ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter_ClassInfo_, allocate$ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter);
	return class$;
}

$Class* ReentrantReadWriteLock$Sync$ThreadLocalHoldCounter::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java