#ifndef _DynamicConstantDescTest$Task_h_
#define _DynamicConstantDescTest$Task_h_
//$ class DynamicConstantDescTest$Task
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class DynamicConstantDescTest$Task : public ::java::util::concurrent::Callable {
	$class(DynamicConstantDescTest$Task, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	DynamicConstantDescTest$Task();
	void init$($String* className, ::java::util::concurrent::CountDownLatch* latch);
	virtual $Object* call() override;
	$String* className = nullptr;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
};

#endif // _DynamicConstantDescTest$Task_h_