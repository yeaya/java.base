#include <java/lang/invoke/MemoryAccessVarHandleLongHelper.h>
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

bool MemoryAccessVarHandleLongHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleLongHelper::FORM = nullptr;

void MemoryAccessVarHandleLongHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleLongHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleLongHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	return $nc(accessType)->accessModeType($MemorySegmentProxy::class$, $Long::TYPE, $$new($ClassArray, {$Long::TYPE}));
}

MemoryAccessVarHandleLongHelper* MemoryAccessVarHandleLongHelper::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleLongHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, true);
}

MemoryAccessVarHandleLongHelper* MemoryAccessVarHandleLongHelper::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleLongHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, false);
}

int64_t MemoryAccessVarHandleLongHelper::convEndian(bool big, int64_t n) {
	$init(MemoryAccessVarHandleLongHelper);
	return big == MemoryAccessVarHandleLongHelper::BE ? n : $Long::reverseBytes(n);
}

$MemorySegmentProxy* MemoryAccessVarHandleLongHelper::checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro) {
	$init(MemoryAccessVarHandleLongHelper);
	$var($MemorySegmentProxy, oo, $cast($MemorySegmentProxy, $Objects::requireNonNull(obb)));
	$nc(oo)->checkAccess(offset, length, ro);
	return oo;
}

int64_t MemoryAccessVarHandleLongHelper::offset(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleLongHelper);
	int64_t address = offsetNoVMAlignCheck(skipAlignmentMaskCheck, bb, offset, alignmentMask);
	if ((address & MemoryAccessVarHandleLongHelper::VM_ALIGN) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleLongHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleLongHelper);
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

int64_t MemoryAccessVarHandleLongHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), handle->be);
}

void MemoryAccessVarHandleLongHelper::set($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value, handle->be);
}

int64_t MemoryAccessVarHandleLongHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleLongHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->putLongVolatile(var$0, var$1, var$2, convEndian(handle->be, value));
}

int64_t MemoryAccessVarHandleLongHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleLongHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->putLongRelease(var$0, var$1, var$2, convEndian(handle->be, value));
}

int64_t MemoryAccessVarHandleLongHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleLongHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->putLongOpaque(var$0, var$1, var$2, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleLongHelper::compareAndSet($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->compareAndSetLong(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

int64_t MemoryAccessVarHandleLongHelper::compareAndExchange($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLong(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

int64_t MemoryAccessVarHandleLongHelper::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

int64_t MemoryAccessVarHandleLongHelper::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

bool MemoryAccessVarHandleLongHelper::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongPlain(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleLongHelper::weakCompareAndSet($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleLongHelper::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleLongHelper::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t expected, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

int64_t MemoryAccessVarHandleLongHelper::getAndSet($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndSetLong(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int64_t MemoryAccessVarHandleLongHelper::getAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndSetLongAcquire(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int64_t MemoryAccessVarHandleLongHelper::getAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndSetLongRelease(var$0, var$1, var$2, convEndian(handle->be, value)));
}

int64_t MemoryAccessVarHandleLongHelper::getAndAdd($VarHandle* ob, Object$* obb, int64_t base, int64_t delta) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndAddLong(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndAddAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t delta) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndAddLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndAddRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t delta) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndAddLongRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	} else {
		return getAndAddConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), delta);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndAddConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int64_t delta) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile($(bb->scope()), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
	} while (!$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue + delta)));
	return expectedValue;
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseOr($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrLong(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseOrRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrLongRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseOrAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseOrLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseOrConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseOrConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile($(bb->scope()), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
	} while (!$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue | value)));
	return expectedValue;
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseAnd($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndLong(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseAndRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndLongRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseAndAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseAndLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseAndConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseAndConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile($(bb->scope()), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
	} while (!$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue & value)));
	return expectedValue;
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseXor($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorLong(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseXorRelease($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorLongRelease(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseXorAcquire($VarHandle* ob, Object$* obb, int64_t base, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	if (handle->be == MemoryAccessVarHandleLongHelper::BE) {
		$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
		$var($Object, var$1, bb->unsafeGetBase());
		return $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getAndBitwiseXorLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	} else {
		return getAndBitwiseXorConvEndianWithCAS(bb, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
	}
}

int64_t MemoryAccessVarHandleLongHelper::getAndBitwiseXorConvEndianWithCAS($MemorySegmentProxy* bb, int64_t offset, int64_t value) {
	$init(MemoryAccessVarHandleLongHelper);
	$useLocalObjectStack();
	int64_t nativeExpectedValue = 0;
	int64_t expectedValue = 0;
	$var($Object, base, $nc(bb)->unsafeGetBase());
	$var($ScopedMemoryAccess$Scope, var$0, nullptr);
	do {
		nativeExpectedValue = $nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile($(bb->scope()), base, offset);
		expectedValue = $Long::reverseBytes(nativeExpectedValue);
		$assign(var$0, bb->scope());
	} while (!$nc(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, base, offset, nativeExpectedValue, $Long::reverseBytes(expectedValue ^ value)));
	return expectedValue;
}

void MemoryAccessVarHandleLongHelper::clinit$($Class* clazz) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleLongHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleLongHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$assignStatic(MemoryAccessVarHandleLongHelper::FORM, $new($VarForm, MemoryAccessVarHandleLongHelper::class$, $MemorySegmentProxy::class$, $Long::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleLongHelper::MemoryAccessVarHandleLongHelper() {
}

$Class* MemoryAccessVarHandleLongHelper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleLongHelper, BE)},
		{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleLongHelper, SCOPED_MEMORY_ACCESS)},
		{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleLongHelper, VM_ALIGN)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleLongHelper, FORM)},
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
		{"<init>", "(ZZJJZ)V", nullptr, 0, $method(MemoryAccessVarHandleLongHelper, init$, void, bool, bool, int64_t, int64_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(MemoryAccessVarHandleLongHelper, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, checkAddress, $MemorySegmentProxy*, Object$*, int64_t, int64_t, bool), nullptr, nullptr, checkAddressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, compareAndExchange, int64_t, $VarHandle*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, compareAndExchangeAcquire, int64_t, $VarHandle*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, compareAndExchangeRelease, int64_t, $VarHandle*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, compareAndSet, bool, $VarHandle*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"convEndian", "(ZJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, convEndian, int64_t, bool, int64_t), nullptr, nullptr, convEndianmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, get, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAcquire, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndAdd, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndAddAcquire, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndAddConvEndianWithCAS, int64_t, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, getAndAddConvEndianWithCASmethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndAddRelease, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseAnd, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseAndAcquire, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseAndConvEndianWithCAS, int64_t, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseAndRelease, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseOr, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseOrAcquire, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseOrConvEndianWithCAS, int64_t, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseOrRelease, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseXor, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseXorAcquire, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorConvEndianWithCAS", "(Ljdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseXorConvEndianWithCAS, int64_t, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorConvEndianWithCASmethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndBitwiseXorRelease, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndSet, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndSetAcquire, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getAndSetRelease, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getOpaque, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, getVolatile, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, offset, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetmethodAnnotations$$},
		{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, offsetNoVMAlignCheck, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetNoVMAlignCheckmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, set, void, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, setOpaque, void, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, setRelease, void, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, setVolatile, void, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, weakCompareAndSet, bool, $VarHandle*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJJ)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleLongHelper, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int64_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleLongHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleLongHelper, withInvokeBehavior, MemoryAccessVarHandleLongHelper*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleLongHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleLongHelper, withInvokeExactBehavior, MemoryAccessVarHandleLongHelper*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.MemoryAccessVarHandleLongHelper",
		"java.lang.invoke.MemoryAccessVarHandleBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MemoryAccessVarHandleLongHelper, name, initialize, &classInfo$$, MemoryAccessVarHandleLongHelper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryAccessVarHandleLongHelper);
	});
	return class$;
}

$Class* MemoryAccessVarHandleLongHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java