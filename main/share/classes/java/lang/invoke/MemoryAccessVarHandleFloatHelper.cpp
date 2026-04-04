#include <java/lang/invoke/MemoryAccessVarHandleFloatHelper.h>
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

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
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

bool MemoryAccessVarHandleFloatHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleFloatHelper::FORM = nullptr;

void MemoryAccessVarHandleFloatHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleFloatHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleFloatHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	return $nc(accessType)->accessModeType($MemorySegmentProxy::class$, $Float::TYPE, $$new($ClassArray, {$Long::TYPE}));
}

MemoryAccessVarHandleFloatHelper* MemoryAccessVarHandleFloatHelper::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleFloatHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, true);
}

MemoryAccessVarHandleFloatHelper* MemoryAccessVarHandleFloatHelper::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleFloatHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, false);
}

int32_t MemoryAccessVarHandleFloatHelper::convEndian(bool big, float v) {
	$init(MemoryAccessVarHandleFloatHelper);
	int32_t rv = $Float::floatToRawIntBits(v);
	return big == MemoryAccessVarHandleFloatHelper::BE ? rv : $Integer::reverseBytes(rv);
}

float MemoryAccessVarHandleFloatHelper::convEndian(bool big, int32_t rv) {
	$init(MemoryAccessVarHandleFloatHelper);
	rv = big == MemoryAccessVarHandleFloatHelper::BE ? rv : $Integer::reverseBytes(rv);
	return $Float::intBitsToFloat(rv);
}

$MemorySegmentProxy* MemoryAccessVarHandleFloatHelper::checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro) {
	$init(MemoryAccessVarHandleFloatHelper);
	$var($MemorySegmentProxy, oo, $cast($MemorySegmentProxy, $Objects::requireNonNull(obb)));
	$nc(oo)->checkAccess(offset, length, ro);
	return oo;
}

int64_t MemoryAccessVarHandleFloatHelper::offset(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleFloatHelper);
	int64_t address = offsetNoVMAlignCheck(skipAlignmentMaskCheck, bb, offset, alignmentMask);
	if ((address & MemoryAccessVarHandleFloatHelper::VM_ALIGN) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleFloatHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleFloatHelper);
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

float MemoryAccessVarHandleFloatHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int32_t rawValue = $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), handle->be);
	return $Float::intBitsToFloat(rawValue);
}

void MemoryAccessVarHandleFloatHelper::set($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, var$2, $Float::floatToRawIntBits(value), handle->be);
}

float MemoryAccessVarHandleFloatHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleFloatHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->putIntVolatile(var$0, var$1, var$2, convEndian(handle->be, value));
}

float MemoryAccessVarHandleFloatHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleFloatHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->putIntRelease(var$0, var$1, var$2, convEndian(handle->be, value));
}

float MemoryAccessVarHandleFloatHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getIntOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleFloatHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->putIntOpaque(var$0, var$1, var$2, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleFloatHelper::compareAndSet($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->compareAndSetInt(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

float MemoryAccessVarHandleFloatHelper::compareAndExchange($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeInt(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

float MemoryAccessVarHandleFloatHelper::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

float MemoryAccessVarHandleFloatHelper::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

bool MemoryAccessVarHandleFloatHelper::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntPlain(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleFloatHelper::weakCompareAndSet($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleFloatHelper::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleFloatHelper::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

float MemoryAccessVarHandleFloatHelper::getAndSet($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getAndSetInt(var$0, var$1, var$2, convEndian(handle->be, value)));
}

float MemoryAccessVarHandleFloatHelper::getAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getAndSetIntAcquire(var$0, var$1, var$2, convEndian(handle->be, value)));
}

float MemoryAccessVarHandleFloatHelper::getAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getAndSetIntRelease(var$0, var$1, var$2, convEndian(handle->be, value)));
}

void MemoryAccessVarHandleFloatHelper::clinit$($Class* clazz) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleFloatHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$assignStatic(MemoryAccessVarHandleFloatHelper::FORM, $new($VarForm, MemoryAccessVarHandleFloatHelper::class$, $MemorySegmentProxy::class$, $Float::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleFloatHelper::MemoryAccessVarHandleFloatHelper() {
}

$Class* MemoryAccessVarHandleFloatHelper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleFloatHelper, BE)},
		{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleFloatHelper, SCOPED_MEMORY_ACCESS)},
		{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleFloatHelper, VM_ALIGN)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleFloatHelper, FORM)},
		{}
	};
	$CompoundAttribute checkAddressmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute convEndianmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute convEndianmethodAnnotations$$$1[] = {
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
	$CompoundAttribute getAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetReleasemethodAnnotations$$[] = {
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
	$CompoundAttribute weakCompareAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZZJJZ)V", nullptr, 0, $method(MemoryAccessVarHandleFloatHelper, init$, void, bool, bool, int64_t, int64_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(MemoryAccessVarHandleFloatHelper, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, checkAddress, $MemorySegmentProxy*, Object$*, int64_t, int64_t, bool), nullptr, nullptr, checkAddressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, compareAndExchange, float, $VarHandle*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, compareAndExchangeAcquire, float, $VarHandle*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, compareAndExchangeRelease, float, $VarHandle*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, compareAndSet, bool, $VarHandle*, Object$*, int64_t, float, float), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"convEndian", "(ZF)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, convEndian, int32_t, bool, float), nullptr, nullptr, convEndianmethodAnnotations$$},
		{"convEndian", "(ZI)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, convEndian, float, bool, int32_t), nullptr, nullptr, convEndianmethodAnnotations$$$1},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, get, float, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, getAcquire, float, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, getAndSet, float, $VarHandle*, Object$*, int64_t, float), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, getAndSetAcquire, float, $VarHandle*, Object$*, int64_t, float), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, getAndSetRelease, float, $VarHandle*, Object$*, int64_t, float), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, getOpaque, float, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)F", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, getVolatile, float, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, offset, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetmethodAnnotations$$},
		{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, offsetNoVMAlignCheck, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetNoVMAlignCheckmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, set, void, $VarHandle*, Object$*, int64_t, float), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, setOpaque, void, $VarHandle*, Object$*, int64_t, float), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, setRelease, void, $VarHandle*, Object$*, int64_t, float), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, setVolatile, void, $VarHandle*, Object$*, int64_t, float), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, weakCompareAndSet, bool, $VarHandle*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleFloatHelper, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int64_t, float, float), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleFloatHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleFloatHelper, withInvokeBehavior, MemoryAccessVarHandleFloatHelper*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleFloatHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleFloatHelper, withInvokeExactBehavior, MemoryAccessVarHandleFloatHelper*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.MemoryAccessVarHandleFloatHelper",
		"java.lang.invoke.MemoryAccessVarHandleBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MemoryAccessVarHandleFloatHelper, name, initialize, &classInfo$$, MemoryAccessVarHandleFloatHelper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryAccessVarHandleFloatHelper);
	});
	return class$;
}

$Class* MemoryAccessVarHandleFloatHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java