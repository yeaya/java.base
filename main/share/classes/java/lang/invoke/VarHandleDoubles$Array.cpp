#include <java/lang/invoke/VarHandleDoubles$Array.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleDoubles.h>
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
using $Double = ::java::lang::Double;
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
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleDoubles$Array::FORM = nullptr;

void VarHandleDoubles$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleDoubles$Array::init$(abase, ashift, false);
}

void VarHandleDoubles$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleDoubles$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleDoubles$Array* VarHandleDoubles$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$Array, this->abase, this->ashift, true);
}

VarHandleDoubles$Array* VarHandleDoubles$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleDoubles$Array::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, arrayTypeRef, $getClass($doubles)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($$cast($ClassDesc, arrayTypeRef->get()))));
}

$MethodType* VarHandleDoubles$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType($getClass($doubles), $Double::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

double VarHandleDoubles$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	return $nc(array)->get(index);
}

void VarHandleDoubles$Array::set($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$nc(array)->set(index, value);
}

double VarHandleDoubles$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleDoubles$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

double VarHandleDoubles$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleDoubles$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

double VarHandleDoubles$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleDoubles$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

bool VarHandleDoubles$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetDouble(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

double VarHandleDoubles$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDouble(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

double VarHandleDoubles$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

double VarHandleDoubles$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleDoubles$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoublePlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleDoubles$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDouble(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleDoubles$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleDoubles$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

double VarHandleDoubles$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDouble(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

double VarHandleDoubles$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

double VarHandleDoubles$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

double VarHandleDoubles$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDouble(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

double VarHandleDoubles$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

double VarHandleDoubles$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$useLocalObjectStack();
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

void VarHandleDoubles$Array::clinit$($Class* clazz) {
	$assignStatic(VarHandleDoubles$Array::FORM, $new($VarForm, VarHandleDoubles$Array::class$, $getClass($doubles), $Double::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleDoubles$Array::VarHandleDoubles$Array() {
}

$Class* VarHandleDoubles$Array::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"abase", "I", nullptr, $FINAL, $field(VarHandleDoubles$Array, abase)},
		{"ashift", "I", nullptr, $FINAL, $field(VarHandleDoubles$Array, ashift)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleDoubles$Array, FORM)},
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
	$CompoundAttribute getAndAddReleasemethodAnnotations$$[] = {
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
		{"<init>", "(II)V", nullptr, 0, $method(VarHandleDoubles$Array, init$, void, int32_t, int32_t)},
		{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(VarHandleDoubles$Array, init$, void, int32_t, int32_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleDoubles$Array, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, compareAndExchange, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, compareAndExchangeAcquire, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, compareAndExchangeRelease, double, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, compareAndSet, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleDoubles$Array, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, get, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, getAcquire, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, getAndAdd, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, getAndAddAcquire, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, getAndAddRelease, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, getAndSet, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, getAndSetAcquire, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, getAndSetRelease, double, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, getOpaque, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, getVolatile, double, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, set, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, setOpaque, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, setRelease, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, setVolatile, void, $VarHandle*, Object$*, int32_t, double), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$Array, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, double, double), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleDoubles$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleDoubles$Array, withInvokeBehavior, VarHandleDoubles$Array*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleDoubles$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleDoubles$Array, withInvokeExactBehavior, VarHandleDoubles$Array*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleDoubles$Array", "java.lang.invoke.VarHandleDoubles", "Array", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleDoubles$Array",
		"java.lang.invoke.VarHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleDoubles"
	};
	$loadClass(VarHandleDoubles$Array, name, initialize, &classInfo$$, VarHandleDoubles$Array::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleDoubles$Array);
	});
	return class$;
}

$Class* VarHandleDoubles$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java