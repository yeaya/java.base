#ifndef _java_util_concurrent_ForkJoinPool$DefaultForkJoinWorkerThreadFactory_h_
#define _java_util_concurrent_ForkJoinPool$DefaultForkJoinWorkerThreadFactory_h_
//$ class java.util.concurrent.ForkJoinPool$DefaultForkJoinWorkerThreadFactory
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

class $export ForkJoinPool$DefaultForkJoinWorkerThreadFactory : public ::java::util::concurrent::ForkJoinPool$ForkJoinWorkerThreadFactory {
	$class(ForkJoinPool$DefaultForkJoinWorkerThreadFactory, 0, ::java::util::concurrent::ForkJoinPool$ForkJoinWorkerThreadFactory)
public:
	ForkJoinPool$DefaultForkJoinWorkerThreadFactory();
	void init$();
	virtual ::java::util::concurrent::ForkJoinWorkerThread* newThread(::java::util::concurrent::ForkJoinPool* pool) override;
	static ::java::security::AccessControlContext* ACC;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("ACC")

#endif // _java_util_concurrent_ForkJoinPool$DefaultForkJoinWorkerThreadFactory_h_