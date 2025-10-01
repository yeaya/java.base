#ifndef _java_lang_invoke_MemoryAccessVarHandleDoubleHelper_h_
#define _java_lang_invoke_MemoryAccessVarHandleDoubleHelper_h_
//$ class java.lang.invoke.MemoryAccessVarHandleDoubleHelper
//$ extends java.lang.invoke.MemoryAccessVarHandleBase

#include <java/lang/Double.h>
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

class MemoryAccessVarHandleDoubleHelper : public ::java::lang::invoke::MemoryAccessVarHandleBase {
	$class(MemoryAccessVarHandleDoubleHelper, 0, ::java::lang::invoke::MemoryAccessVarHandleBase)
public:
	MemoryAccessVarHandleDoubleHelper();
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
	using ::java::lang::invoke::MemoryAccessVarHandleBase::accessModeTypeUncached;
	void init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* accessType) override;
	static ::jdk::internal::access::foreign::MemorySegmentProxy* checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro);
	static double compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double expected, double value);
	static double compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double expected, double value);
	static double compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double expected, double value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double expected, double value);
	static int64_t convEndian(bool big, double v);
	static double convEndian(bool big, int64_t rv);
	static double get(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static double getAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static double getAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double value);
	static double getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double value);
	static double getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double value);
	static double getOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static double getVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static int64_t offset(bool skipAlignmentMaskCheck, ::jdk::internal::access::foreign::MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask);
	static int64_t offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, ::jdk::internal::access::foreign::MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double expected, double value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double expected, double value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double expected, double value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, double expected, double value);
	virtual ::java::lang::invoke::MemoryAccessVarHandleDoubleHelper* withInvokeBehavior() override;
	virtual ::java::lang::invoke::MemoryAccessVarHandleDoubleHelper* withInvokeExactBehavior() override;
	static bool BE;
	static ::jdk::internal::misc::ScopedMemoryAccess* SCOPED_MEMORY_ACCESS;
	static const int32_t VM_ALIGN = 7; // ::java::lang::Double::BYTES - 1
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

#endif // _java_lang_invoke_MemoryAccessVarHandleDoubleHelper_h_