#ifndef _java_util_concurrent_CyclicBarrier$Generation_h_
#define _java_util_concurrent_CyclicBarrier$Generation_h_
//$ class java.util.concurrent.CyclicBarrier$Generation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {

class CyclicBarrier$Generation : public ::java::lang::Object {
	$class(CyclicBarrier$Generation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CyclicBarrier$Generation();
	void init$();
	bool broken = false;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CyclicBarrier$Generation_h_