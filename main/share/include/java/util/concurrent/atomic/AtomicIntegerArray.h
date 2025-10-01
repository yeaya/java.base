#ifndef _java_util_concurrent_atomic_AtomicIntegerArray_h_
#define _java_util_concurrent_atomic_AtomicIntegerArray_h_
//$ class java.util.concurrent.atomic.AtomicIntegerArray
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("AA")
#undef AA

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntBinaryOperator;
			class IntUnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class $import AtomicIntegerArray : public ::java::io::Serializable {
	$class(AtomicIntegerArray, 0, ::java::io::Serializable)
public:
	AtomicIntegerArray();
	void init$(int32_t length);
	void init$($ints* array);
	int32_t accumulateAndGet(int32_t i, int32_t x, ::java::util::function::IntBinaryOperator* accumulatorFunction);
	int32_t addAndGet(int32_t i, int32_t delta);
	int32_t compareAndExchange(int32_t i, int32_t expectedValue, int32_t newValue);
	int32_t compareAndExchangeAcquire(int32_t i, int32_t expectedValue, int32_t newValue);
	int32_t compareAndExchangeRelease(int32_t i, int32_t expectedValue, int32_t newValue);
	bool compareAndSet(int32_t i, int32_t expectedValue, int32_t newValue);
	int32_t decrementAndGet(int32_t i);
	int32_t get(int32_t i);
	int32_t getAcquire(int32_t i);
	int32_t getAndAccumulate(int32_t i, int32_t x, ::java::util::function::IntBinaryOperator* accumulatorFunction);
	int32_t getAndAdd(int32_t i, int32_t delta);
	int32_t getAndDecrement(int32_t i);
	int32_t getAndIncrement(int32_t i);
	int32_t getAndSet(int32_t i, int32_t newValue);
	int32_t getAndUpdate(int32_t i, ::java::util::function::IntUnaryOperator* updateFunction);
	int32_t getOpaque(int32_t i);
	int32_t getPlain(int32_t i);
	int32_t incrementAndGet(int32_t i);
	void lazySet(int32_t i, int32_t newValue);
	int32_t length();
	void set(int32_t i, int32_t newValue);
	void setOpaque(int32_t i, int32_t newValue);
	void setPlain(int32_t i, int32_t newValue);
	void setRelease(int32_t i, int32_t newValue);
	virtual $String* toString() override;
	int32_t updateAndGet(int32_t i, ::java::util::function::IntUnaryOperator* updateFunction);
	bool weakCompareAndSet(int32_t i, int32_t expectedValue, int32_t newValue);
	bool weakCompareAndSetAcquire(int32_t i, int32_t expectedValue, int32_t newValue);
	bool weakCompareAndSetPlain(int32_t i, int32_t expectedValue, int32_t newValue);
	bool weakCompareAndSetRelease(int32_t i, int32_t expectedValue, int32_t newValue);
	bool weakCompareAndSetVolatile(int32_t i, int32_t expectedValue, int32_t newValue);
	static const int64_t serialVersionUID = (int64_t)0x27B857513300BD8B;
	static ::java::lang::invoke::VarHandle* AA;
	$ints* array = nullptr;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("AA")

#endif // _java_util_concurrent_atomic_AtomicIntegerArray_h_