#ifndef _java_util_concurrent_CountDownLatch$Sync_h_
#define _java_util_concurrent_CountDownLatch$Sync_h_
//$ class java.util.concurrent.CountDownLatch$Sync
//$ extends java.util.concurrent.locks.AbstractQueuedSynchronizer

#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>

namespace java {
	namespace util {
		namespace concurrent {

class CountDownLatch$Sync : public ::java::util::concurrent::locks::AbstractQueuedSynchronizer {
	$class(CountDownLatch$Sync, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedSynchronizer)
public:
	CountDownLatch$Sync();
	void init$(int32_t count);
	int32_t getCount();
	virtual int32_t tryAcquireShared(int32_t acquires) override;
	virtual bool tryReleaseShared(int32_t releases) override;
	static const int64_t serialVersionUID = (int64_t)0x45248F9A985464A6;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CountDownLatch$Sync_h_