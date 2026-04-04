#include <java/util/concurrent/locks/StampedLock$WriteLockView.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/StampedLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Condition = ::java::util::concurrent::locks::Condition;
using $StampedLock = ::java::util::concurrent::locks::StampedLock;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

void StampedLock$WriteLockView::init$($StampedLock* this$0) {
	$set(this, this$0, this$0);
}

void StampedLock$WriteLockView::lock() {
	this->this$0->writeLock();
}

void StampedLock$WriteLockView::lockInterruptibly() {
	this->this$0->writeLockInterruptibly();
}

bool StampedLock$WriteLockView::tryLock() {
	return this->this$0->tryWriteLock() != 0;
}

bool StampedLock$WriteLockView::tryLock(int64_t time, $TimeUnit* unit) {
	return this->this$0->tryWriteLock(time, unit) != 0;
}

void StampedLock$WriteLockView::unlock() {
	this->this$0->unstampedUnlockWrite();
}

$Condition* StampedLock$WriteLockView::newCondition() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

StampedLock$WriteLockView::StampedLock$WriteLockView() {
}

$Class* StampedLock$WriteLockView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/locks/StampedLock;", nullptr, $FINAL | $SYNTHETIC, $field(StampedLock$WriteLockView, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/locks/StampedLock;)V", nullptr, 0, $method(StampedLock$WriteLockView, init$, void, $StampedLock*)},
		{"lock", "()V", nullptr, $PUBLIC, $virtualMethod(StampedLock$WriteLockView, lock, void)},
		{"lockInterruptibly", "()V", nullptr, $PUBLIC, $virtualMethod(StampedLock$WriteLockView, lockInterruptibly, void), "java.lang.InterruptedException"},
		{"newCondition", "()Ljava/util/concurrent/locks/Condition;", nullptr, $PUBLIC, $virtualMethod(StampedLock$WriteLockView, newCondition, $Condition*)},
		{"tryLock", "()Z", nullptr, $PUBLIC, $virtualMethod(StampedLock$WriteLockView, tryLock, bool)},
		{"tryLock", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, $virtualMethod(StampedLock$WriteLockView, tryLock, bool, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
		{"unlock", "()V", nullptr, $PUBLIC, $virtualMethod(StampedLock$WriteLockView, unlock, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.StampedLock$WriteLockView", "java.util.concurrent.locks.StampedLock", "WriteLockView", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.locks.StampedLock$WriteLockView",
		"java.lang.Object",
		"java.util.concurrent.locks.Lock",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.locks.StampedLock"
	};
	$loadClass(StampedLock$WriteLockView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StampedLock$WriteLockView);
	});
	return class$;
}

$Class* StampedLock$WriteLockView::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java