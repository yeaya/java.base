#ifndef _java_lang_invoke_VarHandleBooleans$Array_h_
#define _java_lang_invoke_VarHandleBooleans$Array_h_
//$ class java.lang.invoke.VarHandleBooleans$Array
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

class VarHandleBooleans$Array : public ::java::lang::invoke::VarHandle {
	$class(VarHandleBooleans$Array, 0, ::java::lang::invoke::VarHandle)
public:
	VarHandleBooleans$Array();
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
	using ::java::lang::invoke::VarHandle::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandle::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandle::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandle::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandle::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandle::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandle::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandle::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandle::getAndBitwiseXorRelease;
	using ::java::lang::invoke::VarHandle::accessModeTypeUncached;
	void init$(int32_t abase, int32_t ashift);
	void init$(int32_t abase, int32_t ashift, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	static bool compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value);
	static bool compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value);
	static bool compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value);
	virtual ::java::util::Optional* describeConstable() override;
	static bool get(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static bool getAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static bool getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	static bool getOpaque(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static bool getVolatile(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	using ::java::lang::invoke::VarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	using ::java::lang::invoke::VarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	using ::java::lang::invoke::VarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	using ::java::lang::invoke::VarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value);
	virtual ::java::lang::invoke::VarHandleBooleans$Array* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleBooleans$Array* withInvokeExactBehavior() override;
	int32_t abase = 0;
	int32_t ashift = 0;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleBooleans$Array_h_