#ifndef _java_util_concurrent_TransferQueue_h_
#define _java_util_concurrent_TransferQueue_h_
//$ interface java.util.concurrent.TransferQueue
//$ extends java.util.concurrent.BlockingQueue

#include <java/util/concurrent/BlockingQueue.h>

namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export TransferQueue : public ::java::util::concurrent::BlockingQueue {
	$interface(TransferQueue, $NO_CLASS_INIT, ::java::util::concurrent::BlockingQueue)
public:
	virtual int32_t getWaitingConsumerCount() {return 0;}
	virtual bool hasWaitingConsumer() {return false;}
	using ::java::util::concurrent::BlockingQueue::poll;
	using ::java::util::concurrent::BlockingQueue::remove;
	virtual void transfer(Object$* e) {}
	virtual bool tryTransfer(Object$* e) {return false;}
	virtual bool tryTransfer(Object$* e, int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return false;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_TransferQueue_h_