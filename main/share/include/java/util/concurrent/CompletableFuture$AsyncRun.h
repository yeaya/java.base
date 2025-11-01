#ifndef _java_util_concurrent_CompletableFuture$AsyncRun_h_
#define _java_util_concurrent_CompletableFuture$AsyncRun_h_
//$ class java.util.concurrent.CompletableFuture$AsyncRun
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
			class CompletableFuture;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import CompletableFuture$AsyncRun : public ::java::util::concurrent::ForkJoinTask, public ::java::lang::Runnable, public ::java::util::concurrent::CompletableFuture$AsynchronousCompletionTask {
	$class(CompletableFuture$AsyncRun, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinTask, ::java::lang::Runnable, ::java::util::concurrent::CompletableFuture$AsynchronousCompletionTask)
public:
	CompletableFuture$AsyncRun();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::CompletableFuture* dep, ::java::lang::Runnable* fn);
	virtual bool exec() override;
	virtual $Object* getRawResult() override;
	virtual void run() override;
	void setRawResult(::java::lang::Void* v);
	virtual void setRawResult(Object$* v) override;
	virtual $String* toString() override;
	::java::util::concurrent::CompletableFuture* dep = nullptr;
	::java::lang::Runnable* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$AsyncRun_h_