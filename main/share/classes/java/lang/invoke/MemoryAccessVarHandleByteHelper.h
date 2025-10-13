#ifndef _java_lang_invoke_MemoryAccessVarHandleByteHelper_h_
#define _java_lang_invoke_MemoryAccessVarHandleByteHelper_h_
//$ class java.lang.invoke.MemoryAccessVarHandleByteHelper
//$ extends java.lang.invoke.MemoryAccessVarHandleBase

#include <java/lang/Byte.h>
#include <java/lang/invoke/MemoryAccessVarHandleBase.h>

#pragma push_macro("BE")
#undef BE
#pragma push_macro("BYTES")
#undef BYTES
#pragma push_macro("FORM")
#undef FORM
#pragma push_macro("SCOPED_MEMORY_ACCESS")
#undef SCOPED_MEMORY_ACCESS
#pragma push_macro("VM_ALIGN")
#undef VM_ALIGN

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

class MemoryAccessVarHandleByteHelper : public ::java::lang::invoke::MemoryAccessVarHandleBase {
	$class(MemoryAccessVarHandleByteHelper, 0, ::java::lang::invoke::MemoryAccessVarHandleBase)
public:
	MemoryAccessVarHandleByteHelper();
	using ::java::lang::invoke::MemoryAccessVarHandleBase::get;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getVolatile;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getOpaque;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::getAcquire;
	using ::java::lang::invoke::MemoryAccessVarHandleBase::accessModeTypeUncached;
	void init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* accessType) override;
	static ::jdk::internal::access::foreign::MemorySegmentProxy* checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro);
	static int8_t convEndian(bool big, int8_t n);
	static int8_t get(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static int8_t getAcquire(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static int8_t getOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static int8_t getVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base);
	static int64_t offset(bool skipAlignmentMaskCheck, ::jdk::internal::access::foreign::MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask);
	static int64_t offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, ::jdk::internal::access::foreign::MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int8_t value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int8_t value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int8_t value);
	using ::java::lang::invoke::MemoryAccessVarHandleBase::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* obb, int64_t base, int8_t value);
	virtual ::java::lang::invoke::MemoryAccessVarHandleByteHelper* withInvokeBehavior() override;
	virtual ::java::lang::invoke::MemoryAccessVarHandleByteHelper* withInvokeExactBehavior() override;
	static bool BE;
	static ::jdk::internal::misc::ScopedMemoryAccess* SCOPED_MEMORY_ACCESS;
	static const int32_t VM_ALIGN = 0; // ::java::lang::Byte::BYTES - 1
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("BE")
#pragma pop_macro("BYTES")
#pragma pop_macro("FORM")
#pragma pop_macro("SCOPED_MEMORY_ACCESS")
#pragma pop_macro("VM_ALIGN")

#endif // _java_lang_invoke_MemoryAccessVarHandleByteHelper_h_