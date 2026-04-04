#include <java/lang/invoke/VarHandleLongs$Array.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleLongs.h>
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
using $Long = ::java::lang::Long;
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

$VarForm* VarHandleLongs$Array::FORM = nullptr;

void VarHandleLongs$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleLongs$Array::init$(abase, ashift, false);
}

void VarHandleLongs$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleLongs$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleLongs$Array* VarHandleLongs$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleLongs$Array, this->abase, this->ashift, true);
}

VarHandleLongs$Array* VarHandleLongs$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleLongs$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleLongs$Array::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, arrayTypeRef, $getClass($longs)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($$cast($ClassDesc, arrayTypeRef->get()))));
}

$MethodType* VarHandleLongs$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType($getClass($longs), $Long::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int64_t VarHandleLongs$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	return $nc(array)->get(index);
}

void VarHandleLongs$Array::set($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$nc(array)->set(index, value);
}

int64_t VarHandleLongs$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleLongs$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putLongVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getLongOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleLongs$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putLongOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleLongs$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

bool VarHandleLongs$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int64_t VarHandleLongs$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int64_t VarHandleLongs$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int64_t VarHandleLongs$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleLongs$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongPlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleLongs$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleLongs$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleLongs$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int64_t VarHandleLongs$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$useLocalObjectStack();
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

void VarHandleLongs$Array::clinit$($Class* clazz) {
	$assignStatic(VarHandleLongs$Array::FORM, $new($VarForm, VarHandleLongs$Array::class$, $getClass($longs), $Long::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleLongs$Array::VarHandleLongs$Array() {
}

$Class* VarHandleLongs$Array::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"abase", "I", nullptr, $FINAL, $field(VarHandleLongs$Array, abase)},
		{"ashift", "I", nullptr, $FINAL, $field(VarHandleLongs$Array, ashift)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleLongs$Array, FORM)},
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
		{"<init>", "(II)V", nullptr, 0, $method(VarHandleLongs$Array, init$, void, int32_t, int32_t)},
		{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(VarHandleLongs$Array, init$, void, int32_t, int32_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleLongs$Array, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, compareAndExchange, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, compareAndExchangeAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, compareAndExchangeRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, compareAndSet, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleLongs$Array, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, get, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAcquire, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndAdd, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndAddAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndAddRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndBitwiseAnd, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndBitwiseAndAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndBitwiseAndRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndBitwiseOr, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndBitwiseOrAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndBitwiseOrRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndBitwiseXor, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndBitwiseXorAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndBitwiseXorRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndSet, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndSetAcquire, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getAndSetRelease, int64_t, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getOpaque, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, getVolatile, int64_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, set, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, setOpaque, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, setRelease, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, setVolatile, void, $VarHandle*, Object$*, int32_t, int64_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$Array, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleLongs$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleLongs$Array, withInvokeBehavior, VarHandleLongs$Array*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleLongs$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleLongs$Array, withInvokeExactBehavior, VarHandleLongs$Array*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleLongs$Array", "java.lang.invoke.VarHandleLongs", "Array", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleLongs$Array",
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
		"java.lang.invoke.VarHandleLongs"
	};
	$loadClass(VarHandleLongs$Array, name, initialize, &classInfo$$, VarHandleLongs$Array::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleLongs$Array);
	});
	return class$;
}

$Class* VarHandleLongs$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java