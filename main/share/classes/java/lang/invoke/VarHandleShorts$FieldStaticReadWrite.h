#ifndef _java_lang_invoke_VarHandleShorts$FieldStaticReadWrite_h_
#define _java_lang_invoke_VarHandleShorts$FieldStaticReadWrite_h_
//$ class java.lang.invoke.VarHandleShorts$FieldStaticReadWrite
//$ extends java.lang.invoke.VarHandleShorts$FieldStaticReadOnly

#include <java/lang/invoke/VarHandleShorts$FieldStaticReadOnly.h>

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

class VarHandleShorts$FieldStaticReadWrite : public ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly {
	$class(VarHandleShorts$FieldStaticReadWrite, 0, ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly)
public:
	VarHandleShorts$FieldStaticReadWrite();
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndAddRelease;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::getAndBitwiseXorRelease;
	void init$(Object$* base, int64_t fieldOffset);
	void init$(Object$* base, int64_t fieldOffset, bool exact);
	static int16_t compareAndExchange(::java::lang::invoke::VarHandle* ob, int16_t expected, int16_t value);
	static int16_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, int16_t expected, int16_t value);
	static int16_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, int16_t expected, int16_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, int16_t expected, int16_t value);
	static int16_t getAndAdd(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndSet(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, int16_t value);
	static int16_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, int16_t expected, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, int16_t expected, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, int16_t expected, int16_t value);
	using ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, int16_t expected, int16_t value);
	virtual ::java::lang::invoke::VarHandleShorts$FieldStaticReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleShorts$FieldStaticReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleShorts$FieldStaticReadWrite_h_