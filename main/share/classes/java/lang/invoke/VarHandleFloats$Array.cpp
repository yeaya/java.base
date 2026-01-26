#include <java/lang/invoke/VarHandleFloats$Array.h>

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleFloats.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef AIOOBE_SUPPLIER
#undef FORM
#undef TYPE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
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

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_getAndAddRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_getAndSet13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_getAndSetAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_getAndSetRelease15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_getOpaque16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_getVolatile17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_set18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_setOpaque19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_setRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_setVolatile21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_weakCompareAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_weakCompareAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_weakCompareAndSetPlain24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$Array_MethodAnnotations_weakCompareAndSetRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleFloats$Array_FieldInfo_[] = {
	{"abase", "I", nullptr, $FINAL, $field(VarHandleFloats$Array, abase)},
	{"ashift", "I", nullptr, $FINAL, $field(VarHandleFloats$Array, ashift)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleFloats$Array, FORM)},
	{}
};

$MethodInfo _VarHandleFloats$Array_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(VarHandleFloats$Array, init$, void, int32_t, int32_t)},
	{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(VarHandleFloats$Array, init$, void, int32_t, int32_t, bool)},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleFloats$Array, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, compareAndExchange, float, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, compareAndExchangeAcquire, float, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, compareAndExchangeRelease, float, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, compareAndSet, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_compareAndSet6},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleFloats$Array, describeConstable, $Optional*)},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, get, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, getAcquire, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, getAndAdd, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, getAndAddAcquire, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, getAndAddRelease, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_getAndAddRelease12},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, getAndSet, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_getAndSet13},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, getAndSetAcquire, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_getAndSetAcquire14},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, getAndSetRelease, float, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_getAndSetRelease15},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, getOpaque, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_getOpaque16},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, getVolatile, float, $VarHandle*, Object$*, int32_t), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_getVolatile17},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, set, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_set18},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, setOpaque, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_setOpaque19},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, setRelease, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_setRelease20},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IF)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, setVolatile, void, $VarHandle*, Object$*, int32_t, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_setVolatile21},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_weakCompareAndSet22},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_weakCompareAndSetAcquire23},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_weakCompareAndSetPlain24},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IFF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$Array, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, float, float), nullptr, nullptr, _VarHandleFloats$Array_MethodAnnotations_weakCompareAndSetRelease25},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleFloats$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleFloats$Array, withInvokeBehavior, VarHandleFloats$Array*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleFloats$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleFloats$Array, withInvokeExactBehavior, VarHandleFloats$Array*)},
	{}
};

$InnerClassInfo _VarHandleFloats$Array_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleFloats$Array", "java.lang.invoke.VarHandleFloats", "Array", $STATIC | $FINAL},
	{}
};

$ClassInfo _VarHandleFloats$Array_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleFloats$Array",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleFloats$Array_FieldInfo_,
	_VarHandleFloats$Array_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleFloats$Array_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleFloats"
};

$Object* allocate$VarHandleFloats$Array($Class* clazz) {
	return $of($alloc(VarHandleFloats$Array));
}

$VarForm* VarHandleFloats$Array::FORM = nullptr;

void VarHandleFloats$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleFloats$Array::init$(abase, ashift, false);
}

void VarHandleFloats$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleFloats$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleFloats$Array* VarHandleFloats$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleFloats$Array, this->abase, this->ashift, true);
}

VarHandleFloats$Array* VarHandleFloats$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleFloats$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleFloats$Array::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$load($floats);
	$var($Optional, arrayTypeRef, $getClass($floats)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($cast($ClassDesc, $($nc(arrayTypeRef)->get())))));
}

$MethodType* VarHandleFloats$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($floats);
	$init($Float);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($floats), $Float::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

float VarHandleFloats$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	return $nc(array)->get(index);
}

void VarHandleFloats$Array::set($VarHandle* ob, Object$* oarray, int32_t index, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$nc(array)->set(index, value);
}

float VarHandleFloats$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleFloats$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putFloatVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

float VarHandleFloats$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleFloats$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putFloatOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

float VarHandleFloats$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getFloatAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleFloats$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putFloatRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleFloats$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, float expected, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetFloat(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

float VarHandleFloats$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, float expected, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloat(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

float VarHandleFloats$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, float expected, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloatAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

float VarHandleFloats$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, float expected, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloatRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleFloats$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, float expected, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatPlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleFloats$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, float expected, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloat(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleFloats$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, float expected, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleFloats$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, float expected, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

float VarHandleFloats$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloat(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

float VarHandleFloats$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloatAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

float VarHandleFloats$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloatRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

float VarHandleFloats$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloat(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

float VarHandleFloats$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloatAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

float VarHandleFloats$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, float value) {
	$init(VarHandleFloats$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleFloats$Array, handle, $cast(VarHandleFloats$Array, ob));
	$var($floats, array, $cast($floats, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloatRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

void clinit$VarHandleFloats$Array($Class* class$) {
	$load($floats);
	$init($Float);
	$init($Integer);
	$assignStatic(VarHandleFloats$Array::FORM, $new($VarForm, VarHandleFloats$Array::class$, $getClass($floats), $Float::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleFloats$Array::VarHandleFloats$Array() {
}

$Class* VarHandleFloats$Array::load$($String* name, bool initialize) {
	$loadClass(VarHandleFloats$Array, name, initialize, &_VarHandleFloats$Array_ClassInfo_, clinit$VarHandleFloats$Array, allocate$VarHandleFloats$Array);
	return class$;
}

$Class* VarHandleFloats$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java