#include <java/lang/invoke/VarHandleLongs$FieldInstanceReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleLongs$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleLongs.h>
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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleLongs$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleLongs$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleLongs$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleLongs$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleLongs$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleLongs$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleLongs$FieldInstanceReadWrite::FORM, exact);
}

VarHandleLongs$FieldInstanceReadWrite* VarHandleLongs$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleLongs$FieldInstanceReadWrite* VarHandleLongs$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleLongs$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleLongs$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldInstanceReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleLongs$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleLongs$FieldInstanceReadWrite::class$, $Object::class$, $Long::TYPE, $$new($ClassArray, 0)));
}

VarHandleLongs$FieldInstanceReadWrite::VarHandleLongs$FieldInstanceReadWrite() {
}

$Class* VarHandleLongs$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleLongs$FieldInstanceReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleLongs$FieldInstanceReadWrite, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(VarHandleLongs$FieldInstanceReadWrite, init$, void, $Class*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, compareAndExchange, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, compareAndExchangeAcquire, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, compareAndExchangeRelease, int64_t, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, compareAndSet, bool, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndAdd, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndAddAcquire, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndAddRelease, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndBitwiseAnd, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndBitwiseAndAcquire, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndBitwiseAndRelease, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndBitwiseOr, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndBitwiseOrAcquire, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndBitwiseOrRelease, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndBitwiseXor, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndBitwiseXorAcquire, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndBitwiseXorRelease, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndSet, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndSetAcquire, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, getAndSetRelease, int64_t, $VarHandle*, Object$*, int64_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, set, void, $VarHandle*, Object$*, int64_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, setOpaque, void, $VarHandle*, Object$*, int64_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, setRelease, void, $VarHandle*, Object$*, int64_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)V", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, setVolatile, void, $VarHandle*, Object$*, int64_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)Z", nullptr, $STATIC, $staticMethod(VarHandleLongs$FieldInstanceReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int64_t, int64_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleLongs$FieldInstanceReadWrite, withInvokeBehavior, VarHandleLongs$FieldInstanceReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleLongs$FieldInstanceReadWrite, withInvokeExactBehavior, VarHandleLongs$FieldInstanceReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleLongs$FieldInstanceReadWrite", "java.lang.invoke.VarHandleLongs", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly", "java.lang.invoke.VarHandleLongs", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleLongs$FieldInstanceReadWrite",
		"java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly",
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
	$loadClass(VarHandleLongs$FieldInstanceReadWrite, name, initialize, &classInfo$$, VarHandleLongs$FieldInstanceReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleLongs$FieldInstanceReadWrite);
	});
	return class$;
}

$Class* VarHandleLongs$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java