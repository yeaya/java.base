#ifndef _java_lang_invoke_VarHandleByteArrayAsDoubles$ByteBufferHandle_h_
#define _java_lang_invoke_VarHandleByteArrayAsDoubles$ByteBufferHandle_h_
//$ class java.lang.invoke.VarHandleByteArrayAsDoubles$ByteBufferHandle
//$ extends java.lang.invoke.VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle

#include <java/lang/invoke/VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle.h>

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

class VarHandleByteArrayAsDoubles$ByteBufferHandle : public ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle {
	$class(VarHandleByteArrayAsDoubles$ByteBufferHandle, 0, ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle)
public:
	VarHandleByteArrayAsDoubles$ByteBufferHandle();
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::get;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::getVolatile;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::getOpaque;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::getAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::compareAndSet;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::compareAndExchange;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::getAndSet;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::getAndSetRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::accessModeTypeUncached;
	void init$(bool be);
	void init$(bool be, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	static int64_t address(::java::nio::ByteBuffer* bb, int32_t index);
	static double compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double expected, double value);
	static double compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double expected, double value);
	static double compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double expected, double value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double expected, double value);
	static double get(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static double getAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static double getAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double value);
	static double getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double value);
	static double getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double value);
	static double getOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static double getVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static int32_t index(::java::nio::ByteBuffer* bb, int32_t index);
	static int32_t indexRO(::java::nio::ByteBuffer* bb, int32_t index);
	static ::jdk::internal::misc::ScopedMemoryAccess$Scope* scope(::java::nio::ByteBuffer* bb);
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double value);
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double value);
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double value);
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double value);
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double expected, double value);
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double expected, double value);
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double expected, double value);
	using ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteArrayViewVarHandle::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, double expected, double value);
	virtual ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteBufferHandle* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleByteArrayAsDoubles$ByteBufferHandle* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleByteArrayAsDoubles$ByteBufferHandle_h_