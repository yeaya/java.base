#ifndef _SwapMicroBenchmark$4_h_
#define _SwapMicroBenchmark$4_h_
//$ class SwapMicroBenchmark$4
//$ extends SwapMicroBenchmark$Job

#include <SwapMicroBenchmark$Job.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class SwapMicroBenchmark$4 : public ::SwapMicroBenchmark$Job {
	$class(SwapMicroBenchmark$4, $NO_CLASS_INIT, ::SwapMicroBenchmark$Job)
public:
	SwapMicroBenchmark$4();
	void init$($String* name, ::java::nio::ByteBuffer* val$b, int32_t val$iterations);
	virtual void work() override;
	int32_t val$iterations = 0;
	::java::nio::ByteBuffer* val$b = nullptr;
};

#endif // _SwapMicroBenchmark$4_h_