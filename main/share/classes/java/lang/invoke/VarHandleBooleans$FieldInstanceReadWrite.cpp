#include <java/lang/invoke/VarHandleBooleans$FieldInstanceReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBooleans$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleBooleans.h>
#include <java/util/Objects.h>
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
using $VarHandleBooleans$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleBooleans$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleBooleans$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleBooleans$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleBooleans$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleBooleans$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleBooleans$FieldInstanceReadWrite::FORM, exact);
}

VarHandleBooleans$FieldInstanceReadWrite* VarHandleBooleans$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleBooleans$FieldInstanceReadWrite* VarHandleBooleans$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleBooleans$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldInstanceReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleBooleans$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleBooleans$FieldInstanceReadWrite::class$, $Object::class$, $Boolean::TYPE, $$new($ClassArray, 0)));
}

VarHandleBooleans$FieldInstanceReadWrite::VarHandleBooleans$FieldInstanceReadWrite() {
}

$Class* VarHandleBooleans$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBooleans$FieldInstanceReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleBooleans$FieldInstanceReadWrite, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(VarHandleBooleans$FieldInstanceReadWrite, init$, void, $Class*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, compareAndExchange, bool, $VarHandle*, Object$*, bool, bool), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, compareAndExchangeAcquire, bool, $VarHandle*, Object$*, bool, bool), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, compareAndExchangeRelease, bool, $VarHandle*, Object$*, bool, bool), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, compareAndSet, bool, $VarHandle*, Object$*, bool, bool), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndBitwiseAnd, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndBitwiseAndAcquire, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndBitwiseAndRelease, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndBitwiseOr, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndBitwiseOrAcquire, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndBitwiseOrRelease, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndBitwiseXor, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndBitwiseXorAcquire, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndBitwiseXorRelease, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndSet, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndSetAcquire, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, getAndSetRelease, bool, $VarHandle*, Object$*, bool), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, set, void, $VarHandle*, Object$*, bool), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, setOpaque, void, $VarHandle*, Object$*, bool), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, setRelease, void, $VarHandle*, Object$*, bool), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)V", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, setVolatile, void, $VarHandle*, Object$*, bool), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, bool, bool), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, bool, bool), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, bool, bool), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $staticMethod(VarHandleBooleans$FieldInstanceReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, bool, bool), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleBooleans$FieldInstanceReadWrite, withInvokeBehavior, VarHandleBooleans$FieldInstanceReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleBooleans$FieldInstanceReadWrite, withInvokeExactBehavior, VarHandleBooleans$FieldInstanceReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleBooleans$FieldInstanceReadWrite", "java.lang.invoke.VarHandleBooleans", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleBooleans$FieldInstanceReadWrite",
		"java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly",
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
	$loadClass(VarHandleBooleans$FieldInstanceReadWrite, name, initialize, &classInfo$$, VarHandleBooleans$FieldInstanceReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleBooleans$FieldInstanceReadWrite);
	});
	return class$;
}

$Class* VarHandleBooleans$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java