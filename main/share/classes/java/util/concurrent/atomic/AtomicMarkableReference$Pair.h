#ifndef _java_util_concurrent_atomic_AtomicMarkableReference$Pair_h_
#define _java_util_concurrent_atomic_AtomicMarkableReference$Pair_h_
//$ class java.util.concurrent.atomic.AtomicMarkableReference$Pair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class AtomicMarkableReference$Pair : public ::java::lang::Object {
	$class(AtomicMarkableReference$Pair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AtomicMarkableReference$Pair();
	void init$(Object$* reference, bool mark);
	static ::java::util::concurrent::atomic::AtomicMarkableReference$Pair* of(Object$* reference, bool mark);
	$Object* reference = nullptr;
	bool mark = false;
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_AtomicMarkableReference$Pair_h_