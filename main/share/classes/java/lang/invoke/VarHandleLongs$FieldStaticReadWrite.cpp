#include <java/lang/invoke/VarHandleLongs$FieldStaticReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleLongs$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleLongs.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleLongs$FieldStaticReadOnly = ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleLongs$FieldStaticReadWrite::FORM = nullptr;

void VarHandleLongs$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleLongs$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleLongs$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleLongs$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleLongs$FieldStaticReadWrite::FORM, exact);
}

VarHandleLongs$FieldStaticReadWrite* VarHandleLongs$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleLongs$FieldStaticReadWrite* VarHandleLongs$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleLongs$FieldStaticReadWrite::set($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLong($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldStaticReadWrite::setVolatile($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongVolatile($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldStaticReadWrite::setOpaque($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongOpaque($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldStaticReadWrite::setRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleLongs$FieldStaticReadWrite::compareAndSet($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetLong($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLong($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongPlain($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndSet($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLong($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndAdd($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLong($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLong($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLong($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLong($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldStaticReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleLongs$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleLongs$FieldStaticReadWrite::class$, nullptr, $Long::TYPE, $$new($ClassArray, 0)));
}

VarHandleLongs$FieldStaticReadWrite::VarHandleLongs$FieldStaticReadWrite() {
}

$Class* VarHandleLongs$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleLongs$FieldStaticReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleLongs$FieldStaticReadWrite, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(VarHandleLongs$FieldStaticReadWrite, init$, void, Object$*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;JJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, compareAndExchange, int64_t, $VarHandle*, int64_t, int64_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;JJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, compareAndExchangeAcquire, int64_t, $VarHandle*, int64_t, int64_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;JJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, compareAndExchangeRelease, int64_t, $VarHandle*, int64_t, int64_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;JJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, int64_t, int64_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndAdd, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndAddAcquire, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndAddRelease, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndBitwiseAnd, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndBitwiseAndAcquire, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndBitwiseAndRelease, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndBitwiseOr, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndBitwiseOrAcquire, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndBitwiseOrRelease, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndBitwiseXor, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndBitwiseXorAcquire, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndBitwiseXorRelease, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndSet, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndSetAcquire, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, getAndSetRelease, int64_t, $VarHandle*, int64_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;J)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, set, void, $VarHandle*, int64_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;J)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, setOpaque, void, $VarHandle*, int64_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;J)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, setRelease, void, $VarHandle*, int64_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;J)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, setVolatile, void, $VarHandle*, int64_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;JJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;JJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;JJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;JJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleLongs$FieldStaticReadWrite, withInvokeBehavior, VarHandleLongs$FieldStaticReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleLongs$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleLongs$FieldStaticReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleLongs$FieldStaticReadWrite", "java.lang.invoke.VarHandleLongs", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleLongs$FieldStaticReadOnly", "java.lang.invoke.VarHandleLongs", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleLongs$FieldStaticReadWrite",
		"java.lang.invoke.VarHandleLongs$FieldStaticReadOnly",
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
	$loadClass(VarHandleLongs$FieldStaticReadWrite, name, initialize, &classInfo$$, VarHandleLongs$FieldStaticReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleLongs$FieldStaticReadWrite);
	});
	return class$;
}

$Class* VarHandleLongs$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java