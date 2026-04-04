#include <java/lang/invoke/VarHandleShorts$FieldInstanceReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleShorts$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleShorts.h>
#include <java/util/Objects.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleShorts$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleShorts$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleShorts$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleShorts$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleShorts$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleShorts$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleShorts$FieldInstanceReadWrite::FORM, exact);
}

VarHandleShorts$FieldInstanceReadWrite* VarHandleShorts$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleShorts$FieldInstanceReadWrite* VarHandleShorts$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleShorts$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleShorts$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldInstanceReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleShorts$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleShorts$FieldInstanceReadWrite::class$, $Object::class$, $Short::TYPE, $$new($ClassArray, 0)));
}

VarHandleShorts$FieldInstanceReadWrite::VarHandleShorts$FieldInstanceReadWrite() {
}

$Class* VarHandleShorts$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleShorts$FieldInstanceReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleShorts$FieldInstanceReadWrite, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(VarHandleShorts$FieldInstanceReadWrite, init$, void, $Class*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, compareAndExchange, int16_t, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, compareAndExchangeAcquire, int16_t, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, compareAndExchangeRelease, int16_t, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, compareAndSet, bool, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndAdd, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndAddAcquire, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndAddRelease, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseAnd, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseAndAcquire, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseAndRelease, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseOr, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseOrAcquire, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseOrRelease, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseXor, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseXorAcquire, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseXorRelease, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndSet, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndSetAcquire, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndSetRelease, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, set, void, $VarHandle*, Object$*, int16_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, setOpaque, void, $VarHandle*, Object$*, int16_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, setRelease, void, $VarHandle*, Object$*, int16_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, setVolatile, void, $VarHandle*, Object$*, int16_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$FieldInstanceReadWrite, withInvokeBehavior, VarHandleShorts$FieldInstanceReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$FieldInstanceReadWrite, withInvokeExactBehavior, VarHandleShorts$FieldInstanceReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleShorts$FieldInstanceReadWrite", "java.lang.invoke.VarHandleShorts", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly", "java.lang.invoke.VarHandleShorts", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleShorts$FieldInstanceReadWrite",
		"java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly",
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
	$loadClass(VarHandleShorts$FieldInstanceReadWrite, name, initialize, &classInfo$$, VarHandleShorts$FieldInstanceReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleShorts$FieldInstanceReadWrite);
	});
	return class$;
}

$Class* VarHandleShorts$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java