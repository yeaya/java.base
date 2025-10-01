#ifndef _java_lang_invoke_VarHandleShorts$FieldInstanceReadWrite_h_
#define _java_lang_invoke_VarHandleShorts$FieldInstanceReadWrite_h_
//$ class java.lang.invoke.VarHandleShorts$FieldInstanceReadWrite
//$ extends java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly

#include <java/lang/invoke/VarHandleShorts$FieldInstanceReadOnly.h>

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

class VarHandleShorts$FieldInstanceReadWrite : public ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly {
	$class(VarHandleShorts$FieldInstanceReadWrite, 0, ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly)
public:
	VarHandleShorts$FieldInstanceReadWrite();
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndAddRelease;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::getAndBitwiseXorRelease;
	void init$($Class* receiverType, int64_t fieldOffset);
	void init$($Class* receiverType, int64_t fieldOffset, bool exact);
	static int16_t compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t expected, int16_t value);
	static int16_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t expected, int16_t value);
	static int16_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t expected, int16_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t expected, int16_t value);
	static int16_t getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	static int16_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t expected, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t expected, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t expected, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int16_t expected, int16_t value);
	virtual ::java::lang::invoke::VarHandleShorts$FieldInstanceReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleShorts$FieldInstanceReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleShorts$FieldInstanceReadWrite_h_