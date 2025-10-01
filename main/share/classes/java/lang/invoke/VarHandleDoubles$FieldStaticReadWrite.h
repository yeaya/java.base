#ifndef _java_lang_invoke_VarHandleDoubles$FieldStaticReadWrite_h_
#define _java_lang_invoke_VarHandleDoubles$FieldStaticReadWrite_h_
//$ class java.lang.invoke.VarHandleDoubles$FieldStaticReadWrite
//$ extends java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly

#include <java/lang/invoke/VarHandleDoubles$FieldStaticReadOnly.h>

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

class VarHandleDoubles$FieldStaticReadWrite : public ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly {
	$class(VarHandleDoubles$FieldStaticReadWrite, 0, ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly)
public:
	VarHandleDoubles$FieldStaticReadWrite();
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::getAndAddRelease;
	void init$(Object$* base, int64_t fieldOffset);
	void init$(Object$* base, int64_t fieldOffset, bool exact);
	static double compareAndExchange(::java::lang::invoke::VarHandle* ob, double expected, double value);
	static double compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, double expected, double value);
	static double compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, double expected, double value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, double expected, double value);
	static double getAndAdd(::java::lang::invoke::VarHandle* ob, double value);
	static double getAndAddAcquire(::java::lang::invoke::VarHandle* ob, double value);
	static double getAndAddRelease(::java::lang::invoke::VarHandle* ob, double value);
	static double getAndSet(::java::lang::invoke::VarHandle* ob, double value);
	static double getAndSetAcquire(::java::lang::invoke::VarHandle* ob, double value);
	static double getAndSetRelease(::java::lang::invoke::VarHandle* ob, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, double expected, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, double expected, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, double expected, double value);
	using ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, double expected, double value);
	virtual ::java::lang::invoke::VarHandleDoubles$FieldStaticReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleDoubles$FieldStaticReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleDoubles$FieldStaticReadWrite_h_