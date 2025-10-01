#ifndef _java_lang_invoke_VarHandleFloats$FieldStaticReadWrite_h_
#define _java_lang_invoke_VarHandleFloats$FieldStaticReadWrite_h_
//$ class java.lang.invoke.VarHandleFloats$FieldStaticReadWrite
//$ extends java.lang.invoke.VarHandleFloats$FieldStaticReadOnly

#include <java/lang/invoke/VarHandleFloats$FieldStaticReadOnly.h>

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

class VarHandleFloats$FieldStaticReadWrite : public ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly {
	$class(VarHandleFloats$FieldStaticReadWrite, 0, ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly)
public:
	VarHandleFloats$FieldStaticReadWrite();
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::getAndAddRelease;
	void init$(Object$* base, int64_t fieldOffset);
	void init$(Object$* base, int64_t fieldOffset, bool exact);
	static float compareAndExchange(::java::lang::invoke::VarHandle* ob, float expected, float value);
	static float compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, float expected, float value);
	static float compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, float expected, float value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, float expected, float value);
	static float getAndAdd(::java::lang::invoke::VarHandle* ob, float value);
	static float getAndAddAcquire(::java::lang::invoke::VarHandle* ob, float value);
	static float getAndAddRelease(::java::lang::invoke::VarHandle* ob, float value);
	static float getAndSet(::java::lang::invoke::VarHandle* ob, float value);
	static float getAndSetAcquire(::java::lang::invoke::VarHandle* ob, float value);
	static float getAndSetRelease(::java::lang::invoke::VarHandle* ob, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, float expected, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, float expected, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, float expected, float value);
	using ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, float expected, float value);
	virtual ::java::lang::invoke::VarHandleFloats$FieldStaticReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleFloats$FieldStaticReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleFloats$FieldStaticReadWrite_h_