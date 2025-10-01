#ifndef _java_util_concurrent_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_h_
#define _java_util_concurrent_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_h_
//$ class java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory
//$ extends java.util.concurrent.ForkJoinPool$ForkJoinWorkerThreadFactory

#include <java/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory.h>

#pragma push_macro("ACC")
#undef ACC

namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ForkJoinPool;
			class ForkJoinWorkerThread;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory : public ::java::util::concurrent::ForkJoinPool$ForkJoinWorkerThreadFactory {
	$class(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory, 0, ::java::util::concurrent::ForkJoinPool$ForkJoinWorkerThreadFactory)
public:
	ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory();
	void init$();
	virtual ::java::util::concurrent::ForkJoinWorkerThread* newThread(::java::util::concurrent::ForkJoinPool* pool) override;
	static ::java::security::AccessControlContext* ACC;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("ACC")

#endif // _java_util_concurrent_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory_h_