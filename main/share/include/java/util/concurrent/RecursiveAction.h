#ifndef _java_util_concurrent_RecursiveAction_h_
#define _java_util_concurrent_RecursiveAction_h_
//$ class java.util.concurrent.RecursiveAction
//$ extends java.util.concurrent.ForkJoinTask

#include <java/util/concurrent/ForkJoinTask.h>

namespace java {
	namespace lang {
		class Void;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import RecursiveAction : public ::java::util::concurrent::ForkJoinTask {
	$class(RecursiveAction, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinTask)
public:
	RecursiveAction();
	void init$();
	virtual void compute() {}
	virtual bool exec() override;
	virtual $Object* getRawResult() override;
	void setRawResult(::java::lang::Void* mustBeNull);
	virtual void setRawResult(Object$* mustBeNull) override;
	static const int64_t serialVersionUID = (int64_t)0x489D6925990753CE;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_RecursiveAction_h_