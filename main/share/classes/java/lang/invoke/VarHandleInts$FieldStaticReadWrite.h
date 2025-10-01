#ifndef _java_lang_invoke_VarHandleInts$FieldStaticReadWrite_h_
#define _java_lang_invoke_VarHandleInts$FieldStaticReadWrite_h_
//$ class java.lang.invoke.VarHandleInts$FieldStaticReadWrite
//$ extends java.lang.invoke.VarHandleInts$FieldStaticReadOnly

#include <java/lang/invoke/VarHandleInts$FieldStaticReadOnly.h>

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

class VarHandleInts$FieldStaticReadWrite : public ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly {
	$class(VarHandleInts$FieldStaticReadWrite, 0, ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly)
public:
	VarHandleInts$FieldStaticReadWrite();
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndAddRelease;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::getAndBitwiseXorRelease;
	void init$(Object$* base, int64_t fieldOffset);
	void init$(Object$* base, int64_t fieldOffset, bool exact);
	static int32_t compareAndExchange(::java::lang::invoke::VarHandle* ob, int32_t expected, int32_t value);
	static int32_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, int32_t expected, int32_t value);
	static int32_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, int32_t expected, int32_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, int32_t expected, int32_t value);
	static int32_t getAndAdd(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndSet(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, int32_t value);
	static int32_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, int32_t expected, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, int32_t expected, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, int32_t expected, int32_t value);
	using ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, int32_t expected, int32_t value);
	virtual ::java::lang::invoke::VarHandleInts$FieldStaticReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleInts$FieldStaticReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleInts$FieldStaticReadWrite_h_