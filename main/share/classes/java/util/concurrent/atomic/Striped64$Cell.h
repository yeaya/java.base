#ifndef _java_util_concurrent_atomic_Striped64$Cell_h_
#define _java_util_concurrent_atomic_Striped64$Cell_h_
//$ class java.util.concurrent.atomic.Striped64$Cell
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("VALUE")
#undef VALUE

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class Striped64$Cell : public ::java::lang::Object {
	$class(Striped64$Cell, 0, ::java::lang::Object)
public:
	Striped64$Cell();
	void init$(int64_t x);
	bool cas(int64_t cmp, int64_t val);
	int64_t getAndSet(int64_t val);
	void reset();
	void reset(int64_t identity);
	$volatile(int64_t) value = 0;
	static ::java::lang::invoke::VarHandle* VALUE;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("VALUE")

#endif // _java_util_concurrent_atomic_Striped64$Cell_h_