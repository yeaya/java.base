#ifndef _java_lang_invoke_VarHandleDoubles$FieldInstanceReadWrite_h_
#define _java_lang_invoke_VarHandleDoubles$FieldInstanceReadWrite_h_
//$ class java.lang.invoke.VarHandleDoubles$FieldInstanceReadWrite
//$ extends java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly

#include <java/lang/invoke/VarHandleDoubles$FieldInstanceReadOnly.h>

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

class VarHandleDoubles$FieldInstanceReadWrite : public ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly {
	$class(VarHandleDoubles$FieldInstanceReadWrite, 0, ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly)
public:
	VarHandleDoubles$FieldInstanceReadWrite();
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::getAndAddRelease;
	void init$($Class* receiverType, int64_t fieldOffset);
	void init$($Class* receiverType, int64_t fieldOffset, bool exact);
	static double compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* holder, double expected, double value);
	static double compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, double expected, double value);
	static double compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, double expected, double value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, double expected, double value);
	static double getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* holder, double value);
	static double getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, double value);
	static double getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, double value);
	static double getAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, double value);
	static double getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, double value);
	static double getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* holder, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, double expected, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, double expected, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* holder, double expected, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, double expected, double value);
	virtual ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleDoubles$FieldInstanceReadWrite_h_