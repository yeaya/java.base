#ifndef _java_util_concurrent_atomic_AtomicInteger_h_
#define _java_util_concurrent_atomic_AtomicInteger_h_
//$ class java.util.concurrent.atomic.AtomicInteger
//$ extends java.lang.Number

#include <java/lang/Number.h>

#pragma push_macro("U")
#undef U
#pragma push_macro("VALUE")
#undef VALUE

namespace java {
	namespace util {
		namespace function {
			class IntBinaryOperator;
			class IntUnaryOperator;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class $export AtomicInteger : public ::java::lang::Number {
	$class(AtomicInteger, $PRELOAD, ::java::lang::Number)
public:
	AtomicInteger();
	void init$(int32_t initialValue);
	void init$();
	int32_t accumulateAndGet(int32_t x, ::java::util::function::IntBinaryOperator* accumulatorFunction);
	int32_t addAndGet(int32_t delta);
	int32_t compareAndExchange(int32_t expectedValue, int32_t newValue);
	int32_t compareAndExchangeAcquire(int32_t expectedValue, int32_t newValue);
	int32_t compareAndExchangeRelease(int32_t expectedValue, int32_t newValue);
	bool compareAndSet(int32_t expectedValue, int32_t newValue);
	int32_t decrementAndGet();
	virtual double doubleValue() override;
	virtual float floatValue() override;
	int32_t get();
	int32_t getAcquire();
	int32_t getAndAccumulate(int32_t x, ::java::util::function::IntBinaryOperator* accumulatorFunction);
	int32_t getAndAdd(int32_t delta);
	int32_t getAndDecrement();
	int32_t getAndIncrement();
	int32_t getAndSet(int32_t newValue);
	int32_t getAndUpdate(::java::util::function::IntUnaryOperator* updateFunction);
	int32_t getOpaque();
	int32_t getPlain();
	int32_t incrementAndGet();
	virtual int32_t intValue() override;
	void lazySet(int32_t newValue);
	virtual int64_t longValue() override;
	void set(int32_t newValue);
	void setOpaque(int32_t newValue);
	void setPlain(int32_t newValue);
	void setRelease(int32_t newValue);
	virtual $String* toString() override;
	int32_t updateAndGet(::java::util::function::IntUnaryOperator* updateFunction);
	bool weakCompareAndSet(int32_t expectedValue, int32_t newValue);
	bool weakCompareAndSetAcquire(int32_t expectedValue, int32_t newValue);
	bool weakCompareAndSetPlain(int32_t expectedValue, int32_t newValue);
	bool weakCompareAndSetRelease(int32_t expectedValue, int32_t newValue);
	bool weakCompareAndSetVolatile(int32_t expectedValue, int32_t newValue);
	static const int64_t serialVersionUID = (int64_t)0x563F5ECC8C6C168A;
	static ::jdk::internal::misc::Unsafe* U;
	static int64_t VALUE;
	$volatile(int32_t) value = 0;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("U")
#pragma pop_macro("VALUE")

#endif // _java_util_concurrent_atomic_AtomicInteger_h_