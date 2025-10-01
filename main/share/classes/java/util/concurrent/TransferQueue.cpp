#include <java/util/concurrent/TransferQueue.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _TransferQueue_MethodInfo_[] = {
	{"getWaitingConsumerCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"hasWaitingConsumer", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"transfer", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{"tryTransfer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC | $ABSTRACT},
	{"tryTransfer", "(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z", "(TE;JLjava/util/concurrent/TimeUnit;)Z", $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
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