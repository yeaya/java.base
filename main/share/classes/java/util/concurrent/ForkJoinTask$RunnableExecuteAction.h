#ifndef _java_util_concurrent_ForkJoinTask$RunnableExecuteAction_h_
#define _java_util_concurrent_ForkJoinTask$RunnableExecuteAction_h_
//$ class java.util.concurrent.ForkJoinTask$RunnableExecuteAction
//$ extends java.util.concurrent.ForkJoinTask

#include <java/util/concurrent/ForkJoinTask.h>

namespace java {
	namespace lang {
		class Runnable;
		class Throwable;
		class Void;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ForkJoinTask$RunnableExecuteAction : public ::java::util::concurrent::ForkJoinTask {
	$class(ForkJoinTask$RunnableExecuteAction, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinTask)
public:
	ForkJoinTask$RunnableExecuteAction();
	void init$(::java::lang::Runnable* runnable);
	virtual bool exec() override;
	virtual $Object* getRawResult() override;
	void setRawResult(::java::lang::Void* v);
	virtual void setRawResult(Object$* v) override;
	virtual int32_t trySetException($Throwable* ex) override;
	::java::lang::Runnable* runnable = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x489D6925990D6E4E;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ForkJoinTask$RunnableExecuteAction_h_