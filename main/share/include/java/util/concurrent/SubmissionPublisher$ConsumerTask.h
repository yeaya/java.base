#ifndef _java_util_concurrent_SubmissionPublisher$ConsumerTask_h_
#define _java_util_concurrent_SubmissionPublisher$ConsumerTask_h_
//$ class java.util.concurrent.SubmissionPublisher$ConsumerTask
//$ extends java.util.concurrent.ForkJoinTask
//$ implements java.lang.Runnable,java.util.concurrent.CompletableFuture$AsynchronousCompletionTask

#include <java/lang/Runnable.h>
#include <java/util/concurrent/CompletableFuture$AsynchronousCompletionTask.h>
#include <java/util/concurrent/ForkJoinTask.h>

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class SubmissionPublisher$BufferedSubscription;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import SubmissionPublisher$ConsumerTask : public ::java::util::concurrent::ForkJoinTask, public ::java::lang::Runnable, public ::java::util::concurrent::CompletableFuture$AsynchronousCompletionTask {
	$class(SubmissionPublisher$ConsumerTask, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinTask, ::java::lang::Runnable, ::java::util::concurrent::CompletableFuture$AsynchronousCompletionTask)
public:
	SubmissionPublisher$ConsumerTask();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::SubmissionPublisher$BufferedSubscription* consumer);
	virtual bool exec() override;
	virtual $Object* getRawResult() override;
	virtual void run() override;
	void setRawResult(::java::lang::Void* v);
	virtual void setRawResult(Object$* v) override;
	virtual $String* toString() override;
	::java::util::concurrent::SubmissionPublisher$BufferedSubscription* consumer = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_SubmissionPublisher$ConsumerTask_h_