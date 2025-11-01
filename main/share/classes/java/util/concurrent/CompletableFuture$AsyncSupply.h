#ifndef _java_util_concurrent_CompletableFuture$AsyncSupply_h_
#define _java_util_concurrent_CompletableFuture$AsyncSupply_h_
//$ class java.util.concurrent.CompletableFuture$AsyncSupply
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
		namespace function {
			class Supplier;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export CompletableFuture$AsyncSupply : public ::java::util::concurrent::ForkJoinTask, public ::java::lang::Runnable, public ::java::util::concurrent::CompletableFuture$AsynchronousCompletionTask {
	$class(CompletableFuture$AsyncSupply, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinTask, ::java::lang::Runnable, ::java::util::concurrent::CompletableFuture$AsynchronousCompletionTask)
public:
	CompletableFuture$AsyncSupply();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::CompletableFuture* dep, ::java::util::function::Supplier* fn);
	virtual bool exec() override;
	virtual $Object* getRawResult() override;
	virtual void run() override;
	void setRawResult(::java::lang::Void* v);
	virtual void setRawResult(Object$* v) override;
	virtual $String* toString() override;
	::java::util::concurrent::CompletableFuture* dep = nullptr;
	::java::util::function::Supplier* fn = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CompletableFuture$AsyncSupply_h_