#ifndef _jdk_internal_ref_CleanerImpl$InnocuousThreadFactory_h_
#define _jdk_internal_ref_CleanerImpl$InnocuousThreadFactory_h_
//$ class jdk.internal.ref.CleanerImpl$InnocuousThreadFactory
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
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

namespace jdk {
	namespace internal {
		namespace ref {

class $import CleanerImpl$InnocuousThreadFactory : public ::java::util::concurrent::ThreadFactory {
	$class(CleanerImpl$InnocuousThreadFactory, 0, ::java::util::concurrent::ThreadFactory)
public:
	CleanerImpl$InnocuousThreadFactory();
	void init$();
	static ::java::util::concurrent::ThreadFactory* factory();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	static ::java::util::concurrent::ThreadFactory* factory$;
	::java::util::concurrent::atomic::AtomicInteger* cleanerThreadNumber = nullptr;
};

		} // ref
	} // internal
} // jdk

#endif // _jdk_internal_ref_CleanerImpl$InnocuousThreadFactory_h_