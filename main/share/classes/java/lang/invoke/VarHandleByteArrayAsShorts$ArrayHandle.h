#ifndef _java_lang_invoke_VarHandleByteArrayAsShorts$ArrayHandle_h_
#define _java_lang_invoke_VarHandleByteArrayAsShorts$ArrayHandle_h_
//$ class java.lang.invoke.VarHandleByteArrayAsShorts$ArrayHandle
//$ extends java.lang.invoke.VarHandleByteArrayAsShorts$ByteArrayViewVarHandle

#include <java/lang/Array.h>
#include <java/lang/invoke/VarHandleByteArrayAsShorts$ByteArrayViewVarHandle.h>

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

class VarHandleByteArrayAsShorts$ArrayHandle : public ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle {
	$class(VarHandleByteArrayAsShorts$ArrayHandle, 0, ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle)
public:
	VarHandleByteArrayAsShorts$ArrayHandle();
	using ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::get;
	using ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::getVolatile;
	using ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::getOpaque;
	using ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::getAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::accessModeTypeUncached;
	void init$(bool be);
	void init$(bool be, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	static int64_t address($bytes* ba, int32_t index);
	static int16_t get(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static int16_t getAcquire(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static int16_t getOpaque(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static int16_t getVolatile(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index);
	static int32_t index($bytes* ba, int32_t index);
	using ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int16_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int16_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int16_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsShorts$ByteArrayViewVarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* oba, int32_t index, int16_t value);
	virtual ::java::lang::invoke::VarHandleByteArrayAsShorts$ArrayHandle* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleByteArrayAsShorts$ArrayHandle* withInvokeExactBehavior() override;
	static ::java::util::function::BiFunction* OOBEF;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")
#pragma pop_macro("OOBEF")

#endif // _java_lang_invoke_VarHandleByteArrayAsShorts$ArrayHandle_h_