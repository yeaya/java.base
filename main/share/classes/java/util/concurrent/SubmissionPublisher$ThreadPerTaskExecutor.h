#ifndef _java_util_concurrent_SubmissionPublisher$ThreadPerTaskExecutor_h_
#define _java_util_concurrent_SubmissionPublisher$ThreadPerTaskExecutor_h_
//$ class java.util.concurrent.SubmissionPublisher$ThreadPerTaskExecutor
//$ extends java.util.concurrent.Executor

#include <java/util/concurrent/Executor.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class SubmissionPublisher$ThreadPerTaskExecutor : public ::java::util::concurrent::Executor {
	$class(SubmissionPublisher$ThreadPerTaskExecutor, $NO_CLASS_INIT, ::java::util::concurrent::Executor)
public:
	SubmissionPublisher$ThreadPerTaskExecutor();
	void init$();
	virtual void execute(::java::lang::Runnable* r) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_SubmissionPublisher$ThreadPerTaskExecutor_h_