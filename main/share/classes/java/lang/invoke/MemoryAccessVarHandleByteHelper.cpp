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
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_checkAddress2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_convEndian3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_offset8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_offsetNoVMAlignCheck9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_set10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_setOpaque11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_setRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleByteHelper_MethodAnnotations_setVolatile13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _MemoryAccessVarHandleByteHelper_FieldInfo_[] = {
	{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleByteHelper, BE)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleByteHelper, SCOPED_MEMORY_ACCESS)},
	{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleByteHelper, VM_ALIGN)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleByteHelper, FORM)},
	{}
};

$MethodInfo _MemoryAccessVarHandleByteHelper_MethodInfo_[] = {
	{"<init>", "(ZZJJZ)V", nullptr, 0, $method(static_cast<void(MemoryAccessVarHandleByteHelper::*)(bool,bool,int64_t,int64_t,bool)>(&MemoryAccessVarHandleByteHelper::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $method(static_cast<$MemorySegmentProxy*(*)(Object$*,int64_t,int64_t,bool)>(&MemoryAccessVarHandleByteHelper::checkAddress)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_checkAddress2},
	{"convEndian", "(ZB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(bool,int8_t)>(&MemoryAccessVarHandleByteHelper::convEndian)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_convEndian3},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleByteHelper::get)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleByteHelper::getAcquire)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleByteHelper::getOpaque)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleByteHelper::getVolatile)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_getVolatile7},
	{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleByteHelper::offset)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_offset8},
	{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleByteHelper::offsetNoVMAlignCheck)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_offsetNoVMAlignCheck9},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JB)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int8_t)>(&MemoryAccessVarHandleByteHelper::set)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_set10},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JB)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int8_t)>(&MemoryAccessVarHandleByteHelper::setOpaque)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_setOpaque11},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JB)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int8_t)>(&MemoryAccessVarHandleByteHelper::setRelease)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_setRelease12},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JB)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int8_t)>(&MemoryAccessVarHandleByteHelper::setVolatile)), nullptr, nullptr, _MemoryAccessVarHandleByteHelper_MethodAnnotations_setVolatile13},
	{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleByteHelper;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleByteHelper;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MemoryAccessVarHandleByteHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MemoryAccessVarHandleByteHelper",
	"java.lang.invoke.MemoryAccessVarHandleBase",
	nullptr,
	_MemoryAccessVarHandleByteHelper_FieldInfo_,
	_MemoryAccessVarHandleByteHelper_MethodInfo_
};

$Object* allocate$MemoryAccessVarHandleByteHelper($Class* clazz) {
	return $of($alloc(MemoryAccessVarHandleByteHelper));
}

bool MemoryAccessVarHandleByteHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleByteHelper::FORM = nullptr;

void MemoryAccessVarHandleByteHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleByteHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleByteHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	$init($Byte);
	$init($Long);
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
	if (((int64_t)(address & (uint64_t)(int64_t)MemoryAccessVarHandleByteHelper::VM_ALIGN)) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleByteHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleByteHelper);
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

int8_t MemoryAccessVarHandleByteHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return $nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->getByte(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask));
}

void MemoryAccessVarHandleByteHelper::set($VarHandle* ob, Object$* obb, int64_t base, int8_t value) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	$nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->putByte(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value);
}

int8_t MemoryAccessVarHandleByteHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->getByteVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleByteHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, int8_t value) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->putByteVolatile(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

int8_t MemoryAccessVarHandleByteHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->getByteAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleByteHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, int8_t value) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->putByteRelease(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

int8_t MemoryAccessVarHandleByteHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->getByteOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleByteHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, int8_t value) {
	$init(MemoryAccessVarHandleByteHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS)->putByteOpaque(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

void clinit$MemoryAccessVarHandleByteHelper($Class* class$) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleByteHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleByteHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$init($Byte);
	$init($Long);
	$assignStatic(MemoryAccessVarHandleByteHelper::FORM, $new($VarForm, MemoryAccessVarHandleByteHelper::class$, $MemorySegmentProxy::class$, $Byte::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleByteHelper::MemoryAccessVarHandleByteHelper() {
}

$Class* MemoryAccessVarHandleByteHelper::load$($String* name, bool initialize) {
	$loadClass(MemoryAccessVarHandleByteHelper, name, initialize, &_MemoryAccessVarHandleByteHelper_ClassInfo_, clinit$MemoryAccessVarHandleByteHelper, allocate$MemoryAccessVarHandleByteHelper);
	return class$;
}

$Class* MemoryAccessVarHandleByteHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java