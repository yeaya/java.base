#include <java/lang/invoke/MemoryAccessVarHandleDoubleHelper.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MemoryAccessVarHandleBase.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef BE
#undef VM_ALIGN
#undef FORM
#undef UNSAFE
#undef SCOPED_MEMORY_ACCESS
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
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
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_checkAddress2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_convEndian7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_convEndian8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_get9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getAndSet11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getAndSetAcquire12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getAndSetRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getOpaque14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getVolatile15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_offset16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_offsetNoVMAlignCheck17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_set18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_setOpaque19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_setRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_setVolatile21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_weakCompareAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_weakCompareAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_weakCompareAndSetPlain24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_weakCompareAndSetRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _MemoryAccessVarHandleDoubleHelper_FieldInfo_[] = {
	{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleDoubleHelper, BE)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleDoubleHelper, SCOPED_MEMORY_ACCESS)},
	{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleDoubleHelper, VM_ALIGN)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleDoubleHelper, FORM)},
	{}
};

$MethodInfo _MemoryAccessVarHandleDoubleHelper_MethodInfo_[] = {
	{"<init>", "(ZZJJZ)V", nullptr, 0, $method(static_cast<void(MemoryAccessVarHandleDoubleHelper::*)(bool,bool,int64_t,int64_t,bool)>(&MemoryAccessVarHandleDoubleHelper::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $method(static_cast<$MemorySegmentProxy*(*)(Object$*,int64_t,int64_t,bool)>(&MemoryAccessVarHandleDoubleHelper::checkAddress)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_checkAddress2},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int64_t,double,double)>(&MemoryAccessVarHandleDoubleHelper::compareAndExchange)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int64_t,double,double)>(&MemoryAccessVarHandleDoubleHelper::compareAndExchangeAcquire)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int64_t,double,double)>(&MemoryAccessVarHandleDoubleHelper::compareAndExchangeRelease)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,double,double)>(&MemoryAccessVarHandleDoubleHelper::compareAndSet)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_compareAndSet6},
	{"convEndian", "(ZD)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,double)>(&MemoryAccessVarHandleDoubleHelper::convEndian)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_convEndian7},
	{"convEndian", "(ZJ)D", nullptr, $STATIC, $method(static_cast<double(*)(bool,int64_t)>(&MemoryAccessVarHandleDoubleHelper::convEndian)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_convEndian8},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleDoubleHelper::get)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_get9},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleDoubleHelper::getAcquire)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getAcquire10},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int64_t,double)>(&MemoryAccessVarHandleDoubleHelper::getAndSet)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getAndSet11},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int64_t,double)>(&MemoryAccessVarHandleDoubleHelper::getAndSetAcquire)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getAndSetAcquire12},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int64_t,double)>(&MemoryAccessVarHandleDoubleHelper::getAndSetRelease)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getAndSetRelease13},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleDoubleHelper::getOpaque)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getOpaque14},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleDoubleHelper::getVolatile)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_getVolatile15},
	{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleDoubleHelper::offset)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_offset16},
	{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleDoubleHelper::offsetNoVMAlignCheck)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_offsetNoVMAlignCheck17},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,double)>(&MemoryAccessVarHandleDoubleHelper::set)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_set18},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,double)>(&MemoryAccessVarHandleDoubleHelper::setOpaque)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_setOpaque19},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,double)>(&MemoryAccessVarHandleDoubleHelper::setRelease)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_setRelease20},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JD)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,double)>(&MemoryAccessVarHandleDoubleHelper::setVolatile)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_setVolatile21},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,double,double)>(&MemoryAccessVarHandleDoubleHelper::weakCompareAndSet)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_weakCompareAndSet22},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,double,double)>(&MemoryAccessVarHandleDoubleHelper::weakCompareAndSetAcquire)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_weakCompareAndSetAcquire23},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,double,double)>(&MemoryAccessVarHandleDoubleHelper::weakCompareAndSetPlain)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_weakCompareAndSetPlain24},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,double,double)>(&MemoryAccessVarHandleDoubleHelper::weakCompareAndSetRelease)), nullptr, nullptr, _MemoryAccessVarHandleDoubleHelper_MethodAnnotations_weakCompareAndSetRelease25},
	{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleDoubleHelper;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleDoubleHelper;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MemoryAccessVarHandleDoubleHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MemoryAccessVarHandleDoubleHelper",
	"java.lang.invoke.MemoryAccessVarHandleBase",
	nullptr,
	_MemoryAccessVarHandleDoubleHelper_FieldInfo_,
	_MemoryAccessVarHandleDoubleHelper_MethodInfo_
};

$Object* allocate$MemoryAccessVarHandleDoubleHelper($Class* clazz) {
	return $of($alloc(MemoryAccessVarHandleDoubleHelper));
}

bool MemoryAccessVarHandleDoubleHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleDoubleHelper::FORM = nullptr;

void MemoryAccessVarHandleDoubleHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleDoubleHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleDoubleHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	$init($Double);
	$init($Long);
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
	if (((int64_t)(address & (uint64_t)(int64_t)MemoryAccessVarHandleDoubleHelper::VM_ALIGN)) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleDoubleHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleDoubleHelper);
	int64_t base = $nc(bb)->unsafeGetOffset();
	int64_t address = base + offset;
	if (skipAlignmentMaskCheck) {
		if (((int64_t)(base & (uint64_t)alignmentMask)) != 0) {
			$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
		}
	} else if (((int64_t)(address & (uint64_t)alignmentMask)) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

double MemoryAccessVarHandleDoubleHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t rawValue = $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), $nc(handle)->be);
	return $Double::longBitsToDouble(rawValue);
}

void MemoryAccessVarHandleDoubleHelper::set($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, var$2, $Double::doubleToRawLongBits(value), $nc(handle)->be);
}

double MemoryAccessVarHandleDoubleHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getLongVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleDoubleHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->putLongVolatile(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

double MemoryAccessVarHandleDoubleHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getLongAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleDoubleHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->putLongRelease(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

double MemoryAccessVarHandleDoubleHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getLongOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleDoubleHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->putLongOpaque(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleDoubleHelper::compareAndSet($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->compareAndSetLong(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

double MemoryAccessVarHandleDoubleHelper::compareAndExchange($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLong(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

double MemoryAccessVarHandleDoubleHelper::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

double MemoryAccessVarHandleDoubleHelper::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeLongRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

bool MemoryAccessVarHandleDoubleHelper::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongPlain(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleDoubleHelper::weakCompareAndSet($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLong(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleDoubleHelper::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongAcquire(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleDoubleHelper::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, double expected, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int64_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetLongRelease(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

double MemoryAccessVarHandleDoubleHelper::getAndSet($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getAndSetLong(var$0, var$1, var$2, convEndian(handle->be, value)));
}

double MemoryAccessVarHandleDoubleHelper::getAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getAndSetLongAcquire(var$0, var$1, var$2, convEndian(handle->be, value)));
}

double MemoryAccessVarHandleDoubleHelper::getAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, double value) {
	$init(MemoryAccessVarHandleDoubleHelper);
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS)->getAndSetLongRelease(var$0, var$1, var$2, convEndian(handle->be, value)));
}

void clinit$MemoryAccessVarHandleDoubleHelper($Class* class$) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleDoubleHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleDoubleHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$init($Double);
	$init($Long);
	$assignStatic(MemoryAccessVarHandleDoubleHelper::FORM, $new($VarForm, MemoryAccessVarHandleDoubleHelper::class$, $MemorySegmentProxy::class$, $Double::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleDoubleHelper::MemoryAccessVarHandleDoubleHelper() {
}

$Class* MemoryAccessVarHandleDoubleHelper::load$($String* name, bool initialize) {
	$loadClass(MemoryAccessVarHandleDoubleHelper, name, initialize, &_MemoryAccessVarHandleDoubleHelper_ClassInfo_, clinit$MemoryAccessVarHandleDoubleHelper, allocate$MemoryAccessVarHandleDoubleHelper);
	return class$;
}

$Class* MemoryAccessVarHandleDoubleHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java