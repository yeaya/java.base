#include <java/util/concurrent/locks/StampedLock$ReadWriteLockView.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/StampedLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Lock = ::java::util::concurrent::locks::Lock;
using $StampedLock = ::java::util::concurrent::locks::StampedLock;

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {

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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/locks/StampedLock;", nullptr, $FINAL | $SYNTHETIC, $field(StampedLock$ReadWriteLockView, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/locks/StampedLock;)V", nullptr, 0, $method(StampedLock$ReadWriteLockView, init$, void, $StampedLock*)},
		{"readLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PUBLIC, $virtualMethod(StampedLock$ReadWriteLockView, readLock, $Lock*)},
		{"writeLock", "()Ljava/util/concurrent/locks/Lock;", nullptr, $PUBLIC, $virtualMethod(StampedLock$ReadWriteLockView, writeLock, $Lock*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.locks.StampedLock$ReadWriteLockView", "java.util.concurrent.locks.StampedLock", "ReadWriteLockView", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.locks.StampedLock$ReadWriteLockView",
		"java.lang.Object",
		"java.util.concurrent.locks.ReadWriteLock",
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
	$loadClass(StampedLock$ReadWriteLockView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StampedLock$ReadWriteLockView);
	});
	return class$;
}

$Class* StampedLock$ReadWriteLockView::class$ = nullptr;

			} // locks
		} // concurrent
	} // util
} // java