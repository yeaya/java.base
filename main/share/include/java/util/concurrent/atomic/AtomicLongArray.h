#ifndef _java_util_concurrent_atomic_AtomicLongArray_h_
#define _java_util_concurrent_atomic_AtomicLongArray_h_
//$ class java.util.concurrent.atomic.AtomicLongArray
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
			class LongBinaryOperator;
			class LongUnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class $import AtomicLongArray : public ::java::io::Serializable {
	$class(AtomicLongArray, 0, ::java::io::Serializable)
public:
	AtomicLongArray();
	void init$(int32_t length);
	void init$($longs* array);
	int64_t accumulateAndGet(int32_t i, int64_t x, ::java::util::function::LongBinaryOperator* accumulatorFunction);
	virtual int64_t addAndGet(int32_t i, int64_t delta);
	int64_t compareAndExchange(int32_t i, int64_t expectedValue, int64_t newValue);
	int64_t compareAndExchangeAcquire(int32_t i, int64_t expectedValue, int64_t newValue);
	int64_t compareAndExchangeRelease(int32_t i, int64_t expectedValue, int64_t newValue);
	bool compareAndSet(int32_t i, int64_t expectedValue, int64_t newValue);
	int64_t decrementAndGet(int32_t i);
	int64_t get(int32_t i);
	int64_t getAcquire(int32_t i);
	int64_t getAndAccumulate(int32_t i, int64_t x, ::java::util::function::LongBinaryOperator* accumulatorFunction);
	int64_t getAndAdd(int32_t i, int64_t delta);
	int64_t getAndDecrement(int32_t i);
	int64_t getAndIncrement(int32_t i);
	int64_t getAndSet(int32_t i, int64_t newValue);
	int64_t getAndUpdate(int32_t i, ::java::util::function::LongUnaryOperator* updateFunction);
	int64_t getOpaque(int32_t i);
	int64_t getPlain(int32_t i);
	int64_t incrementAndGet(int32_t i);
	void lazySet(int32_t i, int64_t newValue);
	int32_t length();
	void set(int32_t i, int64_t newValue);
	void setOpaque(int32_t i, int64_t newValue);
	void setPlain(int32_t i, int64_t newValue);
	void setRelease(int32_t i, int64_t newValue);
	virtual $String* toString() override;
	int64_t updateAndGet(int32_t i, ::java::util::function::LongUnaryOperator* updateFunction);
	bool weakCompareAndSet(int32_t i, int64_t expectedValue, int64_t newValue);
	bool weakCompareAndSetAcquire(int32_t i, int64_t expectedValue, int64_t newValue);
	bool weakCompareAndSetPlain(int32_t i, int64_t expectedValue, int64_t newValue);
	bool weakCompareAndSetRelease(int32_t i, int64_t expectedValue, int64_t newValue);
	bool weakCompareAndSetVolatile(int32_t i, int64_t expectedValue, int64_t newValue);
	static const int64_t serialVersionUID = (int64_t)0xDFF6CE0A62E2BFF8;
	static ::java::lang::invoke::VarHandle* AA;
	$longs* array = nullptr;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("AA")

#endif // _java_util_concurrent_atomic_AtomicLongArray_h_