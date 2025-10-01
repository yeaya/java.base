#ifndef _java_lang_invoke_MemoryAccessVarHandleIntHelper_h_
#define _java_lang_invoke_MemoryAccessVarHandleIntHelper_h_
//$ class java.lang.invoke.MemoryAccessVarHandleIntHelper
//$ extends java.lang.invoke.MemoryAccessVarHandleBase

#include <java/lang/Integer.h>
#include <java/lang/invoke/MemoryAccessVarHandleBase.h>

#pragma push_macro("BYTES")
#undef BYTES
#pragma push_macro("BE")
#undef BE
#pragma push_macro("VM_ALIGN")
#undef VM_ALIGN
#pragma push_macro("FORM")
#undef FORM
#pragma push_macro("SCOPED_MEMORY_ACCESS")
#undef SCOPED_MEMORY_ACCESS

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
namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {
				class MemorySegmentProxy;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class ScopedMemoryAccess;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MemoryAccessVarHandleIntHelper : public ::java::lang::invoke::MemoryAccessVarHandleBase {
	$class(MemoryAccessVarHandleIntHelper, 0, ::java::lang::invoke::MemoryAccessVarHandleBase)
public:
	MemoryAccessVarHandleIntHelper();
	using ::java::lang::invoke::MemoryAccessVarHandleBase::get;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getVolatile;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getOpaque;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAcquire;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::compareAndSet;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::compareAndExchange;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::compareAndExchangeAcquire;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::compareAndExchangeRelease;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndSet;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndSetAcquire;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndSetRelease;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndAdd;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndAddAcquire;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndAddRelease;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndBitwiseOr;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndBitwiseOrAcquire;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndBitwiseOrRelease;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndBitwiseAnd;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndBitwiseAndAcquire;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndBitwiseAndRelease;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndBitwiseXor;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndBitwiseXorAcquire;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAndBitwiseXorRelease;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::accessModeTypeUncached;
	void init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* accessType) override;
	static ::jdk::internal::access::foreign::MemorySegmentProxy* checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro);
	static int32_t compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value);
	static int32_t compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value);
	static int32_t compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value);
	static int32_t convEndian(bool big, int32_t n);
	static int32_t get(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static int32_t getAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static int32_t getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t delta);
	static int32_t getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t delta);
	static int32_t getAndAddConvEndianWithCAS(::jdk::internal::access::foreign::MemorySegmentProxy* bb, int64_t offset, int32_t delta);
	static int32_t getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t delta);
	static int32_t getAndBitwiseAnd(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndBitwiseAndAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndBitwiseAndConvEndianWithCAS(::jdk::internal::access::foreign::MemorySegmentProxy* bb, int64_t offset, int32_t value);
	static int32_t getAndBitwiseAndRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndBitwiseOr(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndBitwiseOrAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndBitwiseOrConvEndianWithCAS(::jdk::internal::access::foreign::MemorySegmentProxy* bb, int64_t offset, int32_t value);
	static int32_t getAndBitwiseOrRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndBitwiseXor(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndBitwiseXorAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndBitwiseXorConvEndianWithCAS(::jdk::internal::access::foreign::MemorySegmentProxy* bb, int64_t offset, int32_t value);
	static int32_t getAndBitwiseXorRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	static int32_t getOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static int32_t getVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static int64_t offset(bool skipAlignmentMaskCheck, ::jdk::internal::access::foreign::MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask);
	static int64_t offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, ::jdk::internal::access::foreign::MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value);
	virtual ::java::lang::invoke::MemoryAccessVarHandleIntHelper* withInvokeBehavior() override;
	virtual ::java::lang::invoke::MemoryAccessVarHandleIntHelper* withInvokeExactBehavior() override;
	static bool BE;
	static ::jdk::internal::misc::ScopedMemoryAccess* SCOPED_MEMORY_ACCESS;
	static const int32_t VM_ALIGN = 3; // ::java::lang::Integer::BYTES - 1
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("BYTES")
#pragma pop_macro("BE")
#pragma pop_macro("VM_ALIGN")
#pragma pop_macro("FORM")
#pragma pop_macro("SCOPED_MEMORY_ACCESS")

#endif // _java_lang_invoke_MemoryAccessVarHandleIntHelper_h_