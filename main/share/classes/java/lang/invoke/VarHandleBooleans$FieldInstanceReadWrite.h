#ifndef _java_lang_invoke_VarHandleBooleans$FieldInstanceReadWrite_h_
#define _java_lang_invoke_VarHandleBooleans$FieldInstanceReadWrite_h_
//$ class java.lang.invoke.VarHandleBooleans$FieldInstanceReadWrite
//$ extends java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly

#include <java/lang/invoke/VarHandleBooleans$FieldInstanceReadOnly.h>

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

class VarHandleBooleans$FieldInstanceReadWrite : public ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly {
	$class(VarHandleBooleans$FieldInstanceReadWrite, 0, ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly)
public:
	VarHandleBooleans$FieldInstanceReadWrite();
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::getAndBitwiseXorRelease;
	void init$($Class* receiverType, int64_t fieldOffset);
	void init$($Class* receiverType, int64_t fieldOffset, bool exact);
	static bool compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* holder, bool expected, bool value);
	static bool compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, bool expected, bool value);
	static bool compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, bool expected, bool value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, bool expected, bool value);
	static bool getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	static bool getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, bool expected, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, bool expected, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* holder, bool expected, bool value);
	using ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, bool expected, bool value);
	virtual ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleBooleans$FieldInstanceReadWrite_h_