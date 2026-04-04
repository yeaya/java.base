#include <java/util/concurrent/SynchronousQueue$WaitQueue.h>
#include <java/util/concurrent/SynchronousQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

void SynchronousQueue$WaitQueue::init$() {
}

SynchronousQueue$WaitQueue::SynchronousQueue$WaitQueue() {
}

$Class* SynchronousQueue$WaitQueue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SynchronousQueue$WaitQueue, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.SynchronousQueue$WaitQueue", "java.util.concurrent.SynchronousQueue", "WaitQueue", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.SynchronousQueue$WaitQueue",
		"java.lang.Object",
		"java.io.Serializable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.SynchronousQueue"
	};
	$loadClass(SynchronousQueue$WaitQueue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynchronousQueue$WaitQueue);
	});
	return class$;
}

$Class* SynchronousQueue$WaitQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java