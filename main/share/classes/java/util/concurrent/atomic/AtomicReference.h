#ifndef _java_util_concurrent_atomic_AtomicReference_h_
#define _java_util_concurrent_atomic_AtomicReference_h_
//$ class java.util.concurrent.atomic.AtomicReference
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

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

class $export AtomicReference : public ::java::io::Serializable {
	$class(AtomicReference, 0, ::java::io::Serializable)
public:
	AtomicReference();
	void init$(Object$* initialValue);
	void init$();
	$Object* accumulateAndGet(Object$* x, ::java::util::function::BinaryOperator* accumulatorFunction);
	$Object* compareAndExchange(Object$* expectedValue, Object$* newValue);
	$Object* compareAndExchangeAcquire(Object$* expectedValue, Object$* newValue);
	$Object* compareAndExchangeRelease(Object$* expectedValue, Object$* newValue);
	bool compareAndSet(Object$* expectedValue, Object$* newValue);
	$Object* get();
	$Object* getAcquire();
	$Object* getAndAccumulate(Object$* x, ::java::util::function::BinaryOperator* accumulatorFunction);
	$Object* getAndSet(Object$* newValue);
	$Object* getAndUpdate(::java::util::function::UnaryOperator* updateFunction);
	$Object* getOpaque();
	$Object* getPlain();
	void lazySet(Object$* newValue);
	void set(Object$* newValue);
	void setOpaque(Object$* newValue);
	void setPlain(Object$* newValue);
	void setRelease(Object$* newValue);
	virtual $String* toString() override;
	$Object* updateAndGet(::java::util::function::UnaryOperator* updateFunction);
	bool weakCompareAndSet(Object$* expectedValue, Object$* newValue);
	bool weakCompareAndSetAcquire(Object$* expectedValue, Object$* newValue);
	bool weakCompareAndSetPlain(Object$* expectedValue, Object$* newValue);
	bool weakCompareAndSetRelease(Object$* expectedValue, Object$* newValue);
	bool weakCompareAndSetVolatile(Object$* expectedValue, Object$* newValue);
	static const int64_t serialVersionUID = (int64_t)0xE65771D4557854C6;
	static ::java::lang::invoke::VarHandle* VALUE;
	$volatile($Object*) value = nullptr;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("VALUE")

#endif // _java_util_concurrent_atomic_AtomicReference_h_