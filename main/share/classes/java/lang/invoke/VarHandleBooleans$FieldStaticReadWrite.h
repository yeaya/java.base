#ifndef _java_lang_invoke_VarHandleBooleans$FieldStaticReadWrite_h_
#define _java_lang_invoke_VarHandleBooleans$FieldStaticReadWrite_h_
//$ class java.lang.invoke.VarHandleBooleans$FieldStaticReadWrite
//$ extends java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly

#include <java/lang/invoke/VarHandleBooleans$FieldStaticReadOnly.h>

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

class VarHandleBooleans$FieldStaticReadWrite : public ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly {
	$class(VarHandleBooleans$FieldStaticReadWrite, 0, ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly)
public:
	VarHandleBooleans$FieldStaticReadWrite();
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::getAndBitwiseXorRelease;
	void init$(Object$* base, int64_t fieldOffset);
	void init$(Object$* base, int64_t fieldOffset, bool exact);
	static bool compareAndExchange(::java::lang::invoke::VarHandle* ob, bool expected, bool value);
	static bool compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, bool expected, bool value);
	static bool compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, bool expected, bool value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, bool expected, bool value);
	static bool getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndSet(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndSetAcquire(::java::lang::invoke::VarHandle* ob, bool value);
	static bool getAndSetRelease(::java::lang::invoke::VarHandle* ob, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, bool expected, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, bool expected, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, bool expected, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, bool expected, bool value);
	virtual ::java::lang::invoke::VarHandleBooleans$FieldStaticReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleBooleans$FieldStaticReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleBooleans$FieldStaticReadWrite_h_