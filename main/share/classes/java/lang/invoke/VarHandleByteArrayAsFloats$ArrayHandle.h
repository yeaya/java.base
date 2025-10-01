#ifndef _java_lang_invoke_VarHandleByteArrayAsFloats$ArrayHandle_h_
#define _java_lang_invoke_VarHandleByteArrayAsFloats$ArrayHandle_h_
//$ class java.lang.invoke.VarHandleByteArrayAsFloats$ArrayHandle
//$ extends java.lang.invoke.VarHandleByteArrayAsFloats$ByteArrayViewVarHandle

#include <java/lang/Array.h>
#include <java/lang/invoke/VarHandleByteArrayAsFloats$ByteArrayViewVarHandle.h>

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

class VarHandleByteArrayAsFloats$ArrayHandle : public ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle {
	$class(VarHandleByteArrayAsFloats$ArrayHandle, 0, ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle)
public:
	VarHandleByteArrayAsFloats$ArrayHandle();
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::get;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::getVolatile;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::getOpaque;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::getAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::compareAndSet;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::compareAndExchange;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::getAndSet;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::getAndSetRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::accessModeTypeUncached;
	void init$(bool be);
	void init$(bool be, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	static int64_t address($bytes* ba, int32_t index);
	static float compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float expected, float value);
	static float compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float expected, float value);
	static float compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float expected, float value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float expected, float value);
	static float get(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static float getAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static float getAndSet(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float value);
	static float getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float value);
	static float getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float value);
	static float getOpaque(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static float getVolatile(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static int32_t index($bytes* ba, int32_t index);
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float value);
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float value);
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float value);
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float value);
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float expected, float value);
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float expected, float value);
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float expected, float value);
	using ::java::lang::invoke::VarHandleByteArrayAsFloats$ByteArrayViewVarHandle::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, float expected, float value);
	virtual ::java::lang::invoke::VarHandleByteArrayAsFloats$ArrayHandle* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleByteArrayAsFloats$ArrayHandle* withInvokeExactBehavior() override;
	static ::java::util::function::BiFunction* OOBEF;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")
#pragma pop_macro("OOBEF")

#endif // _java_lang_invoke_VarHandleByteArrayAsFloats$ArrayHandle_h_