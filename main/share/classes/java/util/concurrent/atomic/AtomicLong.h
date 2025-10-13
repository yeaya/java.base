#ifndef _java_util_concurrent_atomic_AtomicLong_h_
#define _java_util_concurrent_atomic_AtomicLong_h_
//$ class java.util.concurrent.atomic.AtomicLong
//$ extends java.lang.Number

#include <java/lang/Number.h>

#pragma push_macro("U")
#undef U
#pragma push_macro("VALUE")
#undef VALUE
#pragma push_macro("VM_SUPPORTS_LONG_CAS")
#undef VM_SUPPORTS_LONG_CAS

namespace java {
	namespace util {
		namespace function {
			class LongBinaryOperator;
			class LongUnaryOperator;
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

class $export AtomicLong : public ::java::lang::Number {
	$class(AtomicLong, 0, ::java::lang::Number)
public:
	AtomicLong();
	void init$(int64_t initialValue);
	void init$();
	static bool VMSupportsCS8();
	int64_t accumulateAndGet(int64_t x, ::java::util::function::LongBinaryOperator* accumulatorFunction);
	int64_t addAndGet(int64_t delta);
	int64_t compareAndExchange(int64_t expectedValue, int64_t newValue);
	int64_t compareAndExchangeAcquire(int64_t expectedValue, int64_t newValue);
	int64_t compareAndExchangeRelease(int64_t expectedValue, int64_t newValue);
	bool compareAndSet(int64_t expectedValue, int64_t newValue);
	int64_t decrementAndGet();
	virtual double doubleValue() override;
	virtual float floatValue() override;
	int64_t get();
	int64_t getAcquire();
	int64_t getAndAccumulate(int64_t x, ::java::util::function::LongBinaryOperator* accumulatorFunction);
	int64_t getAndAdd(int64_t delta);
	int64_t getAndDecrement();
	int64_t getAndIncrement();
	int64_t getAndSet(int64_t newValue);
	int64_t getAndUpdate(::java::util::function::LongUnaryOperator* updateFunction);
	int64_t getOpaque();
	int64_t getPlain();
	int64_t incrementAndGet();
	virtual int32_t intValue() override;
	void lazySet(int64_t newValue);
	virtual int64_t longValue() override;
	void set(int64_t newValue);
	void setOpaque(int64_t newValue);
	void setPlain(int64_t newValue);
	void setRelease(int64_t newValue);
	virtual $String* toString() override;
	int64_t updateAndGet(::java::util::function::LongUnaryOperator* updateFunction);
	bool weakCompareAndSet(int64_t expectedValue, int64_t newValue);
	bool weakCompareAndSetAcquire(int64_t expectedValue, int64_t newValue);
	bool weakCompareAndSetPlain(int64_t expectedValue, int64_t newValue);
	bool weakCompareAndSetRelease(int64_t expectedValue, int64_t newValue);
	bool weakCompareAndSetVolatile(int64_t expectedValue, int64_t newValue);
	static const int64_t serialVersionUID = (int64_t)0x1AC0FAB477001718;
	static bool VM_SUPPORTS_LONG_CAS;
	static ::jdk::internal::misc::Unsafe* U;
	static int64_t VALUE;
	$volatile(int64_t) value = 0;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("U")
#pragma pop_macro("VALUE")
#pragma pop_macro("VM_SUPPORTS_LONG_CAS")

#endif // _java_util_concurrent_atomic_AtomicLong_h_