#ifndef _java_util_concurrent_RecursiveTask_h_
#define _java_util_concurrent_RecursiveTask_h_
//$ class java.util.concurrent.RecursiveTask
//$ extends java.util.concurrent.ForkJoinTask

#include <java/util/concurrent/ForkJoinTask.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import RecursiveTask : public ::java::util::concurrent::ForkJoinTask {
	$class(RecursiveTask, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinTask)
public:
	RecursiveTask();
	void init$();
	virtual $Object* compute() {return nullptr;}
	virtual bool exec() override;
	virtual $Object* getRawResult() override;
	virtual void setRawResult(Object$* value) override;
	static const int64_t serialVersionUID = (int64_t)0x489D692599075496;
	$Object* result = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_RecursiveTask_h_