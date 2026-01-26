#include <java/lang/invoke/VarHandleShorts$FieldInstanceReadWrite.h>

#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleShorts$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleShorts.h>
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
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleShorts$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndSet18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_set21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_setOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_setRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_setVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleShorts$FieldInstanceReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleShorts$FieldInstanceReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleShorts$FieldInstanceReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleShorts$FieldInstanceReadWrite, init$, void, $Class*, int64_t)},
	{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(VarHandleShorts$FieldInstanceReadWrite, init$, void, $Class*, int64_t, bool)},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, compareAndExchange, int16_t, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, compareAndExchangeAcquire, int16_t, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, compareAndExchangeRelease, int16_t, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, compareAndSet, bool, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndAdd, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndAddAcquire, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndAddRelease, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseAnd, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd9},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseAndAcquire, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseAndRelease, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease11},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseOr, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr12},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseOrAcquire, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseOrRelease, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease14},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseXor, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor15},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseXorAcquire, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndBitwiseXorRelease, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease17},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndSet, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndSet18},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndSetAcquire, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire19},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)S", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, getAndSetRelease, int16_t, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease20},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, set, void, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_set21},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, setOpaque, void, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_setOpaque22},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, setRelease, void, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_setRelease23},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;S)V", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, setVolatile, void, $VarHandle*, Object$*, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_setVolatile24},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet25},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire26},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain27},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;SS)Z", nullptr, $STATIC, $staticMethod(VarHandleShorts$FieldInstanceReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int16_t, int16_t), nullptr, nullptr, _VarHandleShorts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease28},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$FieldInstanceReadWrite, withInvokeBehavior, VarHandleShorts$FieldInstanceReadWrite*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleShorts$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleShorts$FieldInstanceReadWrite, withInvokeExactBehavior, VarHandleShorts$FieldInstanceReadWrite*)},
	{}
};

$InnerClassInfo _VarHandleShorts$FieldInstanceReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleShorts$FieldInstanceReadWrite", "java.lang.invoke.VarHandleShorts", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly", "java.lang.invoke.VarHandleShorts", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleShorts$FieldInstanceReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleShorts$FieldInstanceReadWrite",
	"java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly",
	nullptr,
	_VarHandleShorts$FieldInstanceReadWrite_FieldInfo_,
	_VarHandleShorts$FieldInstanceReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleShorts$FieldInstanceReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleShorts"
};

$Object* allocate$VarHandleShorts$FieldInstanceReadWrite($Class* clazz) {
	return $of($alloc(VarHandleShorts$FieldInstanceReadWrite));
}

$VarForm* VarHandleShorts$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleShorts$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleShorts$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleShorts$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleShorts$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleShorts$FieldInstanceReadWrite::FORM, exact);
}

VarHandleShorts$FieldInstanceReadWrite* VarHandleShorts$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleShorts$FieldInstanceReadWrite* VarHandleShorts$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleShorts$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleShorts$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleShorts$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleShorts$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleShorts$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, int16_t expected, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShort($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int16_t VarHandleShorts$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, int16_t value) {
	$init(VarHandleShorts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleShorts$FieldInstanceReadWrite, handle, $cast(VarHandleShorts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void clinit$VarHandleShorts$FieldInstanceReadWrite($Class* class$) {
	$init($Short);
	$assignStatic(VarHandleShorts$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleShorts$FieldInstanceReadWrite::class$, $Object::class$, $Short::TYPE, $$new($ClassArray, 0)));
}

VarHandleShorts$FieldInstanceReadWrite::VarHandleShorts$FieldInstanceReadWrite() {
}

$Class* VarHandleShorts$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleShorts$FieldInstanceReadWrite, name, initialize, &_VarHandleShorts$FieldInstanceReadWrite_ClassInfo_, clinit$VarHandleShorts$FieldInstanceReadWrite, allocate$VarHandleShorts$FieldInstanceReadWrite);
	return class$;
}

$Class* VarHandleShorts$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java