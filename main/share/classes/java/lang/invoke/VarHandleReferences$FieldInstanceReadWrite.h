#ifndef _java_lang_invoke_VarHandleReferences$FieldInstanceReadWrite_h_
#define _java_lang_invoke_VarHandleReferences$FieldInstanceReadWrite_h_
//$ class java.lang.invoke.VarHandleReferences$FieldInstanceReadWrite
//$ extends java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly

#include <java/lang/invoke/VarHandleReferences$FieldInstanceReadOnly.h>

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

class VarHandleReferences$FieldInstanceReadWrite : public ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly {
	$class(VarHandleReferences$FieldInstanceReadWrite, 0, ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly)
public:
	VarHandleReferences$FieldInstanceReadWrite();
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::getAndSetRelease;
	void init$($Class* receiverType, int64_t fieldOffset, $Class* fieldType);
	void init$($Class* receiverType, int64_t fieldOffset, $Class* fieldType, bool exact);
	static $Object* compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* expected, Object$* value);
	static $Object* compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* expected, Object$* value);
	static $Object* compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* expected, Object$* value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* expected, Object$* value);
	static $Object* getAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* value);
	static $Object* getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* value);
	static $Object* getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* expected, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* expected, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* expected, Object$* value);
	using ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* holder, Object$* expected, Object$* value);
	virtual ::java::lang::invoke::VarHandleReferences$FieldInstanceReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleReferences$FieldInstanceReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleReferences$FieldInstanceReadWrite_h_