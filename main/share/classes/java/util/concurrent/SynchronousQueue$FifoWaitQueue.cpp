#include <java/util/concurrent/SynchronousQueue$FifoWaitQueue.h>

#include <java/util/concurrent/SynchronousQueue$WaitQueue.h>
#include <java/util/concurrent/SynchronousQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynchronousQueue = ::java::util::concurrent::SynchronousQueue;
using $SynchronousQueue$WaitQueue = ::java::util::concurrent::SynchronousQueue$WaitQueue;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _SynchronousQueue$FifoWaitQueue_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SynchronousQueue$FifoWaitQueue, serialVersionUID)},
	{}
};

$MethodInfo _SynchronousQueue$FifoWaitQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SynchronousQueue$FifoWaitQueue::*)()>(&SynchronousQueue$FifoWaitQueue::init$))},
	{}
};

$InnerClassInfo _SynchronousQueue$FifoWaitQueue_InnerClassesInfo_[] = {
	{"java.util.concurrent.SynchronousQueue$FifoWaitQueue", "java.util.concurrent.SynchronousQueue", "FifoWaitQueue", $STATIC},
	{"java.util.concurrent.SynchronousQueue$WaitQueue", "java.util.concurrent.SynchronousQueue", "WaitQueue", $STATIC},
	{}
};

$ClassInfo _SynchronousQueue$FifoWaitQueue_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.SynchronousQueue$FifoWaitQueue",
	"java.util.concurrent.SynchronousQueue$WaitQueue",
	nullptr,
	_SynchronousQueue$FifoWaitQueue_FieldInfo_,
	_SynchronousQueue$FifoWaitQueue_MethodInfo_,
	nullptr,
	nullptr,
	_SynchronousQueue$FifoWaitQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.SynchronousQueue"
};

$Object* allocate$SynchronousQueue$FifoWaitQueue($Class* clazz) {
	return $of($alloc(SynchronousQueue$FifoWaitQueue));
}

void SynchronousQueue$FifoWaitQueue::init$() {
	$SynchronousQueue$WaitQueue::init$();
}

SynchronousQueue$FifoWaitQueue::SynchronousQueue$FifoWaitQueue() {
}

$Class* SynchronousQueue$FifoWaitQueue::load$($String* name, bool initialize) {
	$loadClass(SynchronousQueue$FifoWaitQueue, name, initialize, &_SynchronousQueue$FifoWaitQueue_ClassInfo_, allocate$SynchronousQueue$FifoWaitQueue);
	return class$;
}

$Class* SynchronousQueue$FifoWaitQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java