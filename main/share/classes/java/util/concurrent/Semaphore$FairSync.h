#ifndef _java_util_concurrent_Semaphore$FairSync_h_
#define _java_util_concurrent_Semaphore$FairSync_h_
//$ class java.util.concurrent.Semaphore$FairSync
//$ extends java.util.concurrent.Semaphore$Sync

#include <java/util/concurrent/Semaphore$Sync.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export Semaphore$FairSync : public ::java::util::concurrent::Semaphore$Sync {
	$class(Semaphore$FairSync, $NO_CLASS_INIT, ::java::util::concurrent::Semaphore$Sync)
public:
	Semaphore$FairSync();
	void init$(int32_t permits);
	virtual int32_t tryAcquireShared(int32_t acquires) override;
	static const int64_t serialVersionUID = (int64_t)0x1BF45E7BB79D96B0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Semaphore$FairSync_h_