#include <java/lang/invoke/VarHandleBytes$Array.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBytes.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef AIOOBE_SUPPLIER
#undef FORM
#undef TYPE
#undef UNSAFE

using $Byte = ::java::lang::Byte;
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

$VarForm* VarHandleBytes$Array::FORM = nullptr;

void VarHandleBytes$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleBytes$Array::init$(abase, ashift, false);
}

void VarHandleBytes$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleBytes$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleBytes$Array* VarHandleBytes$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBytes$Array, this->abase, this->ashift, true);
}

VarHandleBytes$Array* VarHandleBytes$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBytes$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleBytes$Array::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, arrayTypeRef, $getClass($bytes)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($$cast($ClassDesc, arrayTypeRef->get()))));
}

$MethodType* VarHandleBytes$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType($getClass($bytes), $Byte::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int8_t VarHandleBytes$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	return $nc(array)->get(index);
}

void VarHandleBytes$Array::set($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$nc(array)->set(index, value);
}

int8_t VarHandleBytes$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getByteVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleBytes$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putByteVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getByteOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleBytes$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putByteOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase);
}

void VarHandleBytes$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

bool VarHandleBytes$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int8_t VarHandleBytes$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int8_t VarHandleBytes$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int8_t VarHandleBytes$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleBytes$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBytePlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleBytes$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleBytes$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

bool VarHandleBytes$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, expected, value);
}

int8_t VarHandleBytes$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$useLocalObjectStack();
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + $nc(handle)->abase, value);
}

void VarHandleBytes$Array::clinit$($Class* clazz) {
	$assignStatic(VarHandleBytes$Array::FORM, $new($VarForm, VarHandleBytes$Array::class$, $getClass($bytes), $Byte::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleBytes$Array::VarHandleBytes$Array() {
}

$Class* VarHandleBytes$Array::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"abase", "I", nullptr, $FINAL, $field(VarHandleBytes$Array, abase)},
		{"ashift", "I", nullptr, $FINAL, $field(VarHandleBytes$Array, ashift)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBytes$Array, FORM)},
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
		{"<init>", "(II)V", nullptr, 0, $method(VarHandleBytes$Array, init$, void, int32_t, int32_t)},
		{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(VarHandleBytes$Array, init$, void, int32_t, int32_t, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleBytes$Array, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, compareAndExchange, int8_t, $VarHandle*, Object$*, int32_t, int8_t, int8_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, compareAndExchangeAcquire, int8_t, $VarHandle*, Object$*, int32_t, int8_t, int8_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, compareAndExchangeRelease, int8_t, $VarHandle*, Object$*, int32_t, int8_t, int8_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, compareAndSet, bool, $VarHandle*, Object$*, int32_t, int8_t, int8_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleBytes$Array, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, get, int8_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAcquire, int8_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndAdd, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndAddAcquire, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndAddRelease, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndBitwiseAnd, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndBitwiseAndAcquire, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndBitwiseAndRelease, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndBitwiseOr, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndBitwiseOrAcquire, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndBitwiseOrRelease, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndBitwiseXor, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndBitwiseXorAcquire, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndBitwiseXorRelease, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndSet, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndSetAcquire, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getAndSetRelease, int8_t, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getOpaque, int8_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, getVolatile, int8_t, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, set, void, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, setOpaque, void, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, setRelease, void, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, setVolatile, void, $VarHandle*, Object$*, int32_t, int8_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$Array, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBytes$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleBytes$Array, withInvokeBehavior, VarHandleBytes$Array*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBytes$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleBytes$Array, withInvokeExactBehavior, VarHandleBytes$Array*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleBytes$Array", "java.lang.invoke.VarHandleBytes", "Array", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleBytes$Array",
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
		"java.lang.invoke.VarHandleBytes"
	};
	$loadClass(VarHandleBytes$Array, name, initialize, &classInfo$$, VarHandleBytes$Array::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleBytes$Array);
	});
	return class$;
}

$Class* VarHandleBytes$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java