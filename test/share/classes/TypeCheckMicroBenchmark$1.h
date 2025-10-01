#ifndef _TypeCheckMicroBenchmark$1_h_
#define _TypeCheckMicroBenchmark$1_h_
//$ class TypeCheckMicroBenchmark$1
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class TypeCheckMicroBenchmark$1 : public ::java::lang::Object {
	$class(TypeCheckMicroBenchmark$1, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeCheckMicroBenchmark$1();
	void init$(::java::util::concurrent::CountDownLatch* val$drained);
	virtual void finalize() override;
	::java::util::concurrent::CountDownLatch* val$drained = nullptr;
};

#endif // _TypeCheckMicroBenchmark$1_h_