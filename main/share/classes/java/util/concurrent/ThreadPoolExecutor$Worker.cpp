#include <java/util/concurrent/ThreadPoolExecutor$Worker.h>

#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <java/util/concurrent/locks/AbstractOwnableSynchronizer.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityException = ::java::lang::SecurityException;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;
using $AbstractQueuedSynchronizer = ::java::util::concurrent::locks::AbstractQueuedSynchronizer;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ThreadPoolExecutor$Worker_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ThreadPoolExecutor;", nullptr, $FINAL | $SYNTHETIC, $field(ThreadPoolExecutor$Worker, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadPoolExecutor$Worker, serialVersionUID)},
	{"thread", "Ljava/lang/Thread;", nullptr, $FINAL, $field(ThreadPoolExecutor$Worker, thread)},
	{"firstTask", "Ljava/lang/Runnable;", nullptr, 0, $field(ThreadPoolExecutor$Worker, firstTask)},
	{"completedTasks", "J", nullptr, $VOLATILE, $field(ThreadPoolExecutor$Worker, completedTasks)},
	{}
};

$MethodInfo _ThreadPoolExecutor$Worker_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/concurrent/ThreadPoolExecutor;Ljava/lang/Runnable;)V", nullptr, 0, $method(ThreadPoolExecutor$Worker, init$, void, $ThreadPoolExecutor*, $Runnable*)},
	{"interruptIfStarted", "()V", nullptr, 0, $method(ThreadPoolExecutor$Worker, interruptIfStarted, void)},
	{"isHeldExclusively", "()Z", nullptr, $PROTECTED, $virtualMethod(ThreadPoolExecutor$Worker, isHeldExclusively, bool)},
	{"isLocked", "()Z", nullptr, $PUBLIC, $method(ThreadPoolExecutor$Worker, isLocked, bool)},
	{"lock", "()V", nullptr, $PUBLIC, $method(ThreadPoolExecutor$Worker, lock, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ThreadPoolExecutor$Worker, run, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAcquire", "(I)Z", nullptr, $PROTECTED, $virtualMethod(ThreadPoolExecutor$Worker, tryAcquire, bool, int32_t)},
	{"tryLock", "()Z", nullptr, $PUBLIC, $method(ThreadPoolExecutor$Worker, tryLock, bool)},
	{"tryRelease", "(I)Z", nullptr, $PROTECTED, $virtualMethod(ThreadPoolExecutor$Worker, tryRelease, bool, int32_t)},
	{"unlock", "()V", nullptr, $PUBLIC, $method(ThreadPoolExecutor$Worker, unlock, void)},
	{}
};

$InnerClassInfo _ThreadPoolExecutor$Worker_InnerClassesInfo_[] = {
	{"java.util.concurrent.ThreadPoolExecutor$Worker", "java.util.concurrent.ThreadPoolExecutor", "Worker", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _ThreadPoolExecutor$Worker_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ThreadPoolExecutor$Worker",
	"java.util.concurrent.locks.AbstractQueuedSynchronizer",
	"java.lang.Runnable",
	_ThreadPoolExecutor$Worker_FieldInfo_,
	_ThreadPoolExecutor$Worker_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadPoolExecutor$Worker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ThreadPoolExecutor"
};

$Object* allocate$ThreadPoolExecutor$Worker($Class* clazz) {
	return $of($alloc(ThreadPoolExecutor$Worker));
}

$String* ThreadPoolExecutor$Worker::toString() {
	 return this->$AbstractQueuedSynchronizer::toString();
}

int32_t ThreadPoolExecutor$Worker::hashCode() {
	 return this->$AbstractQueuedSynchronizer::hashCode();
}

bool ThreadPoolExecutor$Worker::equals(Object$* obj) {
	 return this->$AbstractQueuedSynchronizer::equals(obj);
}

$Object* ThreadPoolExecutor$Worker::clone() {
	 return this->$AbstractQueuedSynchronizer::clone();
}

void ThreadPoolExecutor$Worker::finalize() {
	this->$AbstractQueuedSynchronizer::finalize();
}

void ThreadPoolExecutor$Worker::init$($ThreadPoolExecutor* this$0, $Runnable* firstTask) {
	$set(this, this$0, this$0);
	$AbstractQueuedSynchronizer::init$();
	setState(-1);
	$set(this, firstTask, firstTask);
	$set(this, thread, $nc($(this$0->getThreadFactory()))->newThread(this));
}

void ThreadPoolExecutor$Worker::run() {
	this->this$0->runWorker(this);
}

bool ThreadPoolExecutor$Worker::isHeldExclusively() {
	return getState() != 0;
}

bool ThreadPoolExecutor$Worker::tryAcquire(int32_t unused) {
	if (compareAndSetState(0, 1)) {
		setExclusiveOwnerThread($($Thread::currentThread()));
		return true;
	}
	return false;
}

bool ThreadPoolExecutor$Worker::tryRelease(int32_t unused) {
	setExclusiveOwnerThread(nullptr);
	setState(0);
	return true;
}

void ThreadPoolExecutor$Worker::lock() {
	acquire(1);
}

bool ThreadPoolExecutor$Worker::tryLock() {
	return tryAcquire(1);
}

void ThreadPoolExecutor$Worker::unlock() {
	release(1);
}

bool ThreadPoolExecutor$Worker::isLocked() {
	return isHeldExclusively();
}

void ThreadPoolExecutor$Worker::interruptIfStarted() {
	$var($Thread, t, nullptr);
	bool var$0 = getState() >= 0 && ($assign(t, this->thread)) != nullptr;
	if (var$0 && !$nc(t)->isInterrupted()) {
		try {
			t->interrupt();
		} catch ($SecurityException& ignore) {
		}
	}
}

ThreadPoolExecutor$Worker::ThreadPoolExecutor$Worker() {
}

$Class* ThreadPoolExecutor$Worker::load$($String* name, bool initialize) {
	$loadClass(ThreadPoolExecutor$Worker, name, initialize, &_ThreadPoolExecutor$Worker_ClassInfo_, allocate$ThreadPoolExecutor$Worker);
	return class$;
}

$Class* ThreadPoolExecutor$Worker::class$ = nullptr;

		} // concurrent
	} // util
} // java