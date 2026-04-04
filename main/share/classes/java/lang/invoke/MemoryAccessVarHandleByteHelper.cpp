#include <java/lang/invoke/MemoryAccessVarHandleByteHelper.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/MemoryAccessVarHandleBase.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef BE
#undef FORM
#undef SCOPED_MEMORY_ACCESS
#undef TYPE
#undef UNSAFE
#undef VM_ALIGN

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryAccessVarHandleBase = ::java::lang::invoke::MemoryAccessVarHandleBase;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace lang {
		namespace invoke {

bool MemoryAccessVarHandleByteHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleByteHelper::FORM = nullptr;

void MemoryAccessVarHandleByteHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleByteHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleByteHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	return $nc(accessType)->accessModeType($MemorySegmentProxy::class$, $Byte::TYPE, $$new($ClassArray, {$Long::TYPE}));
}

MemoryAccessVarHandleByteHelper* MemoryAccessVarHandleByteHelper::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleByteHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, true);
}

MemoryAccessVarHandleByteHelper* MemoryAccessVarHandleByteHelper::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleByteHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, false);
}

int8_t MemoryAccessVarHandleByteHelper::convEndian(bool big, int8_t n) {
	$init(MemoryAccessVarHandleByteHelper);
	return n;
}

$MemorySegmentProxy* MemoryAccessVarHandleByteHelper::checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro) {
	$init(MemoryAccessVarHandleByteHelper);
	$var($MemorySegmentProxy, oo, $cast($MemorySegmentProxy, $Objects::requireNonNull(obb)));
	$nc(oo)->checkAccess(offset, length, ro);
	return oo;
}

int64_t MemoryAccessVarHandleByteHelper::offset(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleByteHelper);
	int64_t address = offsetNoVMAlignCheck(skipAlignmentMaskCheck, bb, offset, alignmentMask);
	if ((address & MemoryAccessVarHandleByteHelper::VM_ALIGN) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleByteHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalObjectStack();
	int64_t base = $nc(bb)->unsafeGetOffset();
	int64_t address = base + offset;
	if (skipAlignmentMaskCheck) {
		if ((base & alignmentMask) != 0) {
			$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
		}
	} else if ((address & alignmentMask) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int8_t MemoryAccessVarHandleByteHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return $nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->getByte(var$0, var$1, offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask));
}

void MemoryAccessVarHandleByteHelper::set($VarHandle* ob, Object$* obb, int64_t base, int8_t value) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	$nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->putByte(var$0, var$1, offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
}

int8_t MemoryAccessVarHandleByteHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->getByteVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleByteHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, int8_t value) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->putByteVolatile(var$0, var$1, var$2, convEndian(handle->be, value));
}

int8_t MemoryAccessVarHandleByteHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->getByteAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleByteHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, int8_t value) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->putByteRelease(var$0, var$1, var$2, convEndian(handle->be, value));
}

int8_t MemoryAccessVarHandleByteHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->getByteOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleByteHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, int8_t value) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->putByteOpaque(var$0, var$1, var$2, convEndian(handle->be, value));
}

void MemoryAccessVarHandleByteHelper::clinit$($Class* clazz) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleByteHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$assignStatic(MemoryAccessVarHandleByteHelper::FORM, $new($VarForm, MemoryAccessVarHandleByteHelper::class$, $MemorySegmentProxy::class$, $Byte::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleByteHelper::MemoryAccessVarHandleByteHelper() {
}

$Class* MemoryAccessVarHandleByteHelper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleByteHelper, BE)},
		{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleByteHelper, SCOPED_MEMORY_ACCESS)},
		{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleByteHelper, VM_ALIGN)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleByteHelper, FORM)},
		{}
	};
	$CompoundAttribute checkAddressmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute convEndianmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute offsetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute offsetNoVMAlignCheckmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZZJJZ)V", nullptr, 0, $method(MemoryAccessVarHandleByteHelper, init$, void, bool, bool, int64_t, int64_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(MemoryAccessVarHandleByteHelper, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, checkAddress, $MemorySegmentProxy*, Object$*, int64_t, int64_t, bool), nullptr, nullptr, checkAddressmethodAnnotations$$},
		{"convEndian", "(ZB)B", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, convEndian, int8_t, bool, int8_t), nullptr, nullptr, convEndianmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)B", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, get, int8_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)B", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, getAcquire, int8_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)B", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, getOpaque, int8_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)B", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, getVolatile, int8_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, offset, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetmethodAnnotations$$},
		{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, offsetNoVMAlignCheck, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetNoVMAlignCheckmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JB)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, set, void, $VarHandle*, Object$*, int64_t, int8_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JB)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, setOpaque, void, $VarHandle*, Object$*, int64_t, int8_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JB)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, setRelease, void, $VarHandle*, Object$*, int64_t, int8_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JB)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleByteHelper, setVolatile, void, $VarHandle*, Object$*, int64_t, int8_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleByteHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleByteHelper, withInvokeBehavior, MemoryAccessVarHandleByteHelper*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleByteHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleByteHelper, withInvokeExactBehavior, MemoryAccessVarHandleByteHelper*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.MemoryAccessVarHandleByteHelper",
		"java.lang.invoke.MemoryAccessVarHandleBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MemoryAccessVarHandleByteHelper, name, initialize, &classInfo$$, MemoryAccessVarHandleByteHelper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryAccessVarHandleByteHelper);
	});
	return class$;
}

$Class* MemoryAccessVarHandleByteHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java