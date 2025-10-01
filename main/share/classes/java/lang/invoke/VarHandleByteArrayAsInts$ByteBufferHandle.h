#ifndef _java_lang_invoke_VarHandleByteArrayAsInts$ByteBufferHandle_h_
#define _java_lang_invoke_VarHandleByteArrayAsInts$ByteBufferHandle_h_
//$ class java.lang.invoke.VarHandleByteArrayAsInts$ByteBufferHandle
//$ extends java.lang.invoke.VarHandleByteArrayAsInts$ByteArrayViewVarHandle

#include <java/lang/invoke/VarHandleByteArrayAsInts$ByteArrayViewVarHandle.h>

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

class VarHandleByteArrayAsInts$ByteBufferHandle : public ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle {
	$class(VarHandleByteArrayAsInts$ByteBufferHandle, 0, ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle)
public:
	VarHandleByteArrayAsInts$ByteBufferHandle();
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::get;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getVolatile;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getOpaque;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::compareAndSet;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::compareAndExchange;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndSet;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndSetAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndSetRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndAdd;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndAddAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndAddRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndBitwiseOr;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndBitwiseOrRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndBitwiseAnd;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndBitwiseAndRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndBitwiseXor;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::getAndBitwiseXorRelease;
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::accessModeTypeUncached;
	void init$(bool be);
	void init$(bool be, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	static int64_t address(::java::nio::ByteBuffer* bb, int32_t index);
	static int32_t compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value);
	static int32_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value);
	static int32_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value);
	static int32_t get(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static int32_t getAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static int32_t getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t delta);
	static int32_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t delta);
	static int32_t getAndAddConvEndianWithCAS(::java::nio::ByteBuffer* bb, int32_t index, int32_t delta);
	static int32_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t delta);
	static int32_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndBitwiseAndConvEndianWithCAS(::java::nio::ByteBuffer* bb, int32_t index, int32_t value);
	static int32_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndBitwiseOrConvEndianWithCAS(::java::nio::ByteBuffer* bb, int32_t index, int32_t value);
	static int32_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndBitwiseXorConvEndianWithCAS(::java::nio::ByteBuffer* bb, int32_t index, int32_t value);
	static int32_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	static int32_t getOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static int32_t getVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index);
	static int32_t index(::java::nio::ByteBuffer* bb, int32_t index);
	static int32_t indexRO(::java::nio::ByteBuffer* bb, int32_t index);
	static ::jdk::internal::misc::ScopedMemoryAccess$Scope* scope(::java::nio::ByteBuffer* bb);
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value);
	using ::java::lang::invoke::VarHandleByteArrayAsInts$ByteArrayViewVarHandle::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int32_t index, int32_t expected, int32_t value);
	virtual ::java::lang::invoke::VarHandleByteArrayAsInts$ByteBufferHandle* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleByteArrayAsInts$ByteBufferHandle* withInvokeExactBehavior() override;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleByteArrayAsInts$ByteBufferHandle_h_