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
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
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

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_checkAddress2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_convEndian7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_convEndian8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_get9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getAndSet11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getAndSetAcquire12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getAndSetRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getOpaque14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getVolatile15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_offset16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_offsetNoVMAlignCheck17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_set18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_setOpaque19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_setRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_setVolatile21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_weakCompareAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_weakCompareAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_weakCompareAndSetPlain24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleFloatHelper_MethodAnnotations_weakCompareAndSetRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _MemoryAccessVarHandleFloatHelper_FieldInfo_[] = {
	{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleFloatHelper, BE)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleFloatHelper, SCOPED_MEMORY_ACCESS)},
	{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleFloatHelper, VM_ALIGN)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleFloatHelper, FORM)},
	{}
};

$MethodInfo _MemoryAccessVarHandleFloatHelper_MethodInfo_[] = {
	{"<init>", "(ZZJJZ)V", nullptr, 0, $method(static_cast<void(MemoryAccessVarHandleFloatHelper::*)(bool,bool,int64_t,int64_t,bool)>(&MemoryAccessVarHandleFloatHelper::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $method(static_cast<$MemorySegmentProxy*(*)(Object$*,int64_t,int64_t,bool)>(&MemoryAccessVarHandleFloatHelper::checkAddress)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_checkAddress2},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int64_t,float,float)>(&MemoryAccessVarHandleFloatHelper::compareAndExchange)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int64_t,float,float)>(&MemoryAccessVarHandleFloatHelper::compareAndExchangeAcquire)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int64_t,float,float)>(&MemoryAccessVarHandleFloatHelper::compareAndExchangeRelease)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,float,float)>(&MemoryAccessVarHandleFloatHelper::compareAndSet)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_compareAndSet6},
	{"convEndian", "(ZF)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(bool,float)>(&MemoryAccessVarHandleFloatHelper::convEndian)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_convEndian7},
	{"convEndian", "(ZI)F", nullptr, $STATIC, $method(static_cast<float(*)(bool,int32_t)>(&MemoryAccessVarHandleFloatHelper::convEndian)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_convEndian8},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleFloatHelper::get)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_get9},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleFloatHelper::getAcquire)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getAcquire10},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int64_t,float)>(&MemoryAccessVarHandleFloatHelper::getAndSet)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getAndSet11},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int64_t,float)>(&MemoryAccessVarHandleFloatHelper::getAndSetAcquire)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getAndSetAcquire12},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int64_t,float)>(&MemoryAccessVarHandleFloatHelper::getAndSetRelease)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getAndSetRelease13},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleFloatHelper::getOpaque)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getOpaque14},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleFloatHelper::getVolatile)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_getVolatile15},
	{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleFloatHelper::offset)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_offset16},
	{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleFloatHelper::offsetNoVMAlignCheck)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_offsetNoVMAlignCheck17},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,float)>(&MemoryAccessVarHandleFloatHelper::set)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_set18},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,float)>(&MemoryAccessVarHandleFloatHelper::setOpaque)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_setOpaque19},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,float)>(&MemoryAccessVarHandleFloatHelper::setRelease)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_setRelease20},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JF)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,float)>(&MemoryAccessVarHandleFloatHelper::setVolatile)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_setVolatile21},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,float,float)>(&MemoryAccessVarHandleFloatHelper::weakCompareAndSet)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_weakCompareAndSet22},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,float,float)>(&MemoryAccessVarHandleFloatHelper::weakCompareAndSetAcquire)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_weakCompareAndSetAcquire23},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,float,float)>(&MemoryAccessVarHandleFloatHelper::weakCompareAndSetPlain)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_weakCompareAndSetPlain24},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JFF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,float,float)>(&MemoryAccessVarHandleFloatHelper::weakCompareAndSetRelease)), nullptr, nullptr, _MemoryAccessVarHandleFloatHelper_MethodAnnotations_weakCompareAndSetRelease25},
	{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleFloatHelper;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleFloatHelper;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MemoryAccessVarHandleFloatHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MemoryAccessVarHandleFloatHelper",
	"java.lang.invoke.MemoryAccessVarHandleBase",
	nullptr,
	_MemoryAccessVarHandleFloatHelper_FieldInfo_,
	_MemoryAccessVarHandleFloatHelper_MethodInfo_
};

$Object* allocate$MemoryAccessVarHandleFloatHelper($Class* clazz) {
	return $of($alloc(MemoryAccessVarHandleFloatHelper));
}

bool MemoryAccessVarHandleFloatHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleFloatHelper::FORM = nullptr;

void MemoryAccessVarHandleFloatHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleFloatHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleFloatHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	$init($Float);
	$init($Long);
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
	if (((int64_t)(address & (uint64_t)(int64_t)MemoryAccessVarHandleFloatHelper::VM_ALIGN)) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleFloatHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
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

float MemoryAccessVarHandleFloatHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int32_t rawValue = $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), $nc(handle)->be);
	return $Float::intBitsToFloat(rawValue);
}

void MemoryAccessVarHandleFloatHelper::set($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, var$2, $Float::floatToRawIntBits(value), $nc(handle)->be);
}

float MemoryAccessVarHandleFloatHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getIntVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleFloatHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->putIntVolatile(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

float MemoryAccessVarHandleFloatHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getIntAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleFloatHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->putIntRelease(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

float MemoryAccessVarHandleFloatHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getIntOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleFloatHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->putIntOpaque(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleFloatHelper::compareAndSet($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->compareAndSetInt(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

float MemoryAccessVarHandleFloatHelper::compareAndExchange($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeInt(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

float MemoryAccessVarHandleFloatHelper::compareAndExchangeAcquire($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntAcquire(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

float MemoryAccessVarHandleFloatHelper::compareAndExchangeRelease($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian(handle->be, expected);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->compareAndExchangeIntRelease(var$0, var$1, var$2, var$3, convEndian(handle->be, value)));
}

bool MemoryAccessVarHandleFloatHelper::weakCompareAndSetPlain($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntPlain(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleFloatHelper::weakCompareAndSet($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetInt(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleFloatHelper::weakCompareAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntAcquire(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

bool MemoryAccessVarHandleFloatHelper::weakCompareAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, float expected, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	int32_t var$3 = convEndian($nc(handle)->be, expected);
	return $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->weakCompareAndSetIntRelease(var$0, var$1, var$2, var$3, convEndian($nc(handle)->be, value));
}

float MemoryAccessVarHandleFloatHelper::getAndSet($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getAndSetInt(var$0, var$1, var$2, convEndian(handle->be, value)));
}

float MemoryAccessVarHandleFloatHelper::getAndSetAcquire($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getAndSetIntAcquire(var$0, var$1, var$2, convEndian(handle->be, value)));
}

float MemoryAccessVarHandleFloatHelper::getAndSetRelease($VarHandle* ob, Object$* obb, int64_t base, float value) {
	$init(MemoryAccessVarHandleFloatHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS)->getAndSetIntRelease(var$0, var$1, var$2, convEndian(handle->be, value)));
}

void clinit$MemoryAccessVarHandleFloatHelper($Class* class$) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleFloatHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleFloatHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$init($Float);
	$init($Long);
	$assignStatic(MemoryAccessVarHandleFloatHelper::FORM, $new($VarForm, MemoryAccessVarHandleFloatHelper::class$, $MemorySegmentProxy::class$, $Float::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleFloatHelper::MemoryAccessVarHandleFloatHelper() {
}

$Class* MemoryAccessVarHandleFloatHelper::load$($String* name, bool initialize) {
	$loadClass(MemoryAccessVarHandleFloatHelper, name, initialize, &_MemoryAccessVarHandleFloatHelper_ClassInfo_, clinit$MemoryAccessVarHandleFloatHelper, allocate$MemoryAccessVarHandleFloatHelper);
	return class$;
}

$Class* MemoryAccessVarHandleFloatHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java