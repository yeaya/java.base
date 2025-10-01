#ifndef _java_lang_invoke_VarHandleChars$FieldInstanceReadWrite_h_
#define _java_lang_invoke_VarHandleChars$FieldInstanceReadWrite_h_
//$ class java.lang.invoke.VarHandleChars$FieldInstanceReadWrite
//$ extends java.lang.invoke.VarHandleChars$FieldInstanceReadOnly

#include <java/lang/invoke/VarHandleChars$FieldInstanceReadOnly.h>

#pragma push_macro("FORM")
#undef FORM

namespace java {
	namespace lang {
		namespace invoke {
			class VarForm;
			class VarHandle;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleChars$FieldInstanceReadWrite : public ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly {
	$class(VarHandleChars$FieldInstanceReadWrite, 0, ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly)
public:
	VarHandleChars$FieldInstanceReadWrite();
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndAddRelease;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::getAndBitwiseXorRelease;
	void init$($Class* receiverType, int64_t fieldOffset);
	void init$($Class* receiverType, int64_t fieldOffset, bool exact);
	static char16_t compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t expected, char16_t value);
	static char16_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t expected, char16_t value);
	static char16_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t expected, char16_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t expected, char16_t value);
	static char16_t getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	static char16_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t expected, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t expected, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t expected, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, char16_t expected, char16_t value);
	virtual ::java::lang::invoke::VarHandleChars$FieldInstanceReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleChars$FieldInstanceReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleChars$FieldInstanceReadWrite_h_