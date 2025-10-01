#ifndef _java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_h_
#define _java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_h_
//$ class java.util.concurrent.ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr
//$ extends java.util.Iterator

#include <java/lang/Array.h>
#include <java/util/Iterator.h>

namespace java {
	namespace util {
		namespace concurrent {
			class RunnableScheduledFuture;
			class ScheduledThreadPoolExecutor$DelayedWorkQueue;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr : public ::java::util::Iterator {
	$class(ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr();
	void init$(::java::util::concurrent::ScheduledThreadPoolExecutor$DelayedWorkQueue* this$0, $Array<::java::util::concurrent::RunnableScheduledFuture>* array);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::concurrent::ScheduledThreadPoolExecutor$DelayedWorkQueue* this$0 = nullptr;
	$Array<::java::util::concurrent::RunnableScheduledFuture>* array = nullptr;
	int32_t cursor = 0;
	int32_t lastRet = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue$Itr_h_