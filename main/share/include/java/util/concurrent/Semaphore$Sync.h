#ifndef _java_util_concurrent_Semaphore$Sync_h_
#define _java_util_concurrent_Semaphore$Sync_h_
//$ class java.util.concurrent.Semaphore$Sync
//$ extends java.util.concurrent.locks.AbstractQueuedSynchronizer

#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import Semaphore$Sync : public ::java::util::concurrent::locks::AbstractQueuedSynchronizer {
	$class(Semaphore$Sync, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedSynchronizer)
public:
	Semaphore$Sync();
	void init$(int32_t permits);
	int32_t drainPermits();
	int32_t getPermits();
	int32_t nonfairTryAcquireShared(int32_t acquires);
	void reducePermits(int32_t reductions);
	virtual bool tryReleaseShared(int32_t releases) override;
	static const int64_t serialVersionUID = (int64_t)0x108C7583C161B715;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Semaphore$Sync_h_