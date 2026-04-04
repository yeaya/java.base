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

namespace java {
	namespace lang {
		namespace invoke {

bool MemoryAccessVarHandleShortHelper::BE = false;
$ScopedMemoryAccess* MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS = nullptr;
$VarForm* MemoryAccessVarHandleShortHelper::FORM = nullptr;

void MemoryAccessVarHandleShortHelper::init$(bool skipAlignmentMaskCheck, bool be, int64_t length, int64_t alignmentMask, bool exact) {
	$MemoryAccessVarHandleBase::init$(MemoryAccessVarHandleShortHelper::FORM, skipAlignmentMaskCheck, be, length, alignmentMask, exact);
}

$MethodType* MemoryAccessVarHandleShortHelper::accessModeTypeUncached($VarHandle$AccessType* accessType) {
	$load($MemorySegmentProxy);
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
	if ((address & MemoryAccessVarHandleShortHelper::VM_ALIGN) != 0) {
		$throw($($MemoryAccessVarHandleBase::newIllegalStateExceptionForMisalignedAccess(address)));
	}
	return address;
}

int64_t MemoryAccessVarHandleShortHelper::offsetNoVMAlignCheck(bool skipAlignmentMaskCheck, $MemorySegmentProxy* bb, int64_t offset, int64_t alignmentMask) {
	$init(MemoryAccessVarHandleShortHelper);
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

int16_t MemoryAccessVarHandleShortHelper::get($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return $nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->getShortUnaligned(var$0, var$1, offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), handle->be);
}

void MemoryAccessVarHandleShortHelper::set($VarHandle* ob, Object$* obb, int64_t base, int16_t value) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	$nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->putShortUnaligned(var$0, var$1, offsetNoVMAlignCheck(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask), value, handle->be);
}

int16_t MemoryAccessVarHandleShortHelper::getVolatile($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->getShortVolatile(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleShortHelper::setVolatile($VarHandle* ob, Object$* obb, int64_t base, int16_t value) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->putShortVolatile(var$0, var$1, var$2, convEndian(handle->be, value));
}

int16_t MemoryAccessVarHandleShortHelper::getAcquire($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->getShortAcquire(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleShortHelper::setRelease($VarHandle* ob, Object$* obb, int64_t base, int16_t value) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->putShortRelease(var$0, var$1, var$2, convEndian(handle->be, value));
}

int16_t MemoryAccessVarHandleShortHelper::getOpaque($VarHandle* ob, Object$* obb, int64_t base) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, true));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	return convEndian(handle->be, $nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->getShortOpaque(var$0, var$1, offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask)));
}

void MemoryAccessVarHandleShortHelper::setOpaque($VarHandle* ob, Object$* obb, int64_t base, int16_t value) {
	$init(MemoryAccessVarHandleShortHelper);
	$useLocalObjectStack();
	$var($MemoryAccessVarHandleBase, handle, $cast($MemoryAccessVarHandleBase, ob));
	$var($MemorySegmentProxy, bb, checkAddress(obb, base, $nc(handle)->length, false));
	$var($ScopedMemoryAccess$Scope, var$0, $nc(bb)->scope());
	$var($Object, var$1, bb->unsafeGetBase());
	int64_t var$2 = offset(handle->skipAlignmentMaskCheck, bb, base, handle->alignmentMask);
	$nc(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS)->putShortOpaque(var$0, var$1, var$2, convEndian(handle->be, value));
}

void MemoryAccessVarHandleShortHelper::clinit$($Class* clazz) {
	$init($MethodHandleStatics);
	MemoryAccessVarHandleShortHelper::BE = $nc($MethodHandleStatics::UNSAFE)->isBigEndian();
	$assignStatic(MemoryAccessVarHandleShortHelper::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	$load($MemorySegmentProxy);
	$assignStatic(MemoryAccessVarHandleShortHelper::FORM, $new($VarForm, MemoryAccessVarHandleShortHelper::class$, $MemorySegmentProxy::class$, $Short::TYPE, $$new($ClassArray, {$Long::TYPE})));
}

MemoryAccessVarHandleShortHelper::MemoryAccessVarHandleShortHelper() {
}

$Class* MemoryAccessVarHandleShortHelper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BE", "Z", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleShortHelper, BE)},
		{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleShortHelper, SCOPED_MEMORY_ACCESS)},
		{"VM_ALIGN", "I", nullptr, $STATIC | $FINAL, $constField(MemoryAccessVarHandleShortHelper, VM_ALIGN)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(MemoryAccessVarHandleShortHelper, FORM)},
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
		{"<init>", "(ZZJJZ)V", nullptr, 0, $method(MemoryAccessVarHandleShortHelper, init$, void, bool, bool, int64_t, int64_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(MemoryAccessVarHandleShortHelper, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"checkAddress", "(Ljava/lang/Object;JJZ)Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, checkAddress, $MemorySegmentProxy*, Object$*, int64_t, int64_t, bool), nullptr, nullptr, checkAddressmethodAnnotations$$},
		{"convEndian", "(ZS)S", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, convEndian, int16_t, bool, int16_t), nullptr, nullptr, convEndianmethodAnnotations$$},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)S", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, get, int16_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)S", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, getAcquire, int16_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)S", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, getOpaque, int16_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)S", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, getVolatile, int16_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"offset", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, offset, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetmethodAnnotations$$},
		{"offsetNoVMAlignCheck", "(ZLjdk/internal/access/foreign/MemorySegmentProxy;JJ)J", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, offsetNoVMAlignCheck, int64_t, bool, $MemorySegmentProxy*, int64_t, int64_t), nullptr, nullptr, offsetNoVMAlignCheckmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JS)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, set, void, $VarHandle*, Object$*, int64_t, int16_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JS)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, setOpaque, void, $VarHandle*, Object$*, int64_t, int16_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JS)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, setRelease, void, $VarHandle*, Object$*, int64_t, int16_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JS)V", nullptr, $STATIC, $staticMethod(MemoryAccessVarHandleShortHelper, setVolatile, void, $VarHandle*, Object$*, int64_t, int16_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleShortHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleShortHelper, withInvokeBehavior, MemoryAccessVarHandleShortHelper*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/MemoryAccessVarHandleShortHelper;", nullptr, $PUBLIC, $virtualMethod(MemoryAccessVarHandleShortHelper, withInvokeExactBehavior, MemoryAccessVarHandleShortHelper*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.MemoryAccessVarHandleShortHelper",
		"java.lang.invoke.MemoryAccessVarHandleBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MemoryAccessVarHandleShortHelper, name, initialize, &classInfo$$, MemoryAccessVarHandleShortHelper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryAccessVarHandleShortHelper);
	});
	return class$;
}

$Class* MemoryAccessVarHandleShortHelper::class$ = nullptr;

		} // invoke
	} // lang
} // java