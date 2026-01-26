#include <java/util/concurrent/SynchronousQueue$WaitQueue.h>

#include <java/util/concurrent/SynchronousQueue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _SynchronousQueue$WaitQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SynchronousQueue$WaitQueue, init$, void)},
	{}
};

$InnerClassInfo _SynchronousQueue$WaitQueue_InnerClassesInfo_[] = {
	{"java.util.concurrent.SynchronousQueue$WaitQueue", "java.util.concurrent.SynchronousQueue", "WaitQueue", $STATIC},
	{}
};

$ClassInfo _SynchronousQueue$WaitQueue_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.SynchronousQueue$WaitQueue",
	"java.lang.Object",
	"java.io.Serializable",
	nullptr,
	_SynchronousQueue$WaitQueue_MethodInfo_,
	nullptr,
	nullptr,
	_SynchronousQueue$WaitQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.SynchronousQueue"
};

$Object* allocate$SynchronousQueue$WaitQueue($Class* clazz) {
	return $of($alloc(SynchronousQueue$WaitQueue));
}

void SynchronousQueue$WaitQueue::init$() {
}

SynchronousQueue$WaitQueue::SynchronousQueue$WaitQueue() {
}

$Class* SynchronousQueue$WaitQueue::load$($String* name, bool initialize) {
	$loadClass(SynchronousQueue$WaitQueue, name, initialize, &_SynchronousQueue$WaitQueue_ClassInfo_, allocate$SynchronousQueue$WaitQueue);
	return class$;
}

$Class* SynchronousQueue$WaitQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java