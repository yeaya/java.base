#include <java/lang/invoke/VarHandleShorts$Array.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleShorts.h>
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
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

$VarForm* VarHandleShorts$Array::FORM = nullptr;

void VarHandleShorts$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleShorts$Array::init$(abase, ashift, false);
}

void VarHandleShorts$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleShorts$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleShorts$Array* VarHandleShorts$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleShorts$Array, this->abase, this->ashift, true);
}

VarHandleShorts$Array* VarHandleShorts$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleShorts$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleShorts$Array::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, arrayTypeRef, $getClass($shorts)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($$cast($ClassDesc, arrayTypeRef->get()))));
}

$MethodType* VarHandleShorts$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType($getClass($shorts), $Short::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int16_t VarHandleShorts$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	return $nc(array)->get(index);
}

void VarHandleShorts$Array::set($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$nc(array)->set(index, value);
}

int16_t VarHandleShorts$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getShortVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleShorts$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putShortVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getShortOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleShorts$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putShortOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleShorts$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

bool VarHandleShorts$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int16_t VarHandleShorts$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int16_t VarHandleShorts$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int16_t VarHandleShorts$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleShorts$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortPlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleShorts$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleShorts$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleShorts$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int16_t VarHandleShorts$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$useLocalObjectStack();
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

void VarHandleShorts$Array::clinit$($Class* clazz) {
	$assignStatic(VarHandleShorts$Array::FORM, $new($VarForm, VarHandleShorts$Array::class$, $getClass($shorts), $Short::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleShorts$Array::VarHandleShorts$Array() {
}

$Class* VarHandleShorts$Array::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"abase", "I", nullptr, $FINAL, $field(VarHandleShorts$Array, abase)},
		{"ashift", "I", nullptr, $FINAL, $field(VarHandleShorts$Array, ashift)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleShorts$Array, FORM)},
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
	$CompoundAttribute getAndBitwiseAndmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseAndReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseOrReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXormethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndBitwiseXorReleasemethodAnnotations$$[] = {
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
		{"<init>", "(II)V", nullptr, 0, $method(VarHandleShorts$Array, init$, void, int32_t, int32_t)},
		{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(VarHandleShorts$Array, init$, void, int32_t, int32_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleShorts$Array, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, compareAndExchange, int16_t, $VarHandle*, Object$*, int32_t, int16_t, int16_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, compareAndExchangeAcquire, int16_t, $VarHandle*, Object$*, int32_t, int16_t, int16_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, compareAndExchangeRelease, int16_t, $VarHandle*, Object$*, int32_t, int16_t, int16_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, compareAndSet, bool, $VarHandle*, Object$*, int32_t, int16_t, int16_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleShorts$Array, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, get, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAcquire, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndAdd, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndAddAcquire, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndAddRelease, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndBitwiseAnd, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndBitwiseAndAcquire, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndBitwiseAndRelease, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndBitwiseOr, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndBitwiseOrAcquire, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndBitwiseOrRelease, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndBitwiseXor, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndBitwiseXorAcquire, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndBitwiseXorRelease, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndSet, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndSetAcquire, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getAndSetRelease, int16_t, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getOpaque, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, getVolatile, int16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, set, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, setOpaque, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, setRelease, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, setVolatile, void, $VarHandle*, Object$*, int32_t, int16_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$Array, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleShorts$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$Array, withInvokeBehavior, VarHandleShorts$Array*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleShorts$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$Array, withInvokeExactBehavior, VarHandleShorts$Array*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleShorts$Array", "java.lang.invoke.VarHandleShorts", "Array", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleShorts$Array",
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
		"java.lang.invoke.VarHandleShorts"
	};
	$loadClass(VarHandleShorts$Array, name, initialize, &classInfo$$, VarHandleShorts$Array::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleShorts$Array);
	});
	return class$;
}

$Class* VarHandleShorts$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java