#ifndef _java_lang_invoke_VarHandleLongs$FieldInstanceReadWrite_h_
#define _java_lang_invoke_VarHandleLongs$FieldInstanceReadWrite_h_
//$ class java.lang.invoke.VarHandleLongs$FieldInstanceReadWrite
//$ extends java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly

#include <java/lang/invoke/VarHandleLongs$FieldInstanceReadOnly.h>

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

class VarHandleLongs$FieldInstanceReadWrite : public ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly {
	$class(VarHandleLongs$FieldInstanceReadWrite, 0, ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly)
public:
	VarHandleLongs$FieldInstanceReadWrite();
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndAddRelease;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::getAndBitwiseXorRelease;
	void init$($Class* receiverType, int64_t fieldOffset);
	void init$($Class* receiverType, int64_t fieldOffset, bool exact);
	static int64_t compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t expected, int64_t value);
	static int64_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t expected, int64_t value);
	static int64_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t expected, int64_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t expected, int64_t value);
	static int64_t getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	static int64_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t expected, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t expected, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t expected, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, int64_t expected, int64_t value);
	virtual ::java::lang::invoke::VarHandleLongs$FieldInstanceReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleLongs$FieldInstanceReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleLongs$FieldInstanceReadWrite_h_