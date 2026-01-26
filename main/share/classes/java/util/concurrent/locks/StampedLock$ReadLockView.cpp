#include <java/util/concurrent/locks/StampedLock$ReadLockView.h>

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

$FieldInfo _StampedLock$ReadLockView_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/locks/StampedLock;", nullptr, $FINAL | $SYNTHETIC, $field(StampedLock$ReadLockView, this$0)},
	{}
};

$MethodInfo _StampedLock$ReadLockView_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/locks/StampedLock;)V", nullptr, 0, $method(StampedLock$ReadLockView, init$, void, $StampedLock*)},
	{"lock", "()V", nullptr, $PUBLIC, $virtualMethod(StampedLock$ReadLockView, lock, void)},
	{"lockInterruptibly", "()V", nullptr, $PUBLIC, $virtualMethod(StampedLock$ReadLockView, lockInterruptibly, void), "java.lang.InterruptedException"},
	{"newCondition", "()Ljava/util/concurrent/locks/Condition;", nullptr, $PUBLIC, $virtualMethod(StampedLock$ReadLockView, newCondition, $Condition*)},
	{"tryLock", "()Z", nullptr, $PUBLIC, $virtualMethod(StampedLock$ReadLockView, tryLock, bool)},
	{"tryLock", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, $virtualMethod(StampedLock$ReadLockView, tryLock, bool, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"unlock", "()V", nullptr, $PUBLIC, $virtualMethod(StampedLock$ReadLockView, unlock, void)},
	{}
};

$InnerClassInfo _StampedLock$ReadLockView_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.StampedLock$ReadLockView", "java.util.concurrent.locks.StampedLock", "ReadLockView", $FINAL},
	{}
};

$ClassInfo _StampedLock$ReadLockView_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.StampedLock$ReadLockView",
	"java.lang.Object",
	"java.util.concurrent.locks.Lock",
	_StampedLock$ReadLockView_FieldInfo_,
	_StampedLock$ReadLockView_MethodInfo_,
	nullptr,
	nullptr,
	_StampedLock$ReadLockView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.StampedLock"
};

$Object* allocate$StampedLock$ReadLockView($Class* clazz) {
	return $of($alloc(StampedLock$ReadLockView));
}

void StampedLock$ReadLockView::init$($StampedLock* this$0) {
	$set(this, this$0, this$0);
}

void StampedLock$ReadLockView::lock() {
	this->this$0->readLock();
}

void StampedLock$ReadLockView::lockInterruptibly() {
	this->this$0->readLockInterruptibly();
}

bool StampedLock$ReadLockView::tryLock() {
	return this->this$0->tryReadLock() != (int64_t)0;
}

bool StampedLock$ReadLockView::tryLock(int64_t time, $TimeUnit* unit) {
	return this->this$0->tryReadLock(time, unit) != (int64_t)0;
}

void StampedLock$ReadLockView::unlock() {
	this->this$0->unstampedUnlockRead();
}

$Condition* StampedLock$ReadLockView::newCondition() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

StampedLock$ReadLockView::StampedLock$ReadLockView() {
}

$Class* StampedLock$ReadLockView::load$($String* name, bool initialize) {
	$loadClass(StampedLock$ReadLockView, name, initialize, &_StampedLock$ReadLockView_ClassInfo_, allocate$StampedLock$ReadLockView);
	return class$;
}

$Class* StampedLock$ReadLockView::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java