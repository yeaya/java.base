#ifndef _Destroy$Task_h_
#define _Destroy$Task_h_
//$ class Destroy$Task
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
			class Semaphore;
		}
	}
}

class $export Destroy$Task : public ::java::lang::Runnable {
	$class(Destroy$Task, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Destroy$Task();
	void init$(::java::util::concurrent::Semaphore* sem, ::java::util::concurrent::CountDownLatch* count);
	virtual void run() override;
	::java::util::concurrent::Semaphore* sem = nullptr;
	::java::util::concurrent::CountDownLatch* count = nullptr;
};

#endif // _Destroy$Task_h_