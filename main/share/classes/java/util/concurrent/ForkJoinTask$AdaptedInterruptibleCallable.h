#ifndef _java_util_concurrent_ForkJoinTask$AdaptedInterruptibleCallable_h_
#define _java_util_concurrent_ForkJoinTask$AdaptedInterruptibleCallable_h_
//$ class java.util.concurrent.ForkJoinTask$AdaptedInterruptibleCallable
//$ extends java.util.concurrent.ForkJoinTask
//$ implements java.util.concurrent.RunnableFuture

#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/RunnableFuture.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ForkJoinTask$AdaptedInterruptibleCallable : public ::java::util::concurrent::ForkJoinTask, public ::java::util::concurrent::RunnableFuture {
	$class(ForkJoinTask$AdaptedInterruptibleCallable, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinTask, ::java::util::concurrent::RunnableFuture)
public:
	ForkJoinTask$AdaptedInterruptibleCallable();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $Object* get() override;
	virtual $Object* get(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::Callable* callable);
	virtual bool cancel(bool mayInterruptIfRunning) override;
	virtual bool exec() override;
	virtual $Object* getRawResult() override;
	virtual bool isCancelled() override;
	virtual bool isDone() override;
	virtual void run() override;
	virtual void setRawResult(Object$* v) override;
	virtual $String* toString() override;
	::java::util::concurrent::Callable* callable = nullptr;
	$volatile($Thread*) runner = nullptr;
	$Object* result = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x2763FE86DCB18E30;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ForkJoinTask$AdaptedInterruptibleCallable_h_