#ifndef _java_lang_invoke_VarHandleByteArrayAsLongs$ArrayHandle_h_
#define _java_lang_invoke_VarHandleByteArrayAsLongs$ArrayHandle_h_
//$ class java.lang.invoke.VarHandleByteArrayAsLongs$ArrayHandle
//$ extends java.lang.invoke.VarHandleByteArrayAsLongs$ByteArrayViewVarHandle

#include <java/lang/Array.h>
#include <java/lang/invoke/VarHandleByteArrayAsLongs$ByteArrayViewVarHandle.h>

#pragma push_macro("FORM")
#undef FORM
#pragma push_macro("OOBEF")
#undef OOBEF

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
			class VarForm;
			class VarHandle;
			class VarHandle$AccessType;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsLongs$ArrayHandle : public ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle {
	$class(VarHandleByteArrayAsLongs$ArrayHandle, 0, ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle)
public:
	VarHandleByteArrayAsLongs$ArrayHandle();
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::get;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getVolatile;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getOpaque;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::compareAndSet;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::compareAndExchange;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndSet;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndSetRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndAdd;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndAddRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::getAndBitwiseXorRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::accessModeTypeUncached;
	void init$(bool be);
	void init$(bool be, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	static int64_t address($bytes* ba, int32_t index);
	static int64_t compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value);
	static int64_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value);
	static int64_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value);
	static int64_t get(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static int64_t getAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static int64_t getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t delta);
	static int64_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t delta);
	static int64_t getAndAddConvEndianWithCAS($bytes* ba, int32_t index, int64_t delta);
	static int64_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t delta);
	static int64_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndBitwiseAndConvEndianWithCAS($bytes* ba, int32_t index, int64_t value);
	static int64_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndBitwiseOrConvEndianWithCAS($bytes* ba, int32_t index, int64_t value);
	static int64_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndBitwiseXorConvEndianWithCAS($bytes* ba, int32_t index, int64_t value);
	static int64_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndSet(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	static int64_t getOpaque(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static int64_t getVolatile(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static int32_t index($bytes* ba, int32_t index);
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsLongs$ByteArrayViewVarHandle::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int64_t expected, int64_t value);
	virtual ::java::lang::invoke::VarHandleByteArrayAsLongs$ArrayHandle* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleByteArrayAsLongs$ArrayHandle* withInvokeExactBehavior() override;
	static ::java::util::function::BiFunction* OOBEF;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")
#pragma pop_macro("OOBEF")

#endif // _java_lang_invoke_VarHandleByteArrayAsLongs$ArrayHandle_h_