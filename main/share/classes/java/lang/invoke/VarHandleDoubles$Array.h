#ifndef _java_lang_invoke_VarHandleDoubles$Array_h_
#define _java_lang_invoke_VarHandleDoubles$Array_h_
//$ class java.lang.invoke.VarHandleDoubles$Array
//$ extends java.lang.invoke.VarHandle

#include <java/lang/invoke/VarHandle.h>

#pragma push_macro("FORM")
#undef FORM

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
			class VarForm;
			class VarHandle$AccessType;
		}
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleDoubles$Array : public ::java::lang::invoke::VarHandle {
	$class(VarHandleDoubles$Array, 0, ::java::lang::invoke::VarHandle)
public:
	VarHandleDoubles$Array();
	using ::java::lang::invoke::VarHandle::get;
	using ::java::lang::invoke::VarHandle::getVolatile;
	using ::java::lang::invoke::VarHandle::getOpaque;
	using ::java::lang::invoke::VarHandle::getAcquire;
	using ::java::lang::invoke::VarHandle::compareAndSet;
	using ::java::lang::invoke::VarHandle::compareAndExchange;
	using ::java::lang::invoke::VarHandle::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandle::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandle::getAndSet;
	using ::java::lang::invoke::VarHandle::getAndSetAcquire;
	using ::java::lang::invoke::VarHandle::getAndSetRelease;
	using ::java::lang::invoke::VarHandle::getAndAdd;
	using ::java::lang::invoke::VarHandle::getAndAddAcquire;
	using ::java::lang::invoke::VarHandle::getAndAddRelease;
	using ::java::lang::invoke::VarHandle::accessModeTypeUncached;
	void init$(int32_t abase, int32_t ashift);
	void init$(int32_t abase, int32_t ashift, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	static double compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double expected, double value);
	static double compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double expected, double value);
	static double compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double expected, double value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double expected, double value);
	virtual ::java::util::Optional* describeConstable() override;
	static double get(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static double getAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static double getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double value);
	static double getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double value);
	static double getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double value);
	static double getAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double value);
	static double getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double value);
	static double getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double value);
	static double getOpaque(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static double getVolatile(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	using ::java::lang::invoke::VarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double value);
	using ::java::lang::invoke::VarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double value);
	using ::java::lang::invoke::VarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double value);
	using ::java::lang::invoke::VarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double expected, double value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double expected, double value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double expected, double value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, double expected, double value);
	virtual ::java::lang::invoke::VarHandleDoubles$Array* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleDoubles$Array* withInvokeExactBehavior() override;
	int32_t abase = 0;
	int32_t ashift = 0;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleDoubles$Array_h_