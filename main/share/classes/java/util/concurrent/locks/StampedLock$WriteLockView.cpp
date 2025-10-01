#include <java/util/concurrent/locks/StampedLock$WriteLockView.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Lock = ::java::util::concurrent::locks::Lock;
using $StampedLock = ::java::util::concurrent::locks::StampedLock;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _StampedLock$WriteLockView_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/locks/StampedLock;", nullptr, $FINAL | $SYNTHETIC, $field(StampedLock$WriteLockView, this$0)},
	{}
};

$MethodInfo _StampedLock$WriteLockView_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/locks/StampedLock;)V", nullptr, 0, $method(static_cast<void(StampedLock$WriteLockView::*)($StampedLock*)>(&StampedLock$WriteLockView::init$))},
	{"lock", "()V", nullptr, $PUBLIC},
	{"lockInterruptibly", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"newCondition", "()Ljava/util/concurrent/locks/Condition;", nullptr, $PUBLIC},
	{"tryLock", "()Z", nullptr, $PUBLIC},
	{"tryLock", "(JLjava/util/concurrent/TimeUnit;)Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"unlock", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StampedLock$WriteLockView_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.StampedLock$WriteLockView", "java.util.concurrent.locks.StampedLock", "WriteLockView", $FINAL},
	{}
};

$ClassInfo _StampedLock$WriteLockView_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.StampedLock$WriteLockView",
	"java.lang.Object",
	"java.util.concurrent.locks.Lock",
	_StampedLock$WriteLockView_FieldInfo_,
	_StampedLock$WriteLockView_MethodInfo_,
	nullptr,
	nullptr,
	_StampedLock$WriteLockView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.StampedLock"
};

$Object* allocate$StampedLock$WriteLockView($Class* clazz) {
	return $of($alloc(StampedLock$WriteLockView));
}

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
	return this->this$0->tryWriteLock() != (int64_t)0;
}

bool StampedLock$WriteLockView::tryLock(int64_t time, $TimeUnit* unit) {
	return this->this$0->tryWriteLock(time, unit) != (int64_t)0;
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
	$loadClass(StampedLock$WriteLockView, name, initialize, &_StampedLock$WriteLockView_ClassInfo_, allocate$StampedLock$WriteLockView);
	return class$;
}

$Class* StampedLock$WriteLockView::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java