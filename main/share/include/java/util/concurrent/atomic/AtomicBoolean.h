#ifndef _java_util_concurrent_atomic_AtomicBoolean_h_
#define _java_util_concurrent_atomic_AtomicBoolean_h_
//$ class java.util.concurrent.atomic.AtomicBoolean
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
		namespace concurrent {
			namespace atomic {

class $import AtomicBoolean : public ::java::io::Serializable {
	$class(AtomicBoolean, 0, ::java::io::Serializable)
public:
	AtomicBoolean();
	void init$(bool initialValue);
	void init$();
	bool compareAndExchange(bool expectedValue, bool newValue);
	bool compareAndExchangeAcquire(bool expectedValue, bool newValue);
	bool compareAndExchangeRelease(bool expectedValue, bool newValue);
	bool compareAndSet(bool expectedValue, bool newValue);
	bool get();
	bool getAcquire();
	bool getAndSet(bool newValue);
	bool getOpaque();
	bool getPlain();
	void lazySet(bool newValue);
	void set(bool newValue);
	void setOpaque(bool newValue);
	void setPlain(bool newValue);
	void setRelease(bool newValue);
	virtual $String* toString() override;
	virtual bool weakCompareAndSet(bool expectedValue, bool newValue);
	bool weakCompareAndSetAcquire(bool expectedValue, bool newValue);
	virtual bool weakCompareAndSetPlain(bool expectedValue, bool newValue);
	bool weakCompareAndSetRelease(bool expectedValue, bool newValue);
	bool weakCompareAndSetVolatile(bool expectedValue, bool newValue);
	static const int64_t serialVersionUID = (int64_t)0x4098B70A4F3FFC33;
	static ::java::lang::invoke::VarHandle* VALUE;
	$volatile(int32_t) value = 0;
};

			} // atomic
		} // concurrent
	} // util
} // java

#pragma pop_macro("VALUE")

#endif // _java_util_concurrent_atomic_AtomicBoolean_h_