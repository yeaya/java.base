#ifndef _java_util_concurrent_atomic_AtomicLongFieldUpdater_h_
#define _java_util_concurrent_atomic_AtomicLongFieldUpdater_h_
//$ class java.util.concurrent.atomic.AtomicLongFieldUpdater
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
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

class $import AtomicLongFieldUpdater : public ::java::lang::Object {
	$class(AtomicLongFieldUpdater, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AtomicLongFieldUpdater();
	void init$();
	int64_t accumulateAndGet(Object$* obj, int64_t x, ::java::util::function::LongBinaryOperator* accumulatorFunction);
	virtual int64_t addAndGet(Object$* obj, int64_t delta);
	virtual bool compareAndSet(Object$* obj, int64_t expect, int64_t update) {return false;}
	virtual int64_t decrementAndGet(Object$* obj);
	virtual int64_t get(Object$* obj) {return 0;}
	int64_t getAndAccumulate(Object$* obj, int64_t x, ::java::util::function::LongBinaryOperator* accumulatorFunction);
	virtual int64_t getAndAdd(Object$* obj, int64_t delta);
	virtual int64_t getAndDecrement(Object$* obj);
	virtual int64_t getAndIncrement(Object$* obj);
	virtual int64_t getAndSet(Object$* obj, int64_t newValue);
	int64_t getAndUpdate(Object$* obj, ::java::util::function::LongUnaryOperator* updateFunction);
	virtual int64_t incrementAndGet(Object$* obj);
	static bool isAncestor(::java::lang::ClassLoader* first, ::java::lang::ClassLoader* second);
	static bool isSamePackage($Class* class1, $Class* class2);
	virtual void lazySet(Object$* obj, int64_t newValue) {}
	static ::java::util::concurrent::atomic::AtomicLongFieldUpdater* newUpdater($Class* tclass, $String* fieldName);
	virtual void set(Object$* obj, int64_t newValue) {}
	int64_t updateAndGet(Object$* obj, ::java::util::function::LongUnaryOperator* updateFunction);
	virtual bool weakCompareAndSet(Object$* obj, int64_t expect, int64_t update) {return false;}
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_AtomicLongFieldUpdater_h_