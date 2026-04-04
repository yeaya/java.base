#include <java/lang/invoke/VarHandleBytes$FieldStaticReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBytes$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleBytes.h>
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
using $VarHandleBytes$FieldStaticReadOnly = ::java::lang::invoke::VarHandleBytes$FieldStaticReadOnly;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleBytes$FieldStaticReadWrite::FORM = nullptr;

void VarHandleBytes$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleBytes$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleBytes$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleBytes$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleBytes$FieldStaticReadWrite::FORM, exact);
}

VarHandleBytes$FieldStaticReadWrite* VarHandleBytes$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleBytes$FieldStaticReadWrite* VarHandleBytes$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBytes$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleBytes$FieldStaticReadWrite::set($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByte($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldStaticReadWrite::setVolatile($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteVolatile($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldStaticReadWrite::setOpaque($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteOpaque($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldStaticReadWrite::setRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putByteRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleBytes$FieldStaticReadWrite::compareAndSet($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetByte($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByte($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBytePlain($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByte($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBytes$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, int8_t expected, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndSet($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByte($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndAdd($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByte($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByte($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByte($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByte($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

int8_t VarHandleBytes$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, int8_t value) {
	$init(VarHandleBytes$FieldStaticReadWrite);
	$var(VarHandleBytes$FieldStaticReadWrite, handle, $cast(VarHandleBytes$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleBytes$FieldStaticReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleBytes$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleBytes$FieldStaticReadWrite::class$, nullptr, $Byte::TYPE, $$new($ClassArray, 0)));
}

VarHandleBytes$FieldStaticReadWrite::VarHandleBytes$FieldStaticReadWrite() {
}

$Class* VarHandleBytes$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBytes$FieldStaticReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleBytes$FieldStaticReadWrite, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(VarHandleBytes$FieldStaticReadWrite, init$, void, Object$*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;BB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, compareAndExchange, int8_t, $VarHandle*, int8_t, int8_t), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;BB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, compareAndExchangeAcquire, int8_t, $VarHandle*, int8_t, int8_t), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;BB)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, compareAndExchangeRelease, int8_t, $VarHandle*, int8_t, int8_t), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;BB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, int8_t, int8_t), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndAdd, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndAddAcquire, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndAddRelease, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndBitwiseAnd, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndBitwiseAndmethodAnnotations$$},
		{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndBitwiseAndAcquire, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndBitwiseAndAcquiremethodAnnotations$$},
		{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndBitwiseAndRelease, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndBitwiseAndReleasemethodAnnotations$$},
		{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndBitwiseOr, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndBitwiseOrmethodAnnotations$$},
		{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndBitwiseOrAcquire, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndBitwiseOrAcquiremethodAnnotations$$},
		{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndBitwiseOrRelease, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndBitwiseOrReleasemethodAnnotations$$},
		{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndBitwiseXor, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndBitwiseXormethodAnnotations$$},
		{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndBitwiseXorAcquire, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndBitwiseXorAcquiremethodAnnotations$$},
		{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndBitwiseXorRelease, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndBitwiseXorReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndSet, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndSetAcquire, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;B)B", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, getAndSetRelease, int8_t, $VarHandle*, int8_t), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;B)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, set, void, $VarHandle*, int8_t), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;B)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, setOpaque, void, $VarHandle*, int8_t), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;B)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, setRelease, void, $VarHandle*, int8_t), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;B)V", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, setVolatile, void, $VarHandle*, int8_t), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;BB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;BB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;BB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;BB)Z", nullptr, $STATIC, $staticMethod(VarHandleBytes$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, int8_t, int8_t), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleBytes$FieldStaticReadWrite, withInvokeBehavior, VarHandleBytes$FieldStaticReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBytes$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleBytes$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleBytes$FieldStaticReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleBytes$FieldStaticReadWrite", "java.lang.invoke.VarHandleBytes", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleBytes$FieldStaticReadOnly", "java.lang.invoke.VarHandleBytes", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleBytes$FieldStaticReadWrite",
		"java.lang.invoke.VarHandleBytes$FieldStaticReadOnly",
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
	$loadClass(VarHandleBytes$FieldStaticReadWrite, name, initialize, &classInfo$$, VarHandleBytes$FieldStaticReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleBytes$FieldStaticReadWrite);
	});
	return class$;
}

$Class* VarHandleBytes$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java