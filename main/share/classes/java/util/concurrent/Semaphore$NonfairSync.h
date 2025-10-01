#ifndef _java_util_concurrent_Semaphore$NonfairSync_h_
#define _java_util_concurrent_Semaphore$NonfairSync_h_
//$ class java.util.concurrent.Semaphore$NonfairSync
//$ extends java.util.concurrent.Semaphore$Sync

#include <java/util/concurrent/Semaphore$Sync.h>

namespace java {
	namespace util {
		namespace concurrent {

class $export Semaphore$NonfairSync : public ::java::util::concurrent::Semaphore$Sync {
	$class(Semaphore$NonfairSync, $NO_CLASS_INIT, ::java::util::concurrent::Semaphore$Sync)
public:
	Semaphore$NonfairSync();
	void init$(int32_t permits);
	virtual int32_t tryAcquireShared(int32_t acquires) override;
	static const int64_t serialVersionUID = (int64_t)0xDA9C5636A11688E6;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Semaphore$NonfairSync_h_