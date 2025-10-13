#ifndef _java_util_concurrent_atomic_Striped64_h_
#define _java_util_concurrent_atomic_Striped64_h_
//$ class java.util.concurrent.atomic.Striped64
//$ extends java.lang.Number

#include <java/lang/Array.h>
#include <java/lang/Number.h>

#pragma push_macro("BASE")
#undef BASE
#pragma push_macro("CELLSBUSY")
#undef CELLSBUSY
#pragma push_macro("NCPU")
#undef NCPU
#pragma push_macro("THREAD_PROBE")
#undef THREAD_PROBE

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
				class Striped64$Cell;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleBinaryOperator;
			class LongBinaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class $export Striped64 : public ::java::lang::Number {
	$class(Striped64, 0, ::java::lang::Number)
public:
	Striped64();
	void init$();
	static int32_t advanceProbe(int32_t probe);
	static int64_t apply(::java::util::function::DoubleBinaryOperator* fn, int64_t v, double x);
	bool casBase(int64_t cmp, int64_t val);
	bool casCellsBusy();
	void doubleAccumulate(double x, ::java::util::function::DoubleBinaryOperator* fn, bool wasUncontended, int32_t index);
	int64_t getAndSetBase(int64_t val);
	static int32_t getProbe();
	void longAccumulate(int64_t x, ::java::util::function::LongBinaryOperator* fn, bool wasUncontended, int32_t index);
	static int32_t NCPU;
	$volatile($Array<::java::util::concurrent::atomic::Striped64$Cell>*) cells = nullptr;
	$volatile(int64_t) base = 0;
	$volatile(int32_t) cellsBusy = 0;
	static ::java::lang::invoke::VarHandle* BASE;
	static ::java::lang::invoke::VarHandle* CELLSBUSY;
	static ::java::lang::invoke::VarHandle* THREAD_PROBE;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("BASE")
#pragma pop_macro("CELLSBUSY")
#pragma pop_macro("NCPU")
#pragma pop_macro("THREAD_PROBE")

#endif // _java_util_concurrent_atomic_Striped64_h_