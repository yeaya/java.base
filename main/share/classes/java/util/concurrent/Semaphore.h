#ifndef _java_util_concurrent_Semaphore_h_
#define _java_util_concurrent_Semaphore_h_
//$ class java.util.concurrent.Semaphore
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {
		class Collection;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Semaphore$Sync;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export Semaphore : public ::java::io::Serializable {
	$class(Semaphore, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	Semaphore();
	void init$(int32_t permits);
	void init$(int32_t permits, bool fair);
	virtual void acquire();
	virtual void acquire(int32_t permits);
	virtual void acquireUninterruptibly();
	virtual void acquireUninterruptibly(int32_t permits);
	virtual int32_t availablePermits();
	virtual int32_t drainPermits();
	int32_t getQueueLength();
	virtual ::java::util::Collection* getQueuedThreads();
	bool hasQueuedThreads();
	virtual bool isFair();
	virtual void reducePermits(int32_t reduction);
	virtual void release();
	virtual void release(int32_t permits);
	virtual $String* toString() override;
	virtual bool tryAcquire();
	virtual bool tryAcquire(int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	virtual bool tryAcquire(int32_t permits);
	virtual bool tryAcquire(int32_t permits, int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	static const int64_t serialVersionUID = (int64_t)0xD34719C7FE89A6EE;
	::java::util::concurrent::Semaphore$Sync* sync = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Semaphore_h_