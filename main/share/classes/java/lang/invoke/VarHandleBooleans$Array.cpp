#include <java/lang/invoke/VarHandleBooleans$Array.h>

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBooleans.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef AIOOBE_SUPPLIER
#undef FORM
#undef TYPE
#undef UNSAFE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$VarHandleDesc = ::java::lang::invoke::VarHandle$VarHandleDesc;
using $Optional = ::java::util::Optional;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseAnd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseAndAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseAndRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseOr13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseOrAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseOrRelease15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseXor16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseXorAcquire17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseXorRelease18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndSet19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndSetAcquire20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getAndSetRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_getVolatile23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_set24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_setOpaque25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_setRelease26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_setVolatile27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_weakCompareAndSet28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_weakCompareAndSetAcquire29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_weakCompareAndSetPlain30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$Array_MethodAnnotations_weakCompareAndSetRelease31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleBooleans$Array_FieldInfo_[] = {
	{"abase", "I", nullptr, $FINAL, $field(VarHandleBooleans$Array, abase)},
	{"ashift", "I", nullptr, $FINAL, $field(VarHandleBooleans$Array, ashift)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBooleans$Array, FORM)},
	{}
};

$MethodInfo _VarHandleBooleans$Array_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(VarHandleBooleans$Array, init$, void, int32_t, int32_t)},
	{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(VarHandleBooleans$Array, init$, void, int32_t, int32_t, bool)},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleBooleans$Array, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, compareAndExchange, bool, $VarHandle*, Object$*, int32_t, bool, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, compareAndExchangeAcquire, bool, $VarHandle*, Object$*, int32_t, bool, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, compareAndExchangeRelease, bool, $VarHandle*, Object$*, int32_t, bool, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, compareAndSet, bool, $VarHandle*, Object$*, int32_t, bool, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_compareAndSet6},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleBooleans$Array, describeConstable, $Optional*)},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, get, bool, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAcquire, bool, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAcquire9},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndBitwiseAnd, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseAnd10},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndBitwiseAndAcquire, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseAndAcquire11},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndBitwiseAndRelease, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseAndRelease12},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndBitwiseOr, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseOr13},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndBitwiseOrAcquire, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseOrAcquire14},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndBitwiseOrRelease, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseOrRelease15},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndBitwiseXor, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseXor16},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndBitwiseXorAcquire, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseXorAcquire17},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndBitwiseXorRelease, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndBitwiseXorRelease18},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndSet, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndSet19},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndSetAcquire20},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getAndSetRelease, bool, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getAndSetRelease21},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getOpaque, bool, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getOpaque22},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, getVolatile, bool, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_getVolatile23},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, set, void, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_set24},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, setOpaque, void, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_setOpaque25},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, setRelease, void, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_setRelease26},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZ)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, setVolatile, void, $VarHandle*, Object$*, int32_t, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_setVolatile27},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, bool, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_weakCompareAndSet28},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, bool, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_weakCompareAndSetAcquire29},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, bool, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_weakCompareAndSetPlain30},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$Array, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, bool, bool), nullptr, nullptr, _VarHandleBooleans$Array_MethodAnnotations_weakCompareAndSetRelease31},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBooleans$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleBooleans$Array, withInvokeBehavior, VarHandleBooleans$Array*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBooleans$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleBooleans$Array, withInvokeExactBehavior, VarHandleBooleans$Array*)},
	{}
};

$InnerClassInfo _VarHandleBooleans$Array_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBooleans$Array", "java.lang.invoke.VarHandleBooleans", "Array", $STATIC | $FINAL},
	{}
};

$ClassInfo _VarHandleBooleans$Array_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleBooleans$Array",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleBooleans$Array_FieldInfo_,
	_VarHandleBooleans$Array_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBooleans$Array_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBooleans"
};

$Object* allocate$VarHandleBooleans$Array($Class* clazz) {
	return $of($alloc(VarHandleBooleans$Array));
}

$VarForm* VarHandleBooleans$Array::FORM = nullptr;

void VarHandleBooleans$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleBooleans$Array::init$(abase, ashift, false);
}

void VarHandleBooleans$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleBooleans$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleBooleans$Array* VarHandleBooleans$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$Array, this->abase, this->ashift, true);
}

VarHandleBooleans$Array* VarHandleBooleans$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleBooleans$Array::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$load($booleans);
	$var($Optional, arrayTypeRef, $getClass($booleans)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($cast($ClassDesc, $($nc(arrayTypeRef)->get())))));
}

$MethodType* VarHandleBooleans$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($booleans);
	$init($Boolean);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($booleans), $Boolean::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

bool VarHandleBooleans$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	return $nc(array)->get(index);
}

void VarHandleBooleans$Array::set($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$nc(array)->set(index, value);
}

bool VarHandleBooleans$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleBooleans$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleBooleans$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getBooleanAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleBooleans$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetBoolean(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBooleans$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBoolean(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBooleans$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBooleanAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBooleans$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBooleanRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBooleans$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanPlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBooleans$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBoolean(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBooleans$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBooleans$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, bool expected, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBooleans$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBoolean(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBooleanAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBooleanRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBoolean(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBooleanRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBooleanAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBoolean(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBooleanRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBooleanAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBoolean(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBooleanRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBooleans$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, bool value) {
	$init(VarHandleBooleans$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleBooleans$Array, handle, $cast(VarHandleBooleans$Array, ob));
	$var($booleans, array, $cast($booleans, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBooleanAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

void clinit$VarHandleBooleans$Array($Class* class$) {
	$load($booleans);
	$init($Boolean);
	$init($Integer);
	$assignStatic(VarHandleBooleans$Array::FORM, $new($VarForm, VarHandleBooleans$Array::class$, $getClass($booleans), $Boolean::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleBooleans$Array::VarHandleBooleans$Array() {
}

$Class* VarHandleBooleans$Array::load$($String* name, bool initialize) {
	$loadClass(VarHandleBooleans$Array, name, initialize, &_VarHandleBooleans$Array_ClassInfo_, clinit$VarHandleBooleans$Array, allocate$VarHandleBooleans$Array);
	return class$;
}

$Class* VarHandleBooleans$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java