#include <java/util/concurrent/locks/ReentrantReadWriteLock$FairSync.h>

#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantReadWriteLock$Sync = ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _ReentrantReadWriteLock$FairSync_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantReadWriteLock$FairSync, serialVersionUID)},
	{}
};

$MethodInfo _ReentrantReadWriteLock$FairSync_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReentrantReadWriteLock$FairSync::*)()>(&ReentrantReadWriteLock$FairSync::init$))},
	{"readerShouldBlock", "()Z", nullptr, $FINAL},
	{"writerShouldBlock", "()Z", nullptr, $FINAL},
	{}
};

$InnerClassInfo _ReentrantReadWriteLock$FairSync_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantReadWriteLock$FairSync", "java.util.concurrent.locks.ReentrantReadWriteLock", "FairSync", $STATIC | $FINAL},
	{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "java.util.concurrent.locks.ReentrantReadWriteLock", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReentrantReadWriteLock$FairSync_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.ReentrantReadWriteLock$FairSync",
	"java.util.concurrent.locks.ReentrantReadWriteLock$Sync",
	nullptr,
	_ReentrantReadWriteLock$FairSync_FieldInfo_,
	_ReentrantReadWriteLock$FairSync_MethodInfo_,
	nullptr,
	nullptr,
	_ReentrantReadWriteLock$FairSync_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantReadWriteLock"
};

$Object* allocate$ReentrantReadWriteLock$FairSync($Class* clazz) {
	return $of($alloc(ReentrantReadWriteLock$FairSync));
}

void ReentrantReadWriteLock$FairSync::init$() {
	$ReentrantReadWriteLock$Sync::init$();
}

bool ReentrantReadWriteLock$FairSync::writerShouldBlock() {
	return hasQueuedPredecessors();
}

bool ReentrantReadWriteLock$FairSync::readerShouldBlock() {
	return hasQueuedPredecessors();
}

ReentrantReadWriteLock$FairSync::ReentrantReadWriteLock$FairSync() {
}

$Class* ReentrantReadWriteLock$FairSync::load$($String* name, bool initialize) {
	$loadClass(ReentrantReadWriteLock$FairSync, name, initialize, &_ReentrantReadWriteLock$FairSync_ClassInfo_, allocate$ReentrantReadWriteLock$FairSync);
	return class$;
}

$Class* ReentrantReadWriteLock$FairSync::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java