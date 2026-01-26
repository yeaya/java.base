#include <java/util/concurrent/TransferQueue.h>

#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _TransferQueue_MethodInfo_[] = {
	{"getWaitingConsumerCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransferQueue, getWaitingConsumerCount, int32_t)},
	{"hasWaitingConsumer", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransferQueue, hasWaitingConsumer, bool)},
	{"transfer", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, $virtualMethod(TransferQueue, transfer, void, Object$*), "java.lang.InterruptedException"},
	{"tryTransfer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(TransferQueue, tryTransfer, bool, Object$*)},
	{"tryTransfer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(TransferQueue, tryTransfer, bool, Object$*, int64_t, $TimeUnit*), "java.lang.InterruptedException"},
	{}
};

$ClassInfo _TransferQueue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.TransferQueue",
	nullptr,
	"java.util.concurrent.BlockingQueue",
	nullptr,
	_TransferQueue_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/BlockingQueue<TE;>;"
};

$Object* allocate$TransferQueue($Class* clazz) {
	return $of($alloc(TransferQueue));
}

$Class* TransferQueue::load$($String* name, bool initialize) {
	$loadClass(TransferQueue, name, initialize, &_TransferQueue_ClassInfo_, allocate$TransferQueue);
	return class$;
}

$Class* TransferQueue::class$ = nullptr;

		} // concurrent
	} // util
} // java