#ifndef _java_util_concurrent_atomic_AtomicReferenceFieldUpdater_h_
#define _java_util_concurrent_atomic_AtomicReferenceFieldUpdater_h_
//$ class java.util.concurrent.atomic.AtomicReferenceFieldUpdater
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class BinaryOperator;
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {

class $import AtomicReferenceFieldUpdater : public ::java::lang::Object {
	$class(AtomicReferenceFieldUpdater, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AtomicReferenceFieldUpdater();
	void init$();
	$Object* accumulateAndGet(Object$* obj, Object$* x, ::java::util::function::BinaryOperator* accumulatorFunction);
	virtual bool compareAndSet(Object$* obj, Object$* expect, Object$* update) {return false;}
	virtual $Object* get(Object$* obj) {return nullptr;}
	$Object* getAndAccumulate(Object$* obj, Object$* x, ::java::util::function::BinaryOperator* accumulatorFunction);
	virtual $Object* getAndSet(Object$* obj, Object$* newValue);
	$Object* getAndUpdate(Object$* obj, ::java::util::function::UnaryOperator* updateFunction);
	virtual void lazySet(Object$* obj, Object$* newValue) {}
	static ::java::util::concurrent::atomic::AtomicReferenceFieldUpdater* newUpdater($Class* tclass, $Class* vclass, $String* fieldName);
	virtual void set(Object$* obj, Object$* newValue) {}
	$Object* updateAndGet(Object$* obj, ::java::util::function::UnaryOperator* updateFunction);
	virtual bool weakCompareAndSet(Object$* obj, Object$* expect, Object$* update) {return false;}
};

			} // atomic
		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_atomic_AtomicReferenceFieldUpdater_h_