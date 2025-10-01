#ifndef _java_util_concurrent_CountedCompleter_h_
#define _java_util_concurrent_CountedCompleter_h_
//$ class java.util.concurrent.CountedCompleter
//$ extends java.util.concurrent.ForkJoinTask

#include <java/util/concurrent/ForkJoinTask.h>

#pragma push_macro("PENDING")
#undef PENDING

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import CountedCompleter : public ::java::util::concurrent::ForkJoinTask {
	$class(CountedCompleter, 0, ::java::util::concurrent::ForkJoinTask)
public:
	CountedCompleter();
	void init$(::java::util::concurrent::CountedCompleter* completer, int32_t initialPendingCount);
	void init$(::java::util::concurrent::CountedCompleter* completer);
	void init$();
	void addToPendingCount(int32_t delta);
	bool compareAndSetPendingCount(int32_t expected, int32_t count);
	virtual void complete(Object$* rawResult) override;
	virtual void compute() {}
	int32_t decrementPendingCountUnlessZero();
	virtual bool exec() override;
	::java::util::concurrent::CountedCompleter* firstComplete();
	::java::util::concurrent::CountedCompleter* getCompleter();
	int32_t getPendingCount();
	virtual $Object* getRawResult() override;
	::java::util::concurrent::CountedCompleter* getRoot();
	void helpComplete(int32_t maxTasks);
	::java::util::concurrent::CountedCompleter* nextComplete();
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* caller);
	virtual bool onExceptionalCompletion($Throwable* ex, ::java::util::concurrent::CountedCompleter* caller);
	void propagateCompletion();
	void quietlyCompleteRoot();
	void setPendingCount(int32_t count);
	virtual void setRawResult(Object$* t) override;
	void tryComplete();
	virtual int32_t trySetException($Throwable* ex) override;
	bool weakCompareAndSetPendingCount(int32_t expected, int32_t count);
	static const int64_t serialVersionUID = (int64_t)0x489D68F7081983CE;
	::java::util::concurrent::CountedCompleter* completer = nullptr;
	$volatile(int32_t) pending = 0;
	static ::java::lang::invoke::VarHandle* PENDING;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("PENDING")

#endif // _java_util_concurrent_CountedCompleter_h_