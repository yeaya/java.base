#include <java/lang/invoke/VarHandleInts$FieldStaticReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleInts$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleInts.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleInts$FieldStaticReadOnly = ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleInts$FieldStaticReadWrite::FORM = nullptr;

void VarHandleInts$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleInts$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleInts$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleInts$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleInts$FieldStaticReadWrite::FORM, exact);
}

VarHandleInts$FieldStaticReadWrite* VarHandleInts$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleInts$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleInts$FieldStaticReadWrite* VarHandleInts$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleInts$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleInts$FieldStaticReadWrite::set($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putInt($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleInts$FieldStaticReadWrite::setVolatile($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putIntVolatile($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleInts$FieldStaticReadWrite::setOpaque($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putIntOpaque($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleInts$FieldStaticReadWrite::setRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putIntRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleInts$FieldStaticReadWrite::compareAndSet($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetInt($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeInt($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleInts$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntPlain($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleInts$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleInts$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleInts$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndSet($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetInt($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetIntAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetIntRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndAdd($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddInt($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrInt($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndInt($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorInt($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleInts$FieldStaticReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleInts$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleInts$FieldStaticReadWrite::class$, nullptr, $Integer::TYPE, $$new($ClassArray, 0)));
}

VarHandleInts$FieldStaticReadWrite::VarHandleInts$FieldStaticReadWrite() {
}

$Class* VarHandleInts$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleInts$FieldStaticReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleInts$FieldStaticReadWrite, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(VarHandleInts$FieldStaticReadWrite, init$, void, Object$*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, compareAndExchange, int32_t, $VarHandle*, int32_t, int32_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, compareAndExchangeAcquire, int32_t, $VarHandle*, int32_t, int32_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;II)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, compareAndExchangeRelease, int32_t, $VarHandle*, int32_t, int32_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;II)Z", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, int32_t, int32_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndAdd, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndAddAcquire, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndAddRelease, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndBitwiseAnd, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndBitwiseAndAcquire, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndBitwiseAndRelease, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndBitwiseOr, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndBitwiseOrAcquire, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndBitwiseOrRelease, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndBitwiseXor, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndBitwiseXorAcquire, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndBitwiseXorRelease, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndSet, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndSetAcquire, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, getAndSetRelease, int32_t, $VarHandle*, int32_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;I)V", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, set, void, $VarHandle*, int32_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;I)V", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, setOpaque, void, $VarHandle*, int32_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;I)V", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, setRelease, void, $VarHandle*, int32_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;I)V", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, setVolatile, void, $VarHandle*, int32_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;II)Z", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;II)Z", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;II)Z", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;II)Z", nullptr, $STATIC, $staticMethod(VarHandleInts$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, int32_t, int32_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleInts$FieldStaticReadWrite, withInvokeBehavior, VarHandleInts$FieldStaticReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleInts$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleInts$FieldStaticReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleInts$FieldStaticReadWrite", "java.lang.invoke.VarHandleInts", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleInts$FieldStaticReadOnly", "java.lang.invoke.VarHandleInts", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleInts$FieldStaticReadWrite",
		"java.lang.invoke.VarHandleInts$FieldStaticReadOnly",
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
	$loadClass(VarHandleInts$FieldStaticReadWrite, name, initialize, &classInfo$$, VarHandleInts$FieldStaticReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleInts$FieldStaticReadWrite);
	});
	return class$;
}

$Class* VarHandleInts$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java