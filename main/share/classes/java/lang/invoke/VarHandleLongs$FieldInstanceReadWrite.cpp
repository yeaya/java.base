#include <java/lang/invoke/VarHandleLongs$FieldInstanceReadWrite.h>

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
#include <java/lang/invoke/VarHandleLongs$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleLongs.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $VarHandleLongs = ::java::lang::invoke::VarHandleLongs;
using $VarHandleLongs$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleLongs$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndSet18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_set21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_setOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_setRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_setVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleLongs$FieldInstanceReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleLongs$FieldInstanceReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleLongs$FieldInstanceReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleLongs$FieldInstanceReadWrite::*)($Class*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::init$))},
	{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(static_cast<void(VarHandleLongs$FieldInstanceReadWrite::*)($Class*,int64_t,bool)>(&VarHandleLongs$FieldInstanceReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndAdd)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndAddAcquire)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndAddRelease)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd9},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease11},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseOr)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr12},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease14},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseXor)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor15},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease17},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndSet)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndSet18},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire19},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease20},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::set)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_set21},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::setOpaque)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_setOpaque22},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::setRelease)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_setRelease23},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;J)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::setVolatile)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_setVolatile24},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet25},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire26},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain27},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;JJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int64_t,int64_t)>(&VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleLongs$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease28},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleLongs$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleLongs$FieldInstanceReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleLongs$FieldInstanceReadWrite", "java.lang.invoke.VarHandleLongs", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly", "java.lang.invoke.VarHandleLongs", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleLongs$FieldInstanceReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleLongs$FieldInstanceReadWrite",
	"java.lang.invoke.VarHandleLongs$FieldInstanceReadOnly",
	nullptr,
	_VarHandleLongs$FieldInstanceReadWrite_FieldInfo_,
	_VarHandleLongs$FieldInstanceReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleLongs$FieldInstanceReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleLongs"
};

$Object* allocate$VarHandleLongs$FieldInstanceReadWrite($Class* clazz) {
	return $of($alloc(VarHandleLongs$FieldInstanceReadWrite));
}

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
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleLongs$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleLongs$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleLongs$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, int64_t expected, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLong($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int64_t VarHandleLongs$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, int64_t value) {
	$init(VarHandleLongs$FieldInstanceReadWrite);
	$var(VarHandleLongs$FieldInstanceReadWrite, handle, $cast(VarHandleLongs$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void clinit$VarHandleLongs$FieldInstanceReadWrite($Class* class$) {
	$load($Object);
	$init($Long);
	$assignStatic(VarHandleLongs$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleLongs$FieldInstanceReadWrite::class$, $Object::class$, $Long::TYPE, $$new($ClassArray, 0)));
}

VarHandleLongs$FieldInstanceReadWrite::VarHandleLongs$FieldInstanceReadWrite() {
}

$Class* VarHandleLongs$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleLongs$FieldInstanceReadWrite, name, initialize, &_VarHandleLongs$FieldInstanceReadWrite_ClassInfo_, clinit$VarHandleLongs$FieldInstanceReadWrite, allocate$VarHandleLongs$FieldInstanceReadWrite);
	return class$;
}

$Class* VarHandleLongs$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java