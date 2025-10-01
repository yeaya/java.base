#ifndef _SwapMicroBenchmark$1_h_
#define _SwapMicroBenchmark$1_h_
//$ class SwapMicroBenchmark$1
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class SwapMicroBenchmark$1 : public ::java::lang::Object {
	$class(SwapMicroBenchmark$1, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	SwapMicroBenchmark$1();
	void init$(::java::util::concurrent::CountDownLatch* val$drained);
	virtual void finalize() override;
	::java::util::concurrent::CountDownLatch* val$drained = nullptr;
};

#endif // _SwapMicroBenchmark$1_h_