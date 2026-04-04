#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync$HoldCounter.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$Sync.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

void ReentrantReadWriteLock$Sync$HoldCounter::init$() {
	this->tid = $LockSupport::getThreadId($($Thread::currentThread()));
}

ReentrantReadWriteLock$Sync$HoldCounter::ReentrantReadWriteLock$Sync$HoldCounter() {
}

$Class* ReentrantReadWriteLock$Sync$HoldCounter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, 0, $field(ReentrantReadWriteLock$Sync$HoldCounter, count)},
		{"tid", "J", nullptr, $FINAL, $field(ReentrantReadWriteLock$Sync$HoldCounter, tid)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReentrantReadWriteLock$Sync$HoldCounter, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "java.util.concurrent.locks.ReentrantReadWriteLock", "Sync", $STATIC | $ABSTRACT},
		{"java.util.concurrent.locks.ReentrantReadWriteLock$Sync$HoldCounter", "java.util.concurrent.locks.ReentrantReadWriteLock$Sync", "HoldCounter", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.locks.ReentrantReadWriteLock$Sync$HoldCounter",
		"java.lang.Object",
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
	$loadClass(ReentrantReadWriteLock$Sync$HoldCounter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReentrantReadWriteLock$Sync$HoldCounter);
	});
	return class$;
}

$Class* ReentrantReadWriteLock$Sync$HoldCounter::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java