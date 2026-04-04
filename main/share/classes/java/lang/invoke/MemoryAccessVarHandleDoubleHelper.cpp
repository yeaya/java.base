#include <java/lang/invoke/MemoryAccessVarHandleDoubleHelper.h>
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
using $Double = ::java::lang::Double;
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

bool MemoryAccessVarHandleDoubleHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleDoubleHelper::FORM = nullptr;

void MemoryAccessVarHandleDoubleHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleDoubleHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleDoubleHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	return $nc(accessType)->accessModeType($MemorySegmentProxy::class$, $Double::TYPE, $$new($ClassArray, {$Long::TYPE}));
}

MemoryAccessVarHandleDoubleHelper* MemoryAccessVarHandleDoubleHelper::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleDoubleHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, true);
}

MemoryAccessVarHandleDoubleHelper* MemoryAccessVarHandleDoubleHelper::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleDoubleHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, false);
}

int64_t MemoryAccessVarHandleDoubleHelper::convEndian(bool big, double v) {
	$init(MemoryAccessVarHandleDoubleHelper);
	int64_t rv = $Double::doubleToRawLongBits(v);
	return big == MemoryAccessVarHandleDoubleHelper::BE ? rv : $Long::reverseBytes(rv);
}

double MemoryAccessVarHandleDoubleHelper::convEndian(bool big, int64_t rv) {
	$init(MemoryAccessVarHandleDoubleHelper);
	rv = big == MemoryAccessVarHandleDoubleHelper::BE ? rv : $Long::reverseBytes(rv);
	return $Double::longBitsToDouble(rv);
}

$MemorySegmentProxy* MemoryAccessVarHandleDoubleHelper::checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemorySegmentProxy, oo, $cast($MemorySegmentProxy, $Objects::requireNonNull(obb)));
	$nc(oo)->checkAccess(offset, length, ro);
	return oo;
}

int64_t MemoryAccessVarHandleDoubleHelper::offset(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleDoubleHelper);
	int64_t address = offsetNoVMAlignCheck(skipAlignmentMaskCheck, bb, offset, alignmentMask);
	if ((address & MemoryAccessVarHandleDoubleHelper::VM_ALIGN) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleDoubleHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleDoubleHelper);
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

double MemoryAccessVarHandleDoubleHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t rawValue = $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), handle->be);
	return $Double::longBitsToDouble(rawValue);
}

void MemoryAccessVarHandleDoubleHelper::set($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, var$2, $Double::doubleToRawLongBits(value), handle->be);
}

double MemoryAccessVarHandleDoubleHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleDoubleHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->putLongVolatile(var$0, var$1, var$2, convEndian(handle->be, value));
}

double MemoryAccessVarHandleDoubleHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleDoubleHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->putLongRelease(var$0, var$1, var$2, convEndian(handle->be, value));
}

double MemoryAccessVarHandleDoubleHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getLongOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleDoubleHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->putLongOpaque(var$0, var$1, var$2, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleDoubleHelper::compareAndSet($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->compareAndSetLong(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

double MemoryAccessVarHandleDoubleHelper::compareAndExchange($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLong(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

double MemoryAccessVarHandleDoubleHelper::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

double MemoryAccessVarHandleDoubleHelper::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

bool MemoryAccessVarHandleDoubleHelper::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongPlain(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleDoubleHelper::weakCompareAndSet($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleDoubleHelper::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

bool MemoryAccessVarHandleDoubleHelper::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value));
}

double MemoryAccessVarHandleDoubleHelper::getAndSet($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getAndSetLong(var$0, var$1, var$2, convEndian(handle->be, value)));
}

double MemoryAccessVarHandleDoubleHelper::getAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getAndSetLongAcquire(var$0, var$1, var$2, convEndian(handle->be, value)));
}

double MemoryAccessVarHandleDoubleHelper::getAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian(handle->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getAndSetLongRelease(var$0, var$1, var$2, convEndian(handle->be, value)));
}

void MemoryAccessVarHandleDoubleHelper::clinit$($Class* clazz) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleDoubleHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$assignStatic(MemoryAccessVarHandleDoubleHelper::FORM, $new($VarForm, MemoryAccessVarHandleDoubleHelper::class$, $MemorySegmentProxy::class$, $Double::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleDoubleHelper::MemoryAccessVarHandleDoubleHelper() {
}

$Class* MemoryAccessVarHandleDoubleHelper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleDoubleHelper, BE)},
		{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleDoubleHelper, SCOPED_MEMORY_ACCESS)},
		{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleDoubleHelper, VM_ALIGN)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleDoubleHelper, FORM)},
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
		{"<init>", "(ZZJJZ)V", nullptr, 0, $method(MemoryAccessVarHandleDoubleHelper, init$, void, bool, bool, int64_t, int64_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(MemoryAccessVarHandleDoubleHelper, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, checkAddress, $MemorySegmentProxy*, Object$*, int64_t, int64_t, bool), nullptr, nullptr, checkAddressmethodAnnotations$$},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, compareAndExchange, double, $VarHandle*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, compareAndExchangeAcquire, double, $VarHandle*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, compareAndExchangeRelease, double, $VarHandle*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, compareAndSet, bool, $VarHandle*, Object$*, int64_t, double, double), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"convEndian", "(ZD)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, convEndian, int64_t, bool, double), nullptr, nullptr, convEndianmethodAnnotations$$},
		{"convEndian", "(ZJ)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, convEndian, double, bool, int64_t), nullptr, nullptr, convEndianmethodAnnotations$$$1},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, get, double, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, getAcquire, double, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, getAndSet, double, $VarHandle*, Object$*, int64_t, double), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, getAndSetAcquire, double, $VarHandle*, Object$*, int64_t, double), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, getAndSetRelease, double, $VarHandle*, Object$*, int64_t, double), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, getOpaque, double, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)D", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, getVolatile, double, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, offset, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetmethodAnnotations$$},
		{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, offsetNoVMAlignCheck, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetNoVMAlignCheckmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, set, void, $VarHandle*, Object$*, int64_t, double), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, setOpaque, void, $VarHandle*, Object$*, int64_t, double), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, setRelease, void, $VarHandle*, Object$*, int64_t, double), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, setVolatile, void, $VarHandle*, Object$*, int64_t, double), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, weakCompareAndSet, bool, $VarHandle*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)Z", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleDoubleHelper, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int64_t, double, double), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleDoubleHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleDoubleHelper, withInvokeBehavior, MemoryAccessVarHandleDoubleHelper*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleDoubleHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleDoubleHelper, withInvokeExactBehavior, MemoryAccessVarHandleDoubleHelper*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.MemoryAccessVarHandleDoubleHelper",
		"java.lang.invoke.MemoryAccessVarHandleBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MemoryAccessVarHandleDoubleHelper, name, initialize, &classInfo$$, MemoryAccessVarHandleDoubleHelper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryAccessVarHandleDoubleHelper);
	});
	return class$;
}

$Class* MemoryAccessVarHandleDoubleHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java