#include <java/lang/invoke/MemoryAccessVarHandleShortHelper.h>

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
using $Short = ::java::lang::Short;
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

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_checkAddress2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_convEndian3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_offset8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_offsetNoVMAlignCheck9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_set10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_setOpaque11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_setRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleShortHelper_MethodAnnotations_setVolatile13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _MemoryAccessVarHandleShortHelper_FieldInfo_[] = {
	{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleShortHelper, BE)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleShortHelper, SCOPED_MEMORY_ACCESS)},
	{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleShortHelper, VM_ALIGN)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleShortHelper, FORM)},
	{}
};

$MethodInfo _MemoryAccessVarHandleShortHelper_MethodInfo_[] = {
	{"<init>", "(ZZJJZ)V", nullptr, 0, $method(static_cast<void(MemoryAccessVarHandleShortHelper::*)(bool,bool,int64_t,int64_t,bool)>(&MemoryAccessVarHandleShortHelper::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $method(static_cast<$MemorySegmentProxy*(*)(Object$*,int64_t,int64_t,bool)>(&MemoryAccessVarHandleShortHelper::checkAddress)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_checkAddress2},
	{"convEndian", "(ZS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(bool,int16_t)>(&MemoryAccessVarHandleShortHelper::convEndian)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_convEndian3},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleShortHelper::get)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleShortHelper::getAcquire)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleShortHelper::getOpaque)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleShortHelper::getVolatile)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_getVolatile7},
	{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleShortHelper::offset)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_offset8},
	{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleShortHelper::offsetNoVMAlignCheck)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_offsetNoVMAlignCheck9},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int16_t)>(&MemoryAccessVarHandleShortHelper::set)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_set10},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int16_t)>(&MemoryAccessVarHandleShortHelper::setOpaque)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_setOpaque11},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int16_t)>(&MemoryAccessVarHandleShortHelper::setRelease)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_setRelease12},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,int16_t)>(&MemoryAccessVarHandleShortHelper::setVolatile)), nullptr, nullptr, _MemoryAccessVarHandleShortHelper_MethodAnnotations_setVolatile13},
	{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleShortHelper;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleShortHelper;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MemoryAccessVarHandleShortHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MemoryAccessVarHandleShortHelper",
	"java.lang.invoke.MemoryAccessVarHandleBase",
	nullptr,
	_MemoryAccessVarHandleShortHelper_FieldInfo_,
	_MemoryAccessVarHandleShortHelper_MethodInfo_
};

$Object* allocate$MemoryAccessVarHandleShortHelper($Class* clazz) {
	return $of($alloc(MemoryAccessVarHandleShortHelper));
}

bool MemoryAccessVarHandleShortHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleShortHelper::FORM = nullptr;

void MemoryAccessVarHandleShortHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleShortHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleShortHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	$init($Short);
	$init($Long);
	return $nc(accessType)->accessModeType($MemorySegmentProxy::class$, $Short::TYPE, $$new($ClassArray, {$Long::TYPE}));
}

MemoryAccessVarHandleShortHelper* MemoryAccessVarHandleShortHelper::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleShortHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, true);
}

MemoryAccessVarHandleShortHelper* MemoryAccessVarHandleShortHelper::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleShortHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, false);
}

int16_t MemoryAccessVarHandleShortHelper::convEndian(bool big, int16_t n) {
	$init(MemoryAccessVarHandleShortHelper);
	return big == MemoryAccessVarHandleShortHelper::BE ? n : $Short::reverseBytes(n);
}

$MemorySegmentProxy* MemoryAccessVarHandleShortHelper::checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro) {
	$init(MemoryAccessVarHandleShortHelper);
	$var($MemorySegmentProxy, oo, $cast($MemorySegmentProxy, $Objects::requireNonNull(obb)));
	$nc(oo)->checkAccess(offset, length, ro);
	return oo;
}

int64_t MemoryAccessVarHandleShortHelper::offset(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleShortHelper);
	int64_t address = offsetNoVMAlignCheck(skipAlignmentMaskCheck, bb, offset, alignmentMask);
	if (((int64_t)(address & (uint64_t)(int64_t)MemoryAccessVarHandleShortHelper::VM_ALIGN)) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleShortHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleShortHelper);
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

int16_t MemoryAccessVarHandleShortHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return $nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->getShortUnaligned(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), $nc(handle)->be);
}

void MemoryAccessVarHandleShortHelper::set($VarHandle* ob, Object$* obb, int64_t base, int16_t value) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	$nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->putShortUnaligned(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value, $nc(handle)->be);
}

int16_t MemoryAccessVarHandleShortHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->getShortVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleShortHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, int16_t value) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->putShortVolatile(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

int16_t MemoryAccessVarHandleShortHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->getShortAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleShortHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, int16_t value) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->putShortRelease(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

int16_t MemoryAccessVarHandleShortHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->getShortOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleShortHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, int16_t value) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->putShortOpaque(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

void clinit$MemoryAccessVarHandleShortHelper($Class* class$) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleShortHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$init($Short);
	$init($Long);
	$assignStatic(MemoryAccessVarHandleShortHelper::FORM, $new($VarForm, MemoryAccessVarHandleShortHelper::class$, $MemorySegmentProxy::class$, $Short::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleShortHelper::MemoryAccessVarHandleShortHelper() {
}

$Class* MemoryAccessVarHandleShortHelper::load$($String* name, bool initialize) {
	$loadClass(MemoryAccessVarHandleShortHelper, name, initialize, &_MemoryAccessVarHandleShortHelper_ClassInfo_, clinit$MemoryAccessVarHandleShortHelper, allocate$MemoryAccessVarHandleShortHelper);
	return class$;
}

$Class* MemoryAccessVarHandleShortHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java