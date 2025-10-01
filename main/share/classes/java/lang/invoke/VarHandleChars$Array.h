#ifndef _java_lang_invoke_VarHandleChars$Array_h_
#define _java_lang_invoke_VarHandleChars$Array_h_
//$ class java.lang.invoke.VarHandleChars$Array
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

class VarHandleChars$Array : public ::java::lang::invoke::VarHandle {
	$class(VarHandleChars$Array, 0, ::java::lang::invoke::VarHandle)
public:
	VarHandleChars$Array();
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
	static char16_t compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value);
	static char16_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value);
	static char16_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value);
	virtual ::java::util::Optional* describeConstable() override;
	static char16_t get(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static char16_t getAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static char16_t getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	static char16_t getOpaque(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static char16_t getVolatile(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	using ::java::lang::invoke::VarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	using ::java::lang::invoke::VarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	using ::java::lang::invoke::VarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	using ::java::lang::invoke::VarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value);
	virtual ::java::lang::invoke::VarHandleChars$Array* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleChars$Array* withInvokeExactBehavior() override;
	int32_t abase = 0;
	int32_t ashift = 0;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleChars$Array_h_