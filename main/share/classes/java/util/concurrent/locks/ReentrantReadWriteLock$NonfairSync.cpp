#include <java/util/concurrent/locks/ReentrantReadWriteLock$NonfairSync.h>
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReentrantReadWriteLock$NonfairSync, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReentrantReadWriteLock$NonfairSync, init$, void)},
		{"readerShouldBlock", "()Z", nullptr, $FINAL, $virtualMethod(ReentrantReadWriteLock$NonfairSync, readerShouldBlock, bool)},
		{"writerShouldBlock", "()Z", nullptr, $FINAL, $virtualMethod(ReentrantReadWriteLock$NonfairSync, writerShouldBlock, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.ReentrantReadWriteLock$NonfairSync", "java.util.concurrent.locks.ReentrantReadWriteLock", "NonfairSync", $STATIC | $FINAL},
		{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "java.util.concurrent.locks.ReentrantReadWriteLock", "Sync", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.locks.ReentrantReadWriteLock$NonfairSync",
		"java.util.concurrent.locks.ReentrantReadWriteLock$Sync",
		nullptr,
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
	$loadClass(ReentrantReadWriteLock$NonfairSync, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReentrantReadWriteLock$NonfairSync);
	});
	return class$;
}

$Class* ReentrantReadWriteLock$NonfairSync::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java