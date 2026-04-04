#include <java/lang/invoke/VarHandleShorts$FieldStaticReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleShorts$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleShorts.h>
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
using $VarHandleShorts$FieldStaticReadOnly = ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleShorts$FieldStaticReadWrite::FORM = nullptr;

void VarHandleShorts$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleShorts$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleShorts$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleShorts$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleShorts$FieldStaticReadWrite::FORM, exact);
}

VarHandleShorts$FieldStaticReadWrite* VarHandleShorts$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleShorts$FieldStaticReadWrite* VarHandleShorts$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleShorts$FieldStaticReadWrite::set($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShort($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldStaticReadWrite::setVolatile($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortVolatile($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldStaticReadWrite::setOpaque($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortOpaque($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldStaticReadWrite::setRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleShorts$FieldStaticReadWrite::compareAndSet($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetShort($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShort($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortPlain($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShort($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndSet($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShort($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndAdd($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShort($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShort($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShort($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShort($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldStaticReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleShorts$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleShorts$FieldStaticReadWrite::class$, nullptr, $Short::TYPE, $$new($ClassArray, 0)));
}

VarHandleShorts$FieldStaticReadWrite::VarHandleShorts$FieldStaticReadWrite() {
}

$Class* VarHandleShorts$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleShorts$FieldStaticReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleShorts$FieldStaticReadWrite, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(VarHandleShorts$FieldStaticReadWrite, init$, void, Object$*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, compareAndExchange, int16_t, $VarHandle*, int16_t, int16_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, compareAndExchangeAcquire, int16_t, $VarHandle*, int16_t, int16_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, compareAndExchangeRelease, int16_t, $VarHandle*, int16_t, int16_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, int16_t, int16_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndAdd, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndAddAcquire, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndAddRelease, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseAnd, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseAndAcquire, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseAndRelease, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseOr, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseOrAcquire, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseOrRelease, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseXor, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseXorAcquire, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseXorRelease, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndSet, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndSetAcquire, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndSetRelease, int16_t, $VarHandle*, int16_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, set, void, $VarHandle*, int16_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, setOpaque, void, $VarHandle*, int16_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, setRelease, void, $VarHandle*, int16_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, setVolatile, void, $VarHandle*, int16_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, int16_t, int16_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$FieldStaticReadWrite, withInvokeBehavior, VarHandleShorts$FieldStaticReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleShorts$FieldStaticReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleShorts$FieldStaticReadWrite", "java.lang.invoke.VarHandleShorts", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleShorts$FieldStaticReadOnly", "java.lang.invoke.VarHandleShorts", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleShorts$FieldStaticReadWrite",
		"java.lang.invoke.VarHandleShorts$FieldStaticReadOnly",
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
	$loadClass(VarHandleShorts$FieldStaticReadWrite, name, initialize, &classInfo$$, VarHandleShorts$FieldStaticReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleShorts$FieldStaticReadWrite);
	});
	return class$;
}

$Class* VarHandleShorts$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java