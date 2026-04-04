#include <java/util/concurrent/SynchronousQueue$FifoWaitQueue.h>
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

void SynchronousQueue$FifoWaitQueue::init$() {
	$SynchronousQueue$WaitQueue::init$();
}

SynchronousQueue$FifoWaitQueue::SynchronousQueue$FifoWaitQueue() {
}

$Class* SynchronousQueue$FifoWaitQueue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SynchronousQueue$FifoWaitQueue, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SynchronousQueue$FifoWaitQueue, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.SynchronousQueue$FifoWaitQueue", "java.util.concurrent.SynchronousQueue", "FifoWaitQueue", $STATIC},
		{"java.util.concurrent.SynchronousQueue$WaitQueue", "java.util.concurrent.SynchronousQueue", "WaitQueue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.SynchronousQueue$FifoWaitQueue",
		"java.util.concurrent.SynchronousQueue$WaitQueue",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.SynchronousQueue"
	};
	$loadClass(SynchronousQueue$FifoWaitQueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynchronousQueue$FifoWaitQueue);
	});
	return class$;
}

$Class* SynchronousQueue$FifoWaitQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java