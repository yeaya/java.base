#include <java/util/concurrent/locks/ReentrantReadWriteLock$NonfairSync.h>

#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $ReentrantReadWriteLock$Sync = ::java::util::concurrent::locks::ReentrantReadWriteLock$Sync;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _ReentrantReadWriteLock$NonfairSync_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantReadWriteLock$NonfairSync, serialVersionUID)},
	{}
};

$MethodInfo _ReentrantReadWriteLock$NonfairSync_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReentrantReadWriteLock$NonfairSync::*)()>(&ReentrantReadWriteLock$NonfairSync::init$))},
	{"readerShouldBlock", "()Z", nullptr, $FINAL},
	{"writerShouldBlock", "()Z", nullptr, $FINAL},
	{}
};

$InnerClassInfo _ReentrantReadWriteLock$NonfairSync_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.ReentrantReadWriteLock$NonfairSync", "java.util.concurrent.locks.ReentrantReadWriteLock", "NonfairSync", $STATIC | $FINAL},
	{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "java.util.concurrent.locks.ReentrantReadWriteLock", "Sync", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ReentrantReadWriteLock$NonfairSync_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.ReentrantReadWriteLock$NonfairSync",
	"java.util.concurrent.locks.ReentrantReadWriteLock$Sync",
	nullptr,
	_ReentrantReadWriteLock$NonfairSync_FieldInfo_,
	_ReentrantReadWriteLock$NonfairSync_MethodInfo_,
	nullptr,
	nullptr,
	_ReentrantReadWriteLock$NonfairSync_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.ReentrantReadWriteLock"
};

$Object* allocate$ReentrantReadWriteLock$NonfairSync($Class* clazz) {
	return $of($alloc(ReentrantReadWriteLock$NonfairSync));
}

void ReentrantReadWriteLock$NonfairSync::init$() {
	$ReentrantReadWriteLock$Sync::init$();
}

bool ReentrantReadWriteLock$NonfairSync::writerShouldBlock() {
	return false;
}

bool ReentrantReadWriteLock$NonfairSync::readerShouldBlock() {
	return apparentlyFirstQueuedIsExclusive();
}

ReentrantReadWriteLock$NonfairSync::ReentrantReadWriteLock$NonfairSync() {
}

$Class* ReentrantReadWriteLock$NonfairSync::load$($String* name, bool initialize) {
	$loadClass(ReentrantReadWriteLock$NonfairSync, name, initialize, &_ReentrantReadWriteLock$NonfairSync_ClassInfo_, allocate$ReentrantReadWriteLock$NonfairSync);
	return class$;
}

$Class* ReentrantReadWriteLock$NonfairSync::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java