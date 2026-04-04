#include <java/lang/invoke/VarHandleBooleans$FieldStaticReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBooleans$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleBooleans.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleBooleans$FieldStaticReadOnly = ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleBooleans$FieldStaticReadWrite::FORM = nullptr;

void VarHandleBooleans$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleBooleans$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleBooleans$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleBooleans$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleBooleans$FieldStaticReadWrite::FORM, exact);
}

VarHandleBooleans$FieldStaticReadWrite* VarHandleBooleans$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleBooleans$FieldStaticReadWrite* VarHandleBooleans$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleBooleans$FieldStaticReadWrite::set($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBoolean($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldStaticReadWrite::setVolatile($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanVolatile($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldStaticReadWrite::setOpaque($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanOpaque($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldStaticReadWrite::setRelease($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::compareAndSet($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetBoolean($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBoolean($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBooleanAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBooleanRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanPlain($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBoolean($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndSet($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBoolean($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBooleanAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBooleanRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBoolean($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBooleanRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBooleanAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBoolean($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBooleanRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBooleanAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBoolean($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBooleanRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBooleanAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldStaticReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleBooleans$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleBooleans$FieldStaticReadWrite::class$, nullptr, $Boolean::TYPE, $$new($ClassArray, 0)));
}

VarHandleBooleans$FieldStaticReadWrite::VarHandleBooleans$FieldStaticReadWrite() {
}

$Class* VarHandleBooleans$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBooleans$FieldStaticReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleBooleans$FieldStaticReadWrite, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(VarHandleBooleans$FieldStaticReadWrite, init$, void, Object$*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, compareAndExchange, bool, $VarHandle*, bool, bool), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, compareAndExchangeAcquire, bool, $VarHandle*, bool, bool), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, compareAndExchangeRelease, bool, $VarHandle*, bool, bool), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, bool, bool), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndBitwiseAnd, bool, $VarHandle*, bool), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndBitwiseAndAcquire, bool, $VarHandle*, bool), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndBitwiseAndRelease, bool, $VarHandle*, bool), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndBitwiseOr, bool, $VarHandle*, bool), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndBitwiseOrAcquire, bool, $VarHandle*, bool), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndBitwiseOrRelease, bool, $VarHandle*, bool), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndBitwiseXor, bool, $VarHandle*, bool), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndBitwiseXorAcquire, bool, $VarHandle*, bool), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndBitwiseXorRelease, bool, $VarHandle*, bool), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndSet, bool, $VarHandle*, bool), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndSetAcquire, bool, $VarHandle*, bool), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, getAndSetRelease, bool, $VarHandle*, bool), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Z)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, set, void, $VarHandle*, bool), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Z)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, setOpaque, void, $VarHandle*, bool), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Z)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, setRelease, void, $VarHandle*, bool), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Z)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, setVolatile, void, $VarHandle*, bool), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, bool, bool), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, bool, bool), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, bool, bool), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, bool, bool), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleBooleans$FieldStaticReadWrite, withInvokeBehavior, VarHandleBooleans$FieldStaticReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleBooleans$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleBooleans$FieldStaticReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleBooleans$FieldStaticReadWrite", "java.lang.invoke.VarHandleBooleans", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleBooleans$FieldStaticReadWrite",
		"java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleBooleans"
	};
	$loadClass(VarHandleBooleans$FieldStaticReadWrite, name, initialize, &classInfo$$, VarHandleBooleans$FieldStaticReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleBooleans$FieldStaticReadWrite);
	});
	return class$;
}

$Class* VarHandleBooleans$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java