#include <java/lang/invoke/VarHandleLongs$FieldStaticReadWrite.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleLongs$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleLongs.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef UNSAFE
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleLongs = ::java::lang::invoke::VarHandleLongs;
using $VarHandleLongs$FieldStaticReadOnly = ::java::lang::invoke::VarHandleLongs$FieldStaticReadOnly;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndSet18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_set21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_setOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_setRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_setVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleLongs$FieldStaticReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleLongs$FieldStaticReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleLongs$FieldStaticReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleLongs$FieldStaticReadWrite::*)(Object$*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::init$))},
	{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleLongs$FieldStaticReadWrite::*)(Object$*,int64_t,bool)>(&VarHandleLongs$FieldStaticReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int64_t,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndAdd)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndAddAcquire)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndAddRelease)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd9},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease11},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndBitwiseOr)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr12},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease14},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndBitwiseXor)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor15},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease17},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndSet)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndSet18},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire19},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease20},
	{"set", "(Ljava/lang/invoke/VarHandle;J)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::set)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_set21},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;J)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::setOpaque)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_setOpaque22},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;J)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::setRelease)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_setRelease23},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;J)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::setVolatile)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_setVolatile24},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int64_t,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet25},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int64_t,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire26},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int64_t,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain27},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,int64_t,int64_t)>(&VarHandleLongs$FieldStaticReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleLongs$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease28},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleLongs$FieldStaticReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleLongs$FieldStaticReadWrite", "java.lang.invoke.VarHandleLongs", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleLongs$FieldStaticReadOnly", "java.lang.invoke.VarHandleLongs", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleLongs$FieldStaticReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleLongs$FieldStaticReadWrite",
	"java.lang.invoke.VarHandleLongs$FieldStaticReadOnly",
	nullptr,
	_VarHandleLongs$FieldStaticReadWrite_FieldInfo_,
	_VarHandleLongs$FieldStaticReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleLongs$FieldStaticReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleLongs"
};

$Object* allocate$VarHandleLongs$FieldStaticReadWrite($Class* clazz) {
	return $of($alloc(VarHandleLongs$FieldStaticReadWrite));
}

$VarForm* VarHandleLongs$FieldStaticReadWrite::FORM = nullptr;

void VarHandleLongs$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleLongs$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleLongs$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleLongs$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleLongs$FieldStaticReadWrite::FORM, exact);
}

VarHandleLongs$FieldStaticReadWrite* VarHandleLongs$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleLongs$FieldStaticReadWrite* VarHandleLongs$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleLongs$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleLongs$FieldStaticReadWrite::set($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLong($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleLongs$FieldStaticReadWrite::setVolatile($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongVolatile($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleLongs$FieldStaticReadWrite::setOpaque($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongOpaque($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleLongs$FieldStaticReadWrite::setRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleLongs$FieldStaticReadWrite::compareAndSet($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetLong($nc(handle)->base, handle->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLong($nc(handle)->base, handle->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongPlain($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndSet($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLong($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongRelease($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndAdd($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLong($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongRelease($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLong($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongRelease($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLong($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongRelease($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongAcquire($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLong($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongRelease($nc(handle)->base, handle->fieldOffset, value);
}

int64_t VarHandleLongs$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, int64_t value) {
	$init(VarHandleLongs$FieldStaticReadWrite);
	$var(VarHandleLongs$FieldStaticReadWrite, handle, $cast(VarHandleLongs$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongAcquire($nc(handle)->base, handle->fieldOffset, value);
}

void clinit$VarHandleLongs$FieldStaticReadWrite($Class* class$) {
	$init($Long);
	$assignStatic(VarHandleLongs$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleLongs$FieldStaticReadWrite::class$, nullptr, $Long::TYPE, $$new($ClassArray, 0)));
}

VarHandleLongs$FieldStaticReadWrite::VarHandleLongs$FieldStaticReadWrite() {
}

$Class* VarHandleLongs$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleLongs$FieldStaticReadWrite, name, initialize, &_VarHandleLongs$FieldStaticReadWrite_ClassInfo_, clinit$VarHandleLongs$FieldStaticReadWrite, allocate$VarHandleLongs$FieldStaticReadWrite);
	return class$;
}

$Class* VarHandleLongs$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java