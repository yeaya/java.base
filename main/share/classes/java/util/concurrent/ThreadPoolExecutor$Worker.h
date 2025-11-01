#ifndef _java_util_concurrent_ThreadPoolExecutor$Worker_h_
#define _java_util_concurrent_ThreadPoolExecutor$Worker_h_
//$ class java.util.concurrent.ThreadPoolExecutor$Worker
//$ extends java.util.concurrent.locks.AbstractQueuedSynchronizer
//$ implements java.lang.Runnable

#include <java/lang/Runnable.h>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ThreadPoolExecutor;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class ThreadPoolExecutor$Worker : public ::java::util::concurrent::locks::AbstractQueuedSynchronizer, public ::java::lang::Runnable {
	$class(ThreadPoolExecutor$Worker, $NO_CLASS_INIT, ::java::util::concurrent::locks::AbstractQueuedSynchronizer, ::java::lang::Runnable)
public:
	ThreadPoolExecutor$Worker();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::ThreadPoolExecutor* this$0, ::java::lang::Runnable* firstTask);
	void interruptIfStarted();
	virtual bool isHeldExclusively() override;
	bool isLocked();
	void lock();
	virtual void run() override;
	virtual $String* toString() override;
	virtual bool tryAcquire(int32_t unused) override;
	bool tryLock();
	virtual bool tryRelease(int32_t unused) override;
	void unlock();
	::java::util::concurrent::ThreadPoolExecutor* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x552F9A9A47F02C71;
	$Thread* thread = nullptr;
	::java::lang::Runnable* firstTask = nullptr;
	$volatile(int64_t) completedTasks = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ThreadPoolExecutor$Worker_h_