#ifndef _java_util_concurrent_atomic_AtomicReferenceArray_h_
#define _java_util_concurrent_atomic_AtomicReferenceArray_h_
//$ class java.util.concurrent.atomic.AtomicReferenceArray
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("AA")
#undef AA

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
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

class $import AtomicReferenceArray : public ::java::io::Serializable {
	$class(AtomicReferenceArray, 0, ::java::io::Serializable)
public:
	AtomicReferenceArray();
	void init$(int32_t length);
	void init$($ObjectArray* array);
	$Object* accumulateAndGet(int32_t i, Object$* x, ::java::util::function::BinaryOperator* accumulatorFunction);
	$Object* compareAndExchange(int32_t i, Object$* expectedValue, Object$* newValue);
	$Object* compareAndExchangeAcquire(int32_t i, Object$* expectedValue, Object$* newValue);
	$Object* compareAndExchangeRelease(int32_t i, Object$* expectedValue, Object$* newValue);
	bool compareAndSet(int32_t i, Object$* expectedValue, Object$* newValue);
	$Object* get(int32_t i);
	$Object* getAcquire(int32_t i);
	$Object* getAndAccumulate(int32_t i, Object$* x, ::java::util::function::BinaryOperator* accumulatorFunction);
	$Object* getAndSet(int32_t i, Object$* newValue);
	$Object* getAndUpdate(int32_t i, ::java::util::function::UnaryOperator* updateFunction);
	$Object* getOpaque(int32_t i);
	$Object* getPlain(int32_t i);
	static ::java::lang::reflect::Field* lambda$readObject$0();
	void lazySet(int32_t i, Object$* newValue);
	int32_t length();
	void readObject(::java::io::ObjectInputStream* s);
	void set(int32_t i, Object$* newValue);
	void setOpaque(int32_t i, Object$* newValue);
	void setPlain(int32_t i, Object$* newValue);
	void setRelease(int32_t i, Object$* newValue);
	virtual $String* toString() override;
	$Object* updateAndGet(int32_t i, ::java::util::function::UnaryOperator* updateFunction);
	bool weakCompareAndSet(int32_t i, Object$* expectedValue, Object$* newValue);
	bool weakCompareAndSetAcquire(int32_t i, Object$* expectedValue, Object$* newValue);
	bool weakCompareAndSetPlain(int32_t i, Object$* expectedValue, Object$* newValue);
	bool weakCompareAndSetRelease(int32_t i, Object$* expectedValue, Object$* newValue);
	bool weakCompareAndSetVolatile(int32_t i, Object$* expectedValue, Object$* newValue);
	static const int64_t serialVersionUID = (int64_t)0xA9D2DEA1BE65600C;
	static ::java::lang::invoke::VarHandle* AA;
	$ObjectArray* array = nullptr;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("AA")

#endif // _java_util_concurrent_atomic_AtomicReferenceArray_h_