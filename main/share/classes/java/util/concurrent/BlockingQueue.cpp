#include <java/util/concurrent/BlockingQueue.h>

#include <java/util/Collection.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _BlockingQueue_MethodInfo_[] = {
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"drainTo", "(Ljava/util/Collection;)I", "(Ljava/util/Collection<-TE;>;)I", $PUBLIC | $ABSTRACT, $virtualMethod(BlockingQueue, drainTo, int32_t, $Collection*)},
	{"drainTo", "(Ljava/util/Collection;I)I", "(Ljava/util/Collection<-TE;>;I)I", $PUBLIC | $ABSTRACT, $virtualMethod(BlockingQueue, drainTo, int32_t, $Collection*, int32_t)},
	{"offer", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"offer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(BlockingQueue, offer, bool, Object$*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;", "(JLjava/util/concurrent/TimeUnit;)TE;", $PUBLIC | $ABSTRACT, $virtualMethod(BlockingQueue, poll, $Object*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{"put", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, $virtualMethod(BlockingQueue, put, void, Object$*), "java.lang.InterruptedException"},
	{"remainingCapacity", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BlockingQueue, remainingCapacity, int32_t)},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"take", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(BlockingQueue, take, $Object*), "java.lang.InterruptedException"},
	{}
};

$ClassInfo _BlockingQueue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.BlockingQueue",
	nullptr,
	"java.util.Queue",
	nullptr,
	_BlockingQueue_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Queue<TE;>;"
};

$Object* allocate$BlockingQueue($Class* clazz) {
	return $of($alloc(BlockingQueue));
}

$Class* BlockingQueue::load$($String* name, bool initialize) {
	$loadClass(BlockingQueue, name, initialize, &_BlockingQueue_ClassInfo_, allocate$BlockingQueue);
	return class$;
}

$Class* BlockingQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java