#ifndef _java_lang_invoke_VarHandleInts$FieldInstanceReadWrite_h_
#define _java_lang_invoke_VarHandleInts$FieldInstanceReadWrite_h_
//$ class java.lang.invoke.VarHandleInts$FieldInstanceReadWrite
//$ extends java.lang.invoke.VarHandleInts$FieldInstanceReadOnly

#include <java/lang/invoke/VarHandleInts$FieldInstanceReadOnly.h>

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

class VarHandleInts$FieldInstanceReadWrite : public ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly {
	$class(VarHandleInts$FieldInstanceReadWrite, 0, ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly)
public:
	VarHandleInts$FieldInstanceReadWrite();
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndAddRelease;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::getAndBitwiseXorRelease;
	void init$($Class* receiverType, int64_t fieldOffset);
	void init$($Class* receiverType, int64_t fieldOffset, bool exact);
	static int32_t compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t expected, int32_t value);
	static int32_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t expected, int32_t value);
	static int32_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t expected, int32_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t expected, int32_t value);
	static int32_t getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	static int32_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t expected, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t expected, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t expected, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int32_t expected, int32_t value);
	virtual ::java::lang::invoke::VarHandleInts$FieldInstanceReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleInts$FieldInstanceReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleInts$FieldInstanceReadWrite_h_