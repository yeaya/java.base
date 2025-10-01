#ifndef _SwapMicroBenchmark$3_h_
#define _SwapMicroBenchmark$3_h_
//$ class SwapMicroBenchmark$3
//$ extends SwapMicroBenchmark$Job

#include <SwapMicroBenchmark$Job.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class SwapMicroBenchmark$3 : public ::SwapMicroBenchmark$Job {
	$class(SwapMicroBenchmark$3, $NO_CLASS_INIT, ::SwapMicroBenchmark$Job)
public:
	SwapMicroBenchmark$3();
	void init$($String* name, ::java::nio::ByteBuffer* val$b, int32_t val$iterations);
	virtual void work() override;
	int32_t val$iterations = 0;
	::java::nio::ByteBuffer* val$b = nullptr;
};

#endif // _SwapMicroBenchmark$3_h_