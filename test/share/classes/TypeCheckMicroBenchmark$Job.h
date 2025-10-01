#ifndef _TypeCheckMicroBenchmark$Job_h_
#define _TypeCheckMicroBenchmark$Job_h_
//$ class TypeCheckMicroBenchmark$Job
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export TypeCheckMicroBenchmark$Job : public ::java::lang::Object {
	$class(TypeCheckMicroBenchmark$Job, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeCheckMicroBenchmark$Job();
	void init$($String* name);
	virtual $String* name();
	virtual void work() {}
	$String* name$ = nullptr;
};

#endif // _TypeCheckMicroBenchmark$Job_h_