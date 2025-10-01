#ifndef _java_lang_invoke_VarHandleByteArrayAsChars$ByteBufferHandle_h_
#define _java_lang_invoke_VarHandleByteArrayAsChars$ByteBufferHandle_h_
//$ class java.lang.invoke.VarHandleByteArrayAsChars$ByteBufferHandle
//$ extends java.lang.invoke.VarHandleByteArrayAsChars$ByteArrayViewVarHandle

#include <java/lang/invoke/VarHandleByteArrayAsChars$ByteArrayViewVarHandle.h>

#pragma push_macro("FORM")
#undef FORM

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
	namespace nio {
		class ByteBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class ScopedMemoryAccess$Scope;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleByteArrayAsChars$ByteBufferHandle : public ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle {
	$class(VarHandleByteArrayAsChars$ByteBufferHandle, 0, ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle)
public:
	VarHandleByteArrayAsChars$ByteBufferHandle();
	using ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle::get;
	using ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle::getVolatile;
	using ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle::getOpaque;
	using ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle::getAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle::accessModeTypeUncached;
	void init$(bool be);
	void init$(bool be, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	static int64_t address(::java::nio::ByteBuffer* bb, int32_t index);
	static char16_t get(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static char16_t getAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static char16_t getOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static char16_t getVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static int32_t index(::java::nio::ByteBuffer* bb, int32_t index);
	static int32_t indexRO(::java::nio::ByteBuffer* bb, int32_t index);
	static ::jdk::internal::misc::ScopedMemoryAccess$Scope* scope(::java::nio::ByteBuffer* bb);
	using ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, char16_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, char16_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, char16_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsChars$ByteArrayViewVarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, char16_t value);
	virtual ::java::lang::invoke::VarHandleByteArrayAsChars$ByteBufferHandle* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleByteArrayAsChars$ByteBufferHandle* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleByteArrayAsChars$ByteBufferHandle_h_