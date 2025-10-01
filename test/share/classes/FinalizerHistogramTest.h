#ifndef _FinalizerHistogramTest_h_
#define _FinalizerHistogramTest_h_
//$ class FinalizerHistogramTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}

class $export FinalizerHistogramTest : public ::java::lang::Object {
	$class(FinalizerHistogramTest, 0, ::java::lang::Object)
public:
	FinalizerHistogramTest();
	void init$();
	static void main($StringArray* argvs);
	static ::java::util::concurrent::locks::ReentrantLock* lock;
	static $volatile(int32_t) wasInitialized;
	static $volatile(int32_t) wasTrapped;
	static const int32_t objectsCount = 1000;
};

#endif // _FinalizerHistogramTest_h_