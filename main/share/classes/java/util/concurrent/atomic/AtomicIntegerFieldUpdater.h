#ifndef _java_util_concurrent_atomic_AtomicIntegerFieldUpdater_h_
#define _java_util_concurrent_atomic_AtomicIntegerFieldUpdater_h_
//$ class java.util.concurrent.atomic.AtomicIntegerFieldUpdater
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export AtomicIntegerFieldUpdater : public ::java::lang::Object {
	$class(AtomicIntegerFieldUpdater, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AtomicIntegerFieldUpdater();
	void init$();
	int32_t accumulateAndGet(Object$* obj, int32_t x, ::java::util::function::IntBinaryOperator* accumulatorFunction);
	virtual int32_t addAndGet(Object$* obj, int32_t delta);
	virtual bool compareAndSet(Object$* obj, int32_t expect, int32_t update) {return false;}
	virtual int32_t decrementAndGet(Object$* obj);
	virtual int32_t get(Object$* obj) {return 0;}
	int32_t getAndAccumulate(Object$* obj, int32_t x, ::java::util::function::IntBinaryOperator* accumulatorFunction);
	virtual int32_t getAndAdd(Object$* obj, int32_t delta);
	virtual int32_t getAndDecrement(Object$* obj);
	virtual int32_t getAndIncrement(Object$* obj);
	virtual int32_t getAndSet(Object$* obj, int32_t newValue);
	int32_t getAndUpdate(Object$* obj, ::java::util::function::IntUnaryOperator* updateFunction);
	virtual int32_t incrementAndGet(Object$* obj);
	virtual void lazySet(Object$* obj, int32_t newValue) {}
	static ::java::util::concurrent::atomic::AtomicIntegerFieldUpdater* newUpdater($Class* tclass, $String* fieldName);
	virtual void set(Object$* obj, int32_t newValue) {}
	int32_t updateAndGet(Object$* obj, ::java::util::function::IntUnaryOperator* updateFunction);
	virtual bool weakCompareAndSet(Object$* obj, int32_t expect, int32_t update) {return false;}
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_AtomicIntegerFieldUpdater_h_