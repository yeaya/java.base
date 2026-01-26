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
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndSet18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_set21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_setOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_setRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_setVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleShorts$FieldStaticReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleShorts$FieldStaticReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleShorts$FieldStaticReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleShorts$FieldStaticReadWrite, init$, void, Object$*, int64_t)},
	{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(VarHandleShorts$FieldStaticReadWrite, init$, void, Object$*, int64_t, bool)},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, compareAndExchange, int16_t, $VarHandle*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, compareAndExchangeAcquire, int16_t, $VarHandle*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, compareAndExchangeRelease, int16_t, $VarHandle*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndAdd, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndAddAcquire, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndAddRelease, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseAnd, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd9},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseAndAcquire, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseAndRelease, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease11},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseOr, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr12},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseOrAcquire, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseOrRelease, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease14},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseXor, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor15},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseXorAcquire, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndBitwiseXorRelease, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease17},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndSet, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndSet18},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndSetAcquire, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire19},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, getAndSetRelease, int16_t, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease20},
	{"set", "(Ljava/lang/invoke/VarHandle;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, set, void, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_set21},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, setOpaque, void, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_setOpaque22},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, setRelease, void, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_setRelease23},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, setVolatile, void, $VarHandle*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_setVolatile24},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet25},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire26},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain27},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease28},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$FieldStaticReadWrite, withInvokeBehavior, VarHandleShorts$FieldStaticReadWrite*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleShorts$FieldStaticReadWrite*)},
	{}
};

$InnerClassInfo _VarHandleShorts$FieldStaticReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleShorts$FieldStaticReadWrite", "java.lang.invoke.VarHandleShorts", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleShorts$FieldStaticReadOnly", "java.lang.invoke.VarHandleShorts", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleShorts$FieldStaticReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleShorts$FieldStaticReadWrite",
	"java.lang.invoke.VarHandleShorts$FieldStaticReadOnly",
	nullptr,
	_VarHandleShorts$FieldStaticReadWrite_FieldInfo_,
	_VarHandleShorts$FieldStaticReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleShorts$FieldStaticReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleShorts"
};

$Object* allocate$VarHandleShorts$FieldStaticReadWrite($Class* clazz) {
	return $of($alloc(VarHandleShorts$FieldStaticReadWrite));
}

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
	$nc($MethodHandleStatics::UNSAFE)->putShort($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleShorts$FieldStaticReadWrite::setVolatile($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortVolatile($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleShorts$FieldStaticReadWrite::setOpaque($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortOpaque($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleShorts$FieldStaticReadWrite::setRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleShorts$FieldStaticReadWrite::compareAndSet($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetShort($nc(handle)->base, handle->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShort($nc(handle)->base, handle->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortPlain($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShort($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndSet($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShort($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortRelease($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndAdd($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShort($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortRelease($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShort($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortRelease($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShort($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortRelease($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShort($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortRelease($nc(handle)->base, handle->fieldOffset, value);
}

int16_t VarHandleShorts$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, int16_t value) {
	$init(VarHandleShorts$FieldStaticReadWrite);
	$var(VarHandleShorts$FieldStaticReadWrite, handle, $cast(VarHandleShorts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortAcquire($nc(handle)->base, handle->fieldOffset, value);
}

void clinit$VarHandleShorts$FieldStaticReadWrite($Class* class$) {
	$init($Short);
	$assignStatic(VarHandleShorts$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleShorts$FieldStaticReadWrite::class$, nullptr, $Short::TYPE, $$new($ClassArray, 0)));
}

VarHandleShorts$FieldStaticReadWrite::VarHandleShorts$FieldStaticReadWrite() {
}

$Class* VarHandleShorts$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleShorts$FieldStaticReadWrite, name, initialize, &_VarHandleShorts$FieldStaticReadWrite_ClassInfo_, clinit$VarHandleShorts$FieldStaticReadWrite, allocate$VarHandleShorts$FieldStaticReadWrite);
	return class$;
}

$Class* VarHandleShorts$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java