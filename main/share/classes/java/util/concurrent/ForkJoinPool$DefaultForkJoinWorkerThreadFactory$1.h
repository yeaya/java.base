#ifndef _java_util_concurrent_ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_h_
#define _java_util_concurrent_ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_h_
//$ class java.util.concurrent.ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ForkJoinPool;
			class ForkJoinPool$DefaultForkJoinWorkerThreadFactory;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1 : public ::java::security::PrivilegedAction {
	$class(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1();
	void init$(::java::util::concurrent::ForkJoinPool$DefaultForkJoinWorkerThreadFactory* this$0, ::java::util::concurrent::ForkJoinPool* val$pool);
	virtual $Object* run() override;
	::java::util::concurrent::ForkJoinPool$DefaultForkJoinWorkerThreadFactory* this$0 = nullptr;
	::java::util::concurrent::ForkJoinPool* val$pool = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_h_