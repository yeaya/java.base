#ifndef _SwapMicroBenchmark$Job_h_
#define _SwapMicroBenchmark$Job_h_
//$ class SwapMicroBenchmark$Job
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export SwapMicroBenchmark$Job : public ::java::lang::Object {
	$class(SwapMicroBenchmark$Job, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SwapMicroBenchmark$Job();
	void init$($String* name);
	virtual $String* name();
	virtual void work() {}
	$String* name$ = nullptr;
};

#endif // _SwapMicroBenchmark$Job_h_