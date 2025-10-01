#ifndef _java_util_concurrent_ForkJoinPool$InvokeAnyRoot_h_
#define _java_util_concurrent_ForkJoinPool$InvokeAnyRoot_h_
//$ class java.util.concurrent.ForkJoinPool$InvokeAnyRoot
//$ extends java.util.concurrent.ForkJoinTask

#include <java/util/concurrent/ForkJoinTask.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class ForkJoinPool;
		}
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

class $export ForkJoinPool$InvokeAnyRoot : public ::java::util::concurrent::ForkJoinTask {
	$class(ForkJoinPool$InvokeAnyRoot, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinTask)
public:
	ForkJoinPool$InvokeAnyRoot();
	void init$(int32_t n, ::java::util::concurrent::ForkJoinPool* p);
	virtual bool exec() override;
	virtual $Object* getRawResult() override;
	virtual void setRawResult(Object$* v) override;
	void tryComplete(::java::util::concurrent::Callable* c);
	static const int64_t serialVersionUID = (int64_t)0x2763FE86DCB18E30;
	$volatile($Object*) result = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* count = nullptr;
	::java::util::concurrent::ForkJoinPool* pool = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ForkJoinPool$InvokeAnyRoot_h_