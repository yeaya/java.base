#include <java/lang/invoke/VarHandleChars$FieldInstanceReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleChars$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleChars.h>
#include <java/util/Objects.h>
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
using $VarHandleChars$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleChars$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleChars$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleChars$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleChars$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleChars$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleChars$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleChars$FieldInstanceReadWrite::FORM, exact);
}

VarHandleChars$FieldInstanceReadWrite* VarHandleChars$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleChars$FieldInstanceReadWrite* VarHandleChars$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleChars$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleChars$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleChars$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleChars$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, char16_t expected, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorChar($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

char16_t VarHandleChars$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, char16_t value) {
	$init(VarHandleChars$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleChars$FieldInstanceReadWrite, handle, $cast(VarHandleChars$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleChars$FieldInstanceReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleChars$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleChars$FieldInstanceReadWrite::class$, $Object::class$, $Character::TYPE, $$new($ClassArray, 0)));
}

VarHandleChars$FieldInstanceReadWrite::VarHandleChars$FieldInstanceReadWrite() {
}

$Class* VarHandleChars$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleChars$FieldInstanceReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleChars$FieldInstanceReadWrite, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(VarHandleChars$FieldInstanceReadWrite, init$, void, $Class*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, compareAndExchange, char16_t, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, compareAndExchangeAcquire, char16_t, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, compareAndExchangeRelease, char16_t, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, compareAndSet, bool, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndAdd, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndAddAcquire, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndAddRelease, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseAnd, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseAndAcquire, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseAndRelease, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseOr, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseOrAcquire, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseOrRelease, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseXor, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseXorAcquire, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndBitwiseXorRelease, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndSet, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndSetAcquire, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)C", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, getAndSetRelease, char16_t, $VarHandle*, Object$*, char16_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, set, void, $VarHandle*, Object$*, char16_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, setOpaque, void, $VarHandle*, Object$*, char16_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, setRelease, void, $VarHandle*, Object$*, char16_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;C)V", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, setVolatile, void, $VarHandle*, Object$*, char16_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;CC)Z", nullptr, $STATIC, $staticMethod(VarHandleChars$FieldInstanceReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, char16_t, char16_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$FieldInstanceReadWrite, withInvokeBehavior, VarHandleChars$FieldInstanceReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleChars$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleChars$FieldInstanceReadWrite, withInvokeExactBehavior, VarHandleChars$FieldInstanceReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleChars$FieldInstanceReadWrite", "java.lang.invoke.VarHandleChars", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleChars$FieldInstanceReadOnly", "java.lang.invoke.VarHandleChars", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleChars$FieldInstanceReadWrite",
		"java.lang.invoke.VarHandleChars$FieldInstanceReadOnly",
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
	$loadClass(VarHandleChars$FieldInstanceReadWrite, name, initialize, &classInfo$$, VarHandleChars$FieldInstanceReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleChars$FieldInstanceReadWrite);
	});
	return class$;
}

$Class* VarHandleChars$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java