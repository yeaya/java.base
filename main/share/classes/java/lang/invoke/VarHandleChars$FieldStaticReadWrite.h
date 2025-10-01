#ifndef _java_lang_invoke_VarHandleChars$FieldStaticReadWrite_h_
#define _java_lang_invoke_VarHandleChars$FieldStaticReadWrite_h_
//$ class java.lang.invoke.VarHandleChars$FieldStaticReadWrite
//$ extends java.lang.invoke.VarHandleChars$FieldStaticReadOnly

#include <java/lang/invoke/VarHandleChars$FieldStaticReadOnly.h>

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

class VarHandleChars$FieldStaticReadWrite : public ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly {
	$class(VarHandleChars$FieldStaticReadWrite, 0, ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly)
public:
	VarHandleChars$FieldStaticReadWrite();
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndAddRelease;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::getAndBitwiseXorRelease;
	void init$(Object$* base, int64_t fieldOffset);
	void init$(Object$* base, int64_t fieldOffset, bool exact);
	static char16_t compareAndExchange(::java::lang::invoke::VarHandle* ob, char16_t expected, char16_t value);
	static char16_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, char16_t expected, char16_t value);
	static char16_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, char16_t expected, char16_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, char16_t expected, char16_t value);
	static char16_t getAndAdd(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndSet(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, char16_t value);
	static char16_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, char16_t expected, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, char16_t expected, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, char16_t expected, char16_t value);
	using ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, char16_t expected, char16_t value);
	virtual ::java::lang::invoke::VarHandleChars$FieldStaticReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleChars$FieldStaticReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleChars$FieldStaticReadWrite_h_