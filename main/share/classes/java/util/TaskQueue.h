#ifndef _java_util_TaskQueue_h_
#define _java_util_TaskQueue_h_
//$ class java.util.TaskQueue
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class TimerTask;
	}
}

namespace java {
	namespace util {

class TaskQueue : public ::java::lang::Object {
	$class(TaskQueue, 0, ::java::lang::Object)
public:
	TaskQueue();
	void init$();
	virtual void add(::java::util::TimerTask* task);
	virtual void clear();
	void fixDown(int32_t k);
	void fixUp(int32_t k);
	virtual ::java::util::TimerTask* get(int32_t i);
	virtual ::java::util::TimerTask* getMin();
	virtual void heapify();
	virtual bool isEmpty();
	virtual void quickRemove(int32_t i);
	virtual void removeMin();
	virtual void rescheduleMin(int64_t newTime);
	virtual int32_t size();
	static bool $assertionsDisabled;
	$Array<::java::util::TimerTask>* queue = nullptr;
	int32_t size$ = 0;
};

	} // util
} // java

#endif // _java_util_TaskQueue_h_