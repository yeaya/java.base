#include <java/lang/invoke/VarHandleChars$Array.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleChars.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef AIOOBE_SUPPLIER
#undef FORM
#undef TYPE
#undef UNSAFE

using $Character = ::java::lang::Character;
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

$VarForm* VarHandleChars$Array::FORM = nullptr;

void VarHandleChars$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleChars$Array::init$(abase, ashift, false);
}

void VarHandleChars$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleChars$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleChars$Array* VarHandleChars$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleChars$Array, this->abase, this->ashift, true);
}

VarHandleChars$Array* VarHandleChars$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleChars$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleChars$Array::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, arrayTypeRef, $getClass($chars)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($$cast($ClassDesc, arrayTypeRef->get()))));
}

$MethodType* VarHandleChars$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType($getClass($chars), $Character::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

char16_t VarHandleChars$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	return $nc(array)->get(index);
}

void VarHandleChars$Array::set($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$nc(array)->set(index, value);
}

char16_t VarHandleChars$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getCharVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleChars$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putCharVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getCharOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleChars$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putCharOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleChars$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

bool VarHandleChars$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

char16_t VarHandleChars$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

char16_t VarHandleChars$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

char16_t VarHandleChars$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleChars$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharPlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleChars$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleChars$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleChars$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

char16_t VarHandleChars$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$useLocalObjectStack();
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

void VarHandleChars$Array::clinit$($Class* clazz) {
	$assignStatic(VarHandleChars$Array::FORM, $new($VarForm, VarHandleChars$Array::class$, $getClass($chars), $Character::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleChars$Array::VarHandleChars$Array() {
}

$Class* VarHandleChars$Array::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"abase", "I", nullptr, $FINAL, $field(VarHandleChars$Array, abase)},
		{"ashift", "I", nullptr, $FINAL, $field(VarHandleChars$Array, ashift)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleChars$Array, FORM)},
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
		{"<init>", "(II)V", nullptr, 0, $method(VarHandleChars$Array, init$, void, int32_t, int32_t)},
		{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(VarHandleChars$Array, init$, void, int32_t, int32_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleChars$Array, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, compareAndExchange, char16_t, $VarHandle*, Object$*, int32_t, char16_t, char16_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, compareAndExchangeAcquire, char16_t, $VarHandle*, Object$*, int32_t, char16_t, char16_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, compareAndExchangeRelease, char16_t, $VarHandle*, Object$*, int32_t, char16_t, char16_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, compareAndSet, bool, $VarHandle*, Object$*, int32_t, char16_t, char16_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleChars$Array, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, get, char16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAcquire, char16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndAdd, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndAddAcquire, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndAddRelease, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndBitwiseAnd, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndBitwiseAndAcquire, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndBitwiseAndRelease, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndBitwiseOr, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndBitwiseOrAcquire, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndBitwiseOrRelease, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndBitwiseXor, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndBitwiseXorAcquire, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndBitwiseXorRelease, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndSet, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndSetAcquire, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getAndSetRelease, char16_t, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getOpaque, char16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, getVolatile, char16_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, set, void, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, setOpaque, void, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, setRelease, void, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, setVolatile, void, $VarHandle*, Object$*, int32_t, char16_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$Array, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleChars$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$Array, withInvokeBehavior, VarHandleChars$Array*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleChars$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$Array, withInvokeExactBehavior, VarHandleChars$Array*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleChars$Array", "java.lang.invoke.VarHandleChars", "Array", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleChars$Array",
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
		"java.lang.invoke.VarHandleChars"
	};
	$loadClass(VarHandleChars$Array, name, initialize, &classInfo$$, VarHandleChars$Array::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleChars$Array);
	});
	return class$;
}

$Class* VarHandleChars$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java