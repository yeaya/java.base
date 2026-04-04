#include <java/lang/invoke/VarHandleChars$FieldStaticReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleChars$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleChars.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleChars$FieldStaticReadOnly = ::java::lang::invoke::VarHandleChars$FieldStaticReadOnly;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleChars$FieldStaticReadWrite::FORM = nullptr;

void VarHandleChars$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleChars$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleChars$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleChars$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleChars$FieldStaticReadWrite::FORM, exact);
}

VarHandleChars$FieldStaticReadWrite* VarHandleChars$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleChars$FieldStaticReadWrite* VarHandleChars$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleChars$FieldStaticReadWrite::set($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putChar($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldStaticReadWrite::setVolatile($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharVolatile($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldStaticReadWrite::setOpaque($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharOpaque($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldStaticReadWrite::setRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleChars$FieldStaticReadWrite::compareAndSet($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetChar($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeChar($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharPlain($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetChar($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndSet($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetChar($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndAdd($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddChar($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrChar($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndChar($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorChar($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, char16_t value) {
	$init(VarHandleChars$FieldStaticReadWrite);
	$var(VarHandleChars$FieldStaticReadWrite, handle, $cast(VarHandleChars$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldStaticReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleChars$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleChars$FieldStaticReadWrite::class$, nullptr, $Character::TYPE, $$new($ClassArray, 0)));
}

VarHandleChars$FieldStaticReadWrite::VarHandleChars$FieldStaticReadWrite() {
}

$Class* VarHandleChars$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleChars$FieldStaticReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleChars$FieldStaticReadWrite, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(VarHandleChars$FieldStaticReadWrite, init$, void, Object$*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;CC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, compareAndExchange, char16_t, $VarHandle*, char16_t, char16_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;CC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, compareAndExchangeAcquire, char16_t, $VarHandle*, char16_t, char16_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;CC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, compareAndExchangeRelease, char16_t, $VarHandle*, char16_t, char16_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, char16_t, char16_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndAdd, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndAddAcquire, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndAddRelease, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndBitwiseAnd, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndBitwiseAndAcquire, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndBitwiseAndRelease, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndBitwiseOr, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndBitwiseOrAcquire, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndBitwiseOrRelease, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndBitwiseXor, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndBitwiseXorAcquire, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndBitwiseXorRelease, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndSet, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndSetAcquire, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, getAndSetRelease, char16_t, $VarHandle*, char16_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, set, void, $VarHandle*, char16_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, setOpaque, void, $VarHandle*, char16_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, setRelease, void, $VarHandle*, char16_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, setVolatile, void, $VarHandle*, char16_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$FieldStaticReadWrite, withInvokeBehavior, VarHandleChars$FieldStaticReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleChars$FieldStaticReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleChars$FieldStaticReadWrite", "java.lang.invoke.VarHandleChars", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleChars$FieldStaticReadOnly", "java.lang.invoke.VarHandleChars", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleChars$FieldStaticReadWrite",
		"java.lang.invoke.VarHandleChars$FieldStaticReadOnly",
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
	$loadClass(VarHandleChars$FieldStaticReadWrite, name, initialize, &classInfo$$, VarHandleChars$FieldStaticReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleChars$FieldStaticReadWrite);
	});
	return class$;
}

$Class* VarHandleChars$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java