#ifndef _java_lang_invoke_VarHandleReferences$FieldStaticReadWrite_h_
#define _java_lang_invoke_VarHandleReferences$FieldStaticReadWrite_h_
//$ class java.lang.invoke.VarHandleReferences$FieldStaticReadWrite
//$ extends java.lang.invoke.VarHandleReferences$FieldStaticReadOnly

#include <java/lang/invoke/VarHandleReferences$FieldStaticReadOnly.h>

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

class VarHandleReferences$FieldStaticReadWrite : public ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly {
	$class(VarHandleReferences$FieldStaticReadWrite, 0, ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly)
public:
	VarHandleReferences$FieldStaticReadWrite();
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::getAndSetRelease;
	void init$(Object$* base, int64_t fieldOffset, $Class* fieldType);
	void init$(Object$* base, int64_t fieldOffset, $Class* fieldType, bool exact);
	static $Object* compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* expected, Object$* value);
	static $Object* compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* expected, Object$* value);
	static $Object* compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* expected, Object$* value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* expected, Object$* value);
	static $Object* getAndSet(::java::lang::invoke::VarHandle* ob, Object$* value);
	static $Object* getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* value);
	static $Object* getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* expected, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* expected, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* expected, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* expected, Object$* value);
	virtual ::java::lang::invoke::VarHandleReferences$FieldStaticReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleReferences$FieldStaticReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleReferences$FieldStaticReadWrite_h_