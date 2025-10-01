#ifndef _java_lang_invoke_VarHandleLongs$FieldStaticReadWrite_h_
#define _java_lang_invoke_VarHandleLongs$FieldStaticReadWrite_h_
//$ class java.lang.invoke.VarHandleLongs$FieldStaticReadWrite
//$ extends java.lang.invoke.VarHandleLongs$FieldStaticReadOnly

#include <java/lang/invoke/VarHandleLongs$FieldStaticReadOnly.h>

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

class VarHandleLongs$FieldStaticReadWrite : public ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly {
	$class(VarHandleLongs$FieldStaticReadWrite, 0, ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly)
public:
	VarHandleLongs$FieldStaticReadWrite();
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::accessModeTypeUncached;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::compareAndSet;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::compareAndExchange;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndSet;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndSetRelease;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndAdd;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndAddRelease;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::getAndBitwiseXorRelease;
	void init$(Object$* base, int64_t fieldOffset);
	void init$(Object$* base, int64_t fieldOffset, bool exact);
	static int64_t compareAndExchange(::java::lang::invoke::VarHandle* ob, int64_t expected, int64_t value);
	static int64_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, int64_t expected, int64_t value);
	static int64_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, int64_t expected, int64_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, int64_t expected, int64_t value);
	static int64_t getAndAdd(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndSet(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, int64_t value);
	static int64_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::set;
	static void set(::java::lang::invoke::VarHandle* ob, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, int64_t expected, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, int64_t expected, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, int64_t expected, int64_t value);
	using ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, int64_t expected, int64_t value);
	virtual ::java::lang::invoke::VarHandleLongs$FieldStaticReadWrite* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleLongs$FieldStaticReadWrite* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleLongs$FieldStaticReadWrite_h_