#ifndef _java_lang_invoke_VarHandleFloats$FieldInstanceReadWrite_h_
#define _java_lang_invoke_VarHandleFloats$FieldInstanceReadWrite_h_
//$ class java.lang.invoke.VarHandleFloats$FieldInstanceReadWrite
//$ extends java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly

#include <java/lang/invoke/VarHandleFloats$FieldInstanceReadOnly.h>

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

class VarHandleFloats$FieldInstanceReadWrite : public ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly {
	$class(VarHandleFloats$FieldInstanceReadWrite, 0, ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly)
public:
	VarHandleFloats$FieldInstanceReadWrite();
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::getAndAddRelease;
	void init$($Class* receiverType, int64_t fieldOffset);
	void init$($Class* receiverType, int64_t fieldOffset, bool exact);
	static float compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* holder, float expected, float value);
	static float compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, float expected, float value);
	static float compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, float expected, float value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, float expected, float value);
	static float getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* holder, float value);
	static float getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, float value);
	static float getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, float value);
	static float getAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, float value);
	static float getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, float value);
	static float getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* holder, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, float expected, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, float expected, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* holder, float expected, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, float expected, float value);
	virtual ::java::lang::invoke::VarHandleFloats$FieldInstanceReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleFloats$FieldInstanceReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleFloats$FieldInstanceReadWrite_h_