#include <java/lang/invoke/VarHandleInts$Array.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleInts.h>
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

$VarForm* VarHandleInts$Array::FORM = nullptr;

void VarHandleInts$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleInts$Array::init$(abase, ashift, false);
}

void VarHandleInts$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleInts$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleInts$Array* VarHandleInts$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleInts$Array, this->abase, this->ashift, true);
}

VarHandleInts$Array* VarHandleInts$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleInts$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleInts$Array::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, arrayTypeRef, $getClass($ints)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($$cast($ClassDesc, arrayTypeRef->get()))));
}

$MethodType* VarHandleInts$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType($getClass($ints), $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleInts$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	return $nc(array)->get(index);
}

void VarHandleInts$Array::set($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$nc(array)->set(index, value);
}

int32_t VarHandleInts$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleInts$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putIntVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getIntOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleInts$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putIntOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleInts$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

bool VarHandleInts$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int32_t VarHandleInts$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int32_t VarHandleInts$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int32_t VarHandleInts$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleInts$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntPlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleInts$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleInts$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleInts$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int32_t VarHandleInts$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$useLocalObjectStack();
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

void VarHandleInts$Array::clinit$($Class* clazz) {
	$assignStatic(VarHandleInts$Array::FORM, $new($VarForm, VarHandleInts$Array::class$, $getClass($ints), $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleInts$Array::VarHandleInts$Array() {
}

$Class* VarHandleInts$Array::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"abase", "I", nullptr, $FINAL, $field(VarHandleInts$Array, abase)},
		{"ashift", "I", nullptr, $FINAL, $field(VarHandleInts$Array, ashift)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleInts$Array, FORM)},
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
		{"<init>", "(II)V", nullptr, 0, $method(VarHandleInts$Array, init$, void, int32_t, int32_t)},
		{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(VarHandleInts$Array, init$, void, int32_t, int32_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleInts$Array, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, compareAndExchange, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, compareAndExchangeAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, compareAndExchangeRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, compareAndSet, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleInts$Array, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, get, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAcquire, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndAdd, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndAddAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndAddRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndBitwiseAnd, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndBitwiseAndAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndBitwiseAndRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndBitwiseOr, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndBitwiseOrAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndBitwiseOrRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndBitwiseXor, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndBitwiseXorAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndBitwiseXorRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndSet, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndSetAcquire, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getAndSetRelease, int32_t, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getOpaque, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, getVolatile, int32_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, set, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, setOpaque, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, setRelease, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, setVolatile, void, $VarHandle*, Object$*, int32_t, int32_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $staticMethod(VarHandleInts$Array, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleInts$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleInts$Array, withInvokeBehavior, VarHandleInts$Array*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleInts$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleInts$Array, withInvokeExactBehavior, VarHandleInts$Array*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleInts$Array", "java.lang.invoke.VarHandleInts", "Array", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleInts$Array",
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
		"java.lang.invoke.VarHandleInts"
	};
	$loadClass(VarHandleInts$Array, name, initialize, &classInfo$$, VarHandleInts$Array::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleInts$Array);
	});
	return class$;
}

$Class* VarHandleInts$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java