#include <java/lang/invoke/MemoryAccessVarHandleIntHelper.h>
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

bool MemoryAccessVarHandleIntHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleIntHelper::FORM = nullptr;

void MemoryAccessVarHandleIntHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleIntHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleIntHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	return $nc(accessType)->accessModeType($MemorySegmentProxy::class$, $Integer::TYPE, $$new($ClassArray, {$Long::TYPE}));
}

MemoryAccessVarHandleIntHelper* MemoryAccessVarHandleIntHelper::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleIntHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, true);
}

MemoryAccessVarHandleIntHelper* MemoryAccessVarHandleIntHelper::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleIntHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, false);
}

int32_t MemoryAccessVarHandleIntHelper::convEndian(bool big, int32_t n) {
	$init(MemoryAccessVarHandleIntHelper);
	return big == MemoryAccessVarHandleIntHelper::BE ? n : $Integer::reverseBytes(n);
}

$MemorySegmentProxy* MemoryAccessVarHandleIntHelper::checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro) {
	$init(MemoryAccessVarHandleIntHelper);
	$var($MemorySegmentProxy, oo, $cast($MemorySegmentProxy, $Objects::requireNonNull(obb)));
	$nc(oo)->checkAccess(offset, length, ro);
	return oo;
}

int64_t MemoryAccessVarHandleIntHelper::offset(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleIntHelper);
	int64_t address = offsetNoVMAlignCheck(skipAlignmentMaskCheck, bb, offset, alignmentMask);
	if ((address & MemoryAccessVarHandleIntHelper::VM_ALIGN) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleIntHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleIntHelper);
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

int32_t MemoryAccessVarHandleIntHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), handle->be);
}

void MemoryAccessVarHandleIntHelper::set($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value, handle->be);
}

int32_t MemoryAccessVarHandleIntHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleIntHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->putIntVolatile(var$0, var$1, var$2, convEndian(handle->be, value));
}

int32_t MemoryAccessVarHandleIntHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleIntHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->putIntRelease(var$0, var$1, var$2, convEndian(handle->be, value));
}

int32_t MemoryAccessVarHandleIntHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleIntHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->putIntOpaque(var$0, var$1, var$2, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleIntHelper::compareAndSet($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->compareAndSetInt(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

int32_t MemoryAccessVarHandleIntHelper::compareAndExchange($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeInt(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

int32_t MemoryAccessVarHandleIntHelper::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

int32_t MemoryAccessVarHandleIntHelper::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

bool MemoryAccessVarHandleIntHelper::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntPlain(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleIntHelper::weakCompareAndSet($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleIntHelper::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleIntHelper::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t expected, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

int32_t MemoryAccessVarHandleIntHelper::getAndSet($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndSetInt(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int32_t MemoryAccessVarHandleIntHelper::getAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndSetIntAcquire(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int32_t MemoryAccessVarHandleIntHelper::getAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndSetIntRelease(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int32_t MemoryAccessVarHandleIntHelper::getAndAdd($VarHandle* ob, Object$* obb, int64_t base, int32_t delta) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndAddInt(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndAddAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t delta) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndAddIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndAddRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t delta) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndAddIntRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndAddConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int32_t delta) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile($(bb->scope()), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
	} while (!$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseOr($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrInt(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseOrRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrIntRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseOrAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseOrConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile($(bb->scope()), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
	} while (!$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseAnd($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndInt(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseAndRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndIntRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseAndAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseAndConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile($(bb->scope()), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
	} while (!$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue & value)));
	return expectedValue;
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseXor($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorInt(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseXorRelease($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorIntRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseXorAcquire($VarHandle* ob, Object$* obb, int64_t base, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleIntHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int32_t MemoryAccessVarHandleIntHelper::getAndBitwiseXorConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int32_t value) {
	$init(MemoryAccessVarHandleIntHelper);
	$useLocalObjectStack();
	int32_t nativeExpectedValue = 0;
	int32_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile($(bb->scope()), base, offset);
		expectedValue = $Integer::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
	} while (!$nc(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, base, offset, nativeExpectedValue, $Integer::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void MemoryAccessVarHandleIntHelper::clinit$($Class* clazz) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleIntHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleIntHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$assignStatic(MemoryAccessVarHandleIntHelper::FORM, $new($VarForm, MemoryAccessVarHandleIntHelper::class$, $MemorySegmentProxy::class$, $Integer::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleIntHelper::MemoryAccessVarHandleIntHelper() {
}

$Class* MemoryAccessVarHandleIntHelper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleIntHelper, BE)},
		{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleIntHelper, SCOPED_MEMORY_ACCESS)},
		{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleIntHelper, VM_ALIGN)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleIntHelper, FORM)},
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
	$CompoundAttribute getmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXormethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorConvEndianWithCASmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorReleasemethodAnnotations$$[] = {
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
		{"<init>", "(ZZJJZ)V", nullptr, 0, $method(MemoryAccessVarHandleIntHelper, init$, void, bool, bool, int64_t, int64_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(MemoryAccessVarHandleIntHelper, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, checkAddress, $MemorySegmentProxy*, Object$*, int64_t, int64_t, bool), nullptr, nullptr, checkAddressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, compareAndExchange, int32_t, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, compareAndExchangeAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, compareAndExchangeRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, compareAndSet, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"convEndian", "(ZI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, convEndian, int32_t, bool, int32_t), nullptr, nullptr, convEndianmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, get, int32_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAcquire, int32_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndAdd, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndAddAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndAddConvEndianWithCAS, int32_t, $MemorySegmentProxy*, int64_t, int32_t), nullptr, nullptr, getAndAddConvEndianWithCASmethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndAddRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseAnd, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseAndAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseAndConvEndianWithCAS, int32_t, $MemorySegmentProxy*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseAndRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseOr, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseOrAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseOrConvEndianWithCAS, int32_t, $MemorySegmentProxy*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseOrRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseXor, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseXorAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseXorConvEndianWithCAS, int32_t, $MemorySegmentProxy*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndBitwiseXorRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndSet, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndSetAcquire, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getAndSetRelease, int32_t, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getOpaque, int32_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)I", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, getVolatile, int32_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, offset, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetmethodAnnotations$$},
		{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, offsetNoVMAlignCheck, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetNoVMAlignCheckmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, set, void, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, setOpaque, void, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, setRelease, void, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JI)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, setVolatile, void, $VarHandle*, Object$*, int64_t, int32_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, weakCompareAndSet, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JII)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleIntHelper, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int64_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleIntHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleIntHelper, withInvokeBehavior, MemoryAccessVarHandleIntHelper*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleIntHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleIntHelper, withInvokeExactBehavior, MemoryAccessVarHandleIntHelper*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.MemoryAccessVarHandleIntHelper",
		"java.lang.invoke.MemoryAccessVarHandleBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MemoryAccessVarHandleIntHelper, name, initialize, &classInfo$$, MemoryAccessVarHandleIntHelper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryAccessVarHandleIntHelper);
	});
	return class$;
}

$Class* MemoryAccessVarHandleIntHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java