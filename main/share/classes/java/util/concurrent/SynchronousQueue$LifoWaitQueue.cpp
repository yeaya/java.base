#include <java/util/concurrent/SynchronousQueue$LifoWaitQueue.h>

#include <java/util/concurrent/SynchronousQueue$WaitQueue.h>
#include <java/util/concurrent/SynchronousQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynchronousQueue$WaitQueue = ::java::util::concurrent::SynchronousQueue$WaitQueue;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _SynchronousQueue$LifoWaitQueue_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SynchronousQueue$LifoWaitQueue, serialVersionUID)},
	{}
};

$MethodInfo _SynchronousQueue$LifoWaitQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SynchronousQueue$LifoWaitQueue, init$, void)},
	{}
};

$InnerClassInfo _SynchronousQueue$LifoWaitQueue_InnerClassesInfo_[] = {
	{"java.util.concurrent.SynchronousQueue$LifoWaitQueue", "java.util.concurrent.SynchronousQueue", "LifoWaitQueue", $STATIC},
	{"java.util.concurrent.SynchronousQueue$WaitQueue", "java.util.concurrent.SynchronousQueue", "WaitQueue", $STATIC},
	{}
};

$ClassInfo _SynchronousQueue$LifoWaitQueue_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.SynchronousQueue$LifoWaitQueue",
	"java.util.concurrent.SynchronousQueue$WaitQueue",
	nullptr,
	_SynchronousQueue$LifoWaitQueue_FieldInfo_,
	_SynchronousQueue$LifoWaitQueue_MethodInfo_,
	nullptr,
	nullptr,
	_SynchronousQueue$LifoWaitQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.SynchronousQueue"
};

$Object* allocate$SynchronousQueue$LifoWaitQueue($Class* clazz) {
	return $of($alloc(SynchronousQueue$LifoWaitQueue));
}

void SynchronousQueue$LifoWaitQueue::init$() {
	$SynchronousQueue$WaitQueue::init$();
}

SynchronousQueue$LifoWaitQueue::SynchronousQueue$LifoWaitQueue() {
}

$Class* SynchronousQueue$LifoWaitQueue::load$($String* name, bool initialize) {
	$loadClass(SynchronousQueue$LifoWaitQueue, name, initialize, &_SynchronousQueue$LifoWaitQueue_ClassInfo_, allocate$SynchronousQueue$LifoWaitQueue);
	return class$;
}

$Class* SynchronousQueue$LifoWaitQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java