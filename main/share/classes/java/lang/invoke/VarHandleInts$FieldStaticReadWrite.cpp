#include <java/lang/invoke/VarHandleInts$FieldStaticReadWrite.h>

#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleInts$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleInts.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleInts = ::java::lang::invoke::VarHandleInts;
using $VarHandleInts$FieldStaticReadOnly = ::java::lang::invoke::VarHandleInts$FieldStaticReadOnly;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndSet18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_set21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_setOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_setRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_setVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleInts$FieldStaticReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleInts$FieldStaticReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleInts$FieldStaticReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleInts$FieldStaticReadWrite::*)(Object$*,int64_t)>(&VarHandleInts$FieldStaticReadWrite::init$))},
	{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleInts$FieldStaticReadWrite::*)(Object$*,int64_t,bool)>(&VarHandleInts$FieldStaticReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t,int32_t)>(&VarHandleInts$FieldStaticReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t,int32_t)>(&VarHandleInts$FieldStaticReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t,int32_t)>(&VarHandleInts$FieldStaticReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int32_t,int32_t)>(&VarHandleInts$FieldStaticReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndAdd)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndAddAcquire)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndAddRelease)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd9},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease11},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndBitwiseOr)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr12},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease14},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndBitwiseXor)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor15},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease17},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndSet)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndSet18},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire19},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease20},
	{"set", "(Ljava/lang/invoke/VarHandle;I)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::set)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_set21},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;I)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::setOpaque)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_setOpaque22},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;I)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::setRelease)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_setRelease23},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;I)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int32_t)>(&VarHandleInts$FieldStaticReadWrite::setVolatile)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_setVolatile24},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int32_t,int32_t)>(&VarHandleInts$FieldStaticReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet25},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int32_t,int32_t)>(&VarHandleInts$FieldStaticReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire26},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int32_t,int32_t)>(&VarHandleInts$FieldStaticReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain27},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int32_t,int32_t)>(&VarHandleInts$FieldStaticReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleInts$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease28},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleInts$FieldStaticReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleInts$FieldStaticReadWrite", "java.lang.invoke.VarHandleInts", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleInts$FieldStaticReadOnly", "java.lang.invoke.VarHandleInts", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleInts$FieldStaticReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleInts$FieldStaticReadWrite",
	"java.lang.invoke.VarHandleInts$FieldStaticReadOnly",
	nullptr,
	_VarHandleInts$FieldStaticReadWrite_FieldInfo_,
	_VarHandleInts$FieldStaticReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleInts$FieldStaticReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleInts"
};

$Object* allocate$VarHandleInts$FieldStaticReadWrite($Class* clazz) {
	return $of($alloc(VarHandleInts$FieldStaticReadWrite));
}

$VarForm* VarHandleInts$FieldStaticReadWrite::FORM = nullptr;

void VarHandleInts$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleInts$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleInts$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleInts$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleInts$FieldStaticReadWrite::FORM, exact);
}

VarHandleInts$FieldStaticReadWrite* VarHandleInts$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleInts$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleInts$FieldStaticReadWrite* VarHandleInts$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleInts$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleInts$FieldStaticReadWrite::set($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putInt($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleInts$FieldStaticReadWrite::setVolatile($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putIntVolatile($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleInts$FieldStaticReadWrite::setOpaque($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putIntOpaque($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleInts$FieldStaticReadWrite::setRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putIntRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleInts$FieldStaticReadWrite::compareAndSet($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetInt($nc(handle)->base, handle->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeInt($nc(handle)->base, handle->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleInts$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntPlain($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleInts$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleInts$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleInts$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndSet($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetInt($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetIntAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetIntRelease($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndAdd($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddInt($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntRelease($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrInt($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntRelease($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndInt($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntRelease($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorInt($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntRelease($nc(handle)->base, handle->fieldOffset, value);
}

int32_t VarHandleInts$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, int32_t value) {
	$init(VarHandleInts$FieldStaticReadWrite);
	$var(VarHandleInts$FieldStaticReadWrite, handle, $cast(VarHandleInts$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntAcquire($nc(handle)->base, handle->fieldOffset, value);
}

void clinit$VarHandleInts$FieldStaticReadWrite($Class* class$) {
	$init($Integer);
	$assignStatic(VarHandleInts$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleInts$FieldStaticReadWrite::class$, nullptr, $Integer::TYPE, $$new($ClassArray, 0)));
}

VarHandleInts$FieldStaticReadWrite::VarHandleInts$FieldStaticReadWrite() {
}

$Class* VarHandleInts$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleInts$FieldStaticReadWrite, name, initialize, &_VarHandleInts$FieldStaticReadWrite_ClassInfo_, clinit$VarHandleInts$FieldStaticReadWrite, allocate$VarHandleInts$FieldStaticReadWrite);
	return class$;
}

$Class* VarHandleInts$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java