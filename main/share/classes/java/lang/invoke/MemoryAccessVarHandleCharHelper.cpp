#include <java/lang/invoke/MemoryAccessVarHandleCharHelper.h>

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

using $Character = ::java::lang::Character;
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

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_checkAddress2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_convEndian3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_get4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_getAcquire5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_getOpaque6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_getVolatile7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_offset8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_offsetNoVMAlignCheck9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_set10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_setOpaque11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_setRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _MemoryAccessVarHandleCharHelper_MethodAnnotations_setVolatile13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _MemoryAccessVarHandleCharHelper_FieldInfo_[] = {
	{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleCharHelper, BE)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleCharHelper, SCOPED_MEMORY_ACCESS)},
	{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleCharHelper, VM_ALIGN)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleCharHelper, FORM)},
	{}
};

$MethodInfo _MemoryAccessVarHandleCharHelper_MethodInfo_[] = {
	{"<init>", "(ZZJJZ)V", nullptr, 0, $method(static_cast<void(MemoryAccessVarHandleCharHelper::*)(bool,bool,int64_t,int64_t,bool)>(&MemoryAccessVarHandleCharHelper::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $method(static_cast<$MemorySegmentProxy*(*)(Object$*,int64_t,int64_t,bool)>(&MemoryAccessVarHandleCharHelper::checkAddress)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_checkAddress2},
	{"convEndian", "(ZC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(bool,char16_t)>(&MemoryAccessVarHandleCharHelper::convEndian)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_convEndian3},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleCharHelper::get)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_get4},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleCharHelper::getAcquire)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_getAcquire5},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleCharHelper::getOpaque)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_getOpaque6},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int64_t)>(&MemoryAccessVarHandleCharHelper::getVolatile)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_getVolatile7},
	{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleCharHelper::offset)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_offset8},
	{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(bool,$MemorySegmentProxy*,int64_t,int64_t)>(&MemoryAccessVarHandleCharHelper::offsetNoVMAlignCheck)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_offsetNoVMAlignCheck9},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,char16_t)>(&MemoryAccessVarHandleCharHelper::set)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_set10},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,char16_t)>(&MemoryAccessVarHandleCharHelper::setOpaque)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_setOpaque11},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,char16_t)>(&MemoryAccessVarHandleCharHelper::setRelease)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_setRelease12},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t,char16_t)>(&MemoryAccessVarHandleCharHelper::setVolatile)), nullptr, nullptr, _MemoryAccessVarHandleCharHelper_MethodAnnotations_setVolatile13},
	{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleCharHelper;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleCharHelper;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MemoryAccessVarHandleCharHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MemoryAccessVarHandleCharHelper",
	"java.lang.invoke.MemoryAccessVarHandleBase",
	nullptr,
	_MemoryAccessVarHandleCharHelper_FieldInfo_,
	_MemoryAccessVarHandleCharHelper_MethodInfo_
};

$Object* allocate$MemoryAccessVarHandleCharHelper($Class* clazz) {
	return $of($alloc(MemoryAccessVarHandleCharHelper));
}

bool MemoryAccessVarHandleCharHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleCharHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleCharHelper::FORM = nullptr;

void MemoryAccessVarHandleCharHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleCharHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleCharHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
	$init($Character);
	$init($Long);
	return $nc(accessType)->accessModeType($MemorySegmentProxy::class$, $Character::TYPE, $$new($ClassArray, {$Long::TYPE}));
}

MemoryAccessVarHandleCharHelper* MemoryAccessVarHandleCharHelper::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleCharHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, true);
}

MemoryAccessVarHandleCharHelper* MemoryAccessVarHandleCharHelper::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(MemoryAccessVarHandleCharHelper, this->skipAlignmentMaskCheck, this->be, this->length, this->alignmentMask, false);
}

char16_t MemoryAccessVarHandleCharHelper::convEndian(bool big, char16_t n) {
	$init(MemoryAccessVarHandleCharHelper);
	return big == MemoryAccessVarHandleCharHelper::BE ? n : $Character::reverseBytes(n);
}

$MemorySegmentProxy* MemoryAccessVarHandleCharHelper::checkAddress(Object$* obb, int64_t offset, int64_t length, bool ro) {
	$init(MemoryAccessVarHandleCharHelper);
	$var($MemorySegmentProxy, oo, $cast($MemorySegmentProxy, $Objects::requireNonNull(obb)));
	$nc(oo)->checkAccess(offset, length, ro);
	return oo;
}

int64_t MemoryAccessVarHandleCharHelper::offset(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleCharHelper);
	int64_t address = offsetNoVMAlignCheck(skipAlignmentMaskCheck, bb, offset, alignmentMask);
	if (((int64_t)(address & (uint64_t)(int64_t)MemoryAccessVarHandleCharHelper::VM_ALIGN)) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleCharHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleCharHelper);
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

char16_t MemoryAccessVarHandleCharHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleCharHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return $nc(MemoryAccessVarHandleCharHelper::SCOPED_MEMORY_ACCESS)->getCharUnaligned(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), $nc(handle)->be);
}

void MemoryAccessVarHandleCharHelper::set($VarHandle* ob, Object$* obb, int64_t base, char16_t value) {
	$init(MemoryAccessVarHandleCharHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	$nc(MemoryAccessVarHandleCharHelper::SCOPED_MEMORY_ACCESS)->putCharUnaligned(var$0, var$1, offsetNoVMAlignCheck($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value, $nc(handle)->be);
}

char16_t MemoryAccessVarHandleCharHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleCharHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleCharHelper::SCOPED_MEMORY_ACCESS)->getCharVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleCharHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, char16_t value) {
	$init(MemoryAccessVarHandleCharHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleCharHelper::SCOPED_MEMORY_ACCESS)->putCharVolatile(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

char16_t MemoryAccessVarHandleCharHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleCharHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleCharHelper::SCOPED_MEMORY_ACCESS)->getCharAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleCharHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, char16_t value) {
	$init(MemoryAccessVarHandleCharHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleCharHelper::SCOPED_MEMORY_ACCESS)->putCharRelease(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

char16_t MemoryAccessVarHandleCharHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleCharHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian($nc(handle)->be, $nc(MemoryAccessVarHandleCharHelper::SCOPED_MEMORY_ACCESS)->getCharOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleCharHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, char16_t value) {
	$init(MemoryAccessVarHandleCharHelper);
	$useLocalCurrentObjectStackCache();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset($nc(handle)->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleCharHelper::SCOPED_MEMORY_ACCESS)->putCharOpaque(var$0, var$1, var$2, convEndian($nc(handle)->be, value));
}

void clinit$MemoryAccessVarHandleCharHelper($Class* class$) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleCharHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleCharHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$init($Character);
	$init($Long);
	$assignStatic(MemoryAccessVarHandleCharHelper::FORM, $new($VarForm, MemoryAccessVarHandleCharHelper::class$, $MemorySegmentProxy::class$, $Character::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleCharHelper::MemoryAccessVarHandleCharHelper() {
}

$Class* MemoryAccessVarHandleCharHelper::load$($String* name, bool initialize) {
	$loadClass(MemoryAccessVarHandleCharHelper, name, initialize, &_MemoryAccessVarHandleCharHelper_ClassInfo_, clinit$MemoryAccessVarHandleCharHelper, allocate$MemoryAccessVarHandleCharHelper);
	return class$;
}

$Class* MemoryAccessVarHandleCharHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java