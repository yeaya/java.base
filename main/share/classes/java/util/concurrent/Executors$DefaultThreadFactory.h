#ifndef _java_util_concurrent_Executors$DefaultThreadFactory_h_
#define _java_util_concurrent_Executors$DefaultThreadFactory_h_
//$ class java.util.concurrent.Executors$DefaultThreadFactory
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
		class ThreadGroup;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class Executors$DefaultThreadFactory : public ::java::util::concurrent::ThreadFactory {
	$class(Executors$DefaultThreadFactory, 0, ::java::util::concurrent::ThreadFactory)
public:
	Executors$DefaultThreadFactory();
	void init$();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	static ::java::util::concurrent::atomic::AtomicInteger* poolNumber;
	::java::lang::ThreadGroup* group = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* threadNumber = nullptr;
	$String* namePrefix = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Executors$DefaultThreadFactory_h_