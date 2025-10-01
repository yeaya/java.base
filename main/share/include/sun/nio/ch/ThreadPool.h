#ifndef _sun_nio_ch_ThreadPool_h_
#define _sun_nio_ch_ThreadPool_h_
//$ class sun.nio.ch.ThreadPool
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_THREAD_POOL_INITIAL_SIZE")
#undef DEFAULT_THREAD_POOL_INITIAL_SIZE
#pragma push_macro("DEFAULT_THREAD_POOL_THREAD_FACTORY")
#undef DEFAULT_THREAD_POOL_THREAD_FACTORY

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
			class ThreadFactory;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import ThreadPool : public ::java::lang::Object {
	$class(ThreadPool, 0, ::java::lang::Object)
public:
	ThreadPool();
	void init$(::java::util::concurrent::ExecutorService* executor, bool isFixed, int32_t poolSize);
	static ::sun::nio::ch::ThreadPool* create(int32_t nThreads, ::java::util::concurrent::ThreadFactory* factory);
	static ::sun::nio::ch::ThreadPool* createDefault();
	static ::java::util::concurrent::ThreadFactory* defaultThreadFactory();
	virtual ::java::util::concurrent::ExecutorService* executor();
	static ::sun::nio::ch::ThreadPool* getDefault();
	static int32_t getDefaultThreadPoolInitialSize();
	static ::java::util::concurrent::ThreadFactory* getDefaultThreadPoolThreadFactory();
	virtual bool isFixedThreadPool();
	static $Thread* lambda$defaultThreadFactory$0(::java::lang::Runnable* r);
	static $Thread* lambda$defaultThreadFactory$1(::java::lang::Runnable* r);
	static $Thread* lambda$defaultThreadFactory$2(::java::lang::Runnable* r);
	virtual int32_t poolSize();
	static ::sun::nio::ch::ThreadPool* wrap(::java::util::concurrent::ExecutorService* executor, int32_t initialSize);
	static $String* DEFAULT_THREAD_POOL_THREAD_FACTORY;
	static $String* DEFAULT_THREAD_POOL_INITIAL_SIZE;
	::java::util::concurrent::ExecutorService* executor$ = nullptr;
	bool isFixed = false;
	int32_t poolSize$ = 0;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("DEFAULT_THREAD_POOL_INITIAL_SIZE")
#pragma pop_macro("DEFAULT_THREAD_POOL_THREAD_FACTORY")

#endif // _sun_nio_ch_ThreadPool_h_