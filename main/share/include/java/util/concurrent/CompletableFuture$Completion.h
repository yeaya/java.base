#ifndef _java_util_concurrent_CompletableFuture$Completion_h_
#define _java_util_concurrent_CompletableFuture$Completion_h_
//$ class java.util.concurrent.CompletableFuture$Completion
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

class $import CompletableFuture$Completion : public ::java::util::concurrent::ForkJoinTask, public ::java::lang::Runnable, public ::java::util::concurrent::CompletableFuture$AsynchronousCompletionTask {
	$class(CompletableFuture$Completion, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinTask, ::java::lang::Runnable, ::java::util::concurrent::CompletableFuture$AsynchronousCompletionTask)
public:
	CompletableFuture$Completion();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool exec() override;
	virtual $Object* getRawResult() override;
	virtual bool isLive() {return false;}
	virtual void run() override;
	void setRawResult(::java::lang::Void* v);
	virtual void setRawResult(Object$* v) override;
	virtual $String* toString() override;
	virtual ::java::util::concurrent::CompletableFuture* tryFire(int32_t mode) {return nullptr;}
	$volatile(::java::util::concurrent::CompletableFuture$Completion*) next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$Completion_h_