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

void SynchronousQueue$LifoWaitQueue::init$() {
	$SynchronousQueue$WaitQueue::init$();
}

SynchronousQueue$LifoWaitQueue::SynchronousQueue$LifoWaitQueue() {
}

$Class* SynchronousQueue$LifoWaitQueue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SynchronousQueue$LifoWaitQueue, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SynchronousQueue$LifoWaitQueue, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.SynchronousQueue$LifoWaitQueue", "java.util.concurrent.SynchronousQueue", "LifoWaitQueue", $STATIC},
		{"java.util.concurrent.SynchronousQueue$WaitQueue", "java.util.concurrent.SynchronousQueue", "WaitQueue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.SynchronousQueue$LifoWaitQueue",
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
	$loadClass(SynchronousQueue$LifoWaitQueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynchronousQueue$LifoWaitQueue);
	});
	return class$;
}

$Class* SynchronousQueue$LifoWaitQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java