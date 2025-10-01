#ifndef _java_lang_invoke_VarHandleBytes$FieldStaticReadWrite_h_
#define _java_lang_invoke_VarHandleBytes$FieldStaticReadWrite_h_
//$ class java.lang.invoke.VarHandleBytes$FieldStaticReadWrite
//$ extends java.lang.invoke.VarHandleBytes$FieldStaticReadOnly

#include <java/lang/invoke/VarHandleBytes$FieldStaticReadOnly.h>

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

class VarHandleBytes$FieldStaticReadWrite : public ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly {
	$class(VarHandleBytes$FieldStaticReadWrite, 0, ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly)
public:
	VarHandleBytes$FieldStaticReadWrite();
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndAddRelease;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::getAndBitwiseXorRelease;
	void init$(Object$* base, int64_t fieldOffset);
	void init$(Object$* base, int64_t fieldOffset, bool exact);
	static int8_t compareAndExchange(::java::lang::invoke::VarHandle* ob, int8_t expected, int8_t value);
	static int8_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, int8_t expected, int8_t value);
	static int8_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, int8_t expected, int8_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, int8_t expected, int8_t value);
	static int8_t getAndAdd(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndSet(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, int8_t value);
	static int8_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, int8_t expected, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, int8_t expected, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, int8_t expected, int8_t value);
	using ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, int8_t expected, int8_t value);
	virtual ::java::lang::invoke::VarHandleBytes$FieldStaticReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleBytes$FieldStaticReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleBytes$FieldStaticReadWrite_h_