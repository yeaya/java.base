#ifndef _java_util_concurrent_ForkJoinPool$InvokeAnyTask_h_
#define _java_util_concurrent_ForkJoinPool$InvokeAnyTask_h_
//$ class java.util.concurrent.ForkJoinPool$InvokeAnyTask
//$ extends java.util.concurrent.ForkJoinTask

#include <java/util/concurrent/ForkJoinTask.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class ForkJoinPool$InvokeAnyRoot;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ForkJoinPool$InvokeAnyTask : public ::java::util::concurrent::ForkJoinTask {
	$class(ForkJoinPool$InvokeAnyTask, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinTask)
public:
	ForkJoinPool$InvokeAnyTask();
	void init$(::java::util::concurrent::ForkJoinPool$InvokeAnyRoot* root, ::java::util::concurrent::Callable* callable);
	virtual bool cancel(bool mayInterruptIfRunning) override;
	virtual bool exec() override;
	virtual $Object* getRawResult() override;
	virtual void setRawResult(Object$* v) override;
	static const int64_t serialVersionUID = (int64_t)0x2763FE86DCB18E30;
	::java::util::concurrent::ForkJoinPool$InvokeAnyRoot* root = nullptr;
	::java::util::concurrent::Callable* callable = nullptr;
	$volatile($Thread*) runner = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ForkJoinPool$InvokeAnyTask_h_