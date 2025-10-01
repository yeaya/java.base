#ifndef _java_lang_invoke_VarHandleBytes$FieldInstanceReadWrite_h_
#define _java_lang_invoke_VarHandleBytes$FieldInstanceReadWrite_h_
//$ class java.lang.invoke.VarHandleBytes$FieldInstanceReadWrite
//$ extends java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly

#include <java/lang/invoke/VarHandleBytes$FieldInstanceReadOnly.h>

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

class VarHandleBytes$FieldInstanceReadWrite : public ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly {
	$class(VarHandleBytes$FieldInstanceReadWrite, 0, ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly)
public:
	VarHandleBytes$FieldInstanceReadWrite();
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndAddRelease;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::getAndBitwiseXorRelease;
	void init$($Class* receiverType, int64_t fieldOffset);
	void init$($Class* receiverType, int64_t fieldOffset, bool exact);
	static int8_t compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t expected, int8_t value);
	static int8_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t expected, int8_t value);
	static int8_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t expected, int8_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t expected, int8_t value);
	static int8_t getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	static int8_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t expected, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t expected, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t expected, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int8_t expected, int8_t value);
	virtual ::java::lang::invoke::VarHandleBytes$FieldInstanceReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleBytes$FieldInstanceReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleBytes$FieldInstanceReadWrite_h_