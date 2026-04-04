#include <java/lang/invoke/VarHandleBytes$FieldInstanceReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBytes$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleBytes.h>
#include <java/util/Objects.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleBytes$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleBytes$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleBytes$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleBytes$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleBytes$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleBytes$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleBytes$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleBytes$FieldInstanceReadWrite::FORM, exact);
}

VarHandleBytes$FieldInstanceReadWrite* VarHandleBytes$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleBytes$FieldInstanceReadWrite* VarHandleBytes$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleBytes$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBytes$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBytePlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByte($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, int8_t value) {
	$init(VarHandleBytes$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleBytes$FieldInstanceReadWrite, handle, $cast(VarHandleBytes$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldInstanceReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleBytes$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleBytes$FieldInstanceReadWrite::class$, $Object::class$, $Byte::TYPE, $$new($ClassArray, 0)));
}

VarHandleBytes$FieldInstanceReadWrite::VarHandleBytes$FieldInstanceReadWrite() {
}

$Class* VarHandleBytes$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBytes$FieldInstanceReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleBytes$FieldInstanceReadWrite, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(VarHandleBytes$FieldInstanceReadWrite, init$, void, $Class*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, compareAndExchange, int8_t, $VarHandle*, Object$*, int8_t, int8_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, compareAndExchangeAcquire, int8_t, $VarHandle*, Object$*, int8_t, int8_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, compareAndExchangeRelease, int8_t, $VarHandle*, Object$*, int8_t, int8_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, compareAndSet, bool, $VarHandle*, Object$*, int8_t, int8_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndAdd, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndAddAcquire, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndAddRelease, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndBitwiseAnd, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndBitwiseAndAcquire, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndBitwiseAndRelease, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndBitwiseOr, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndBitwiseOrAcquire, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndBitwiseOrRelease, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndBitwiseXor, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndBitwiseXorAcquire, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndBitwiseXorRelease, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndSet, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndSetAcquire, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, getAndSetRelease, int8_t, $VarHandle*, Object$*, int8_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, set, void, $VarHandle*, Object$*, int8_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, setOpaque, void, $VarHandle*, Object$*, int8_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, setRelease, void, $VarHandle*, Object$*, int8_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;B)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, setVolatile, void, $VarHandle*, Object$*, int8_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;BB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldInstanceReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleBytes$FieldInstanceReadWrite, withInvokeBehavior, VarHandleBytes$FieldInstanceReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleBytes$FieldInstanceReadWrite, withInvokeExactBehavior, VarHandleBytes$FieldInstanceReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleBytes$FieldInstanceReadWrite", "java.lang.invoke.VarHandleBytes", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBytes", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleBytes$FieldInstanceReadWrite",
		"java.lang.invoke.VarHandleBytes$FieldInstanceReadOnly",
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
	$loadClass(VarHandleBytes$FieldInstanceReadWrite, name, initialize, &classInfo$$, VarHandleBytes$FieldInstanceReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleBytes$FieldInstanceReadWrite);
	});
	return class$;
}

$Class* VarHandleBytes$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java