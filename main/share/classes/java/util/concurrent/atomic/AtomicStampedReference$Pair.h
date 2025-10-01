#ifndef _java_util_concurrent_atomic_AtomicStampedReference$Pair_h_
#define _java_util_concurrent_atomic_AtomicStampedReference$Pair_h_
//$ class java.util.concurrent.atomic.AtomicStampedReference$Pair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class AtomicStampedReference$Pair : public ::java::lang::Object {
	$class(AtomicStampedReference$Pair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AtomicStampedReference$Pair();
	void init$(Object$* reference, int32_t stamp);
	static ::java::util::concurrent::atomic::AtomicStampedReference$Pair* of(Object$* reference, int32_t stamp);
	$Object* reference = nullptr;
	int32_t stamp = 0;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_AtomicStampedReference$Pair_h_