#include <java/util/concurrent/locks/StampedLock$ReadWriteLockView.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/StampedLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $StampedLock = ::java::util::concurrent::locks::StampedLock;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

$FieldInfo _StampedLock$ReadWriteLockView_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/locks/StampedLock;", nullptr, $FINAL | $SYNTHETIC, $field(StampedLock$ReadWriteLockView, this$0)},
	{}
};

$MethodInfo _StampedLock$ReadWriteLockView_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/locks/StampedLock;)V", nullptr, 0, $method(static_cast<void(StampedLock$ReadWriteLockView::*)($StampedLock*)>(&StampedLock$ReadWriteLockView::init$))},
	{"readLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PUBLIC},
	{"writeLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StampedLock$ReadWriteLockView_InnerClassesInfo_[] = {
	{"java.util.concurrent.locks.StampedLock$ReadWriteLockView", "java.util.concurrent.locks.StampedLock", "ReadWriteLockView", $FINAL},
	{}
};

$ClassInfo _StampedLock$ReadWriteLockView_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.locks.StampedLock$ReadWriteLockView",
	"java.lang.Object",
	"java.util.concurrent.locks.ReadWriteLock",
	_StampedLock$ReadWriteLockView_FieldInfo_,
	_StampedLock$ReadWriteLockView_MethodInfo_,
	nullptr,
	nullptr,
	_StampedLock$ReadWriteLockView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.locks.StampedLock"
};

$Object* allocate$StampedLock$ReadWriteLockView($Class* clazz) {
	return $of($alloc(StampedLock$ReadWriteLockView));
}

void StampedLock$ReadWriteLockView::init$($StampedLock* this$0) {
	$set(this, this$0, this$0);
}

$Lock* StampedLock$ReadWriteLockView::readLock() {
	return this->this$0->asReadLock();
}

$Lock* StampedLock$ReadWriteLockView::writeLock() {
	return this->this$0->asWriteLock();
}

StampedLock$ReadWriteLockView::StampedLock$ReadWriteLockView() {
}

$Class* StampedLock$ReadWriteLockView::load$($String* name, bool initialize) {
	$loadClass(StampedLock$ReadWriteLockView, name, initialize, &_StampedLock$ReadWriteLockView_ClassInfo_, allocate$StampedLock$ReadWriteLockView);
	return class$;
}

$Class* StampedLock$ReadWriteLockView::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java