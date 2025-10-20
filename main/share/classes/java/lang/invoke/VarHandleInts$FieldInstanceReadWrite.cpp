#include <java/lang/invoke/VarHandleInts$FieldInstanceReadWrite.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleInts$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleInts.h>
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
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleInts = ::java::lang::invoke::VarHandleInts;
using $VarHandleInts$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleInts$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndSet18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_set21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_setOpaque22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_setRelease23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_setVolatile24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleInts$FieldInstanceReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleInts$FieldInstanceReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleInts$FieldInstanceReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleInts$FieldInstanceReadWrite::*)($Class*,int64_t)>(&VarHandleInts$FieldInstanceReadWrite::init$))},
	{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(static_cast<void(VarHandleInts$FieldInstanceReadWrite::*)($Class*,int64_t,bool)>(&VarHandleInts$FieldInstanceReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndAdd)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndAddAcquire)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndAddRelease)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd9},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire10},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease11},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndBitwiseOr)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr12},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire13},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease14},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndBitwiseXor)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor15},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire16},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease17},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndSet)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndSet18},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire19},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease20},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::set)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_set21},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::setOpaque)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_setOpaque22},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::setRelease)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_setRelease23},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::setVolatile)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_setVolatile24},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet25},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire26},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain27},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$FieldInstanceReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleInts$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease28},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleInts$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleInts$FieldInstanceReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleInts$FieldInstanceReadWrite", "java.lang.invoke.VarHandleInts", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleInts$FieldInstanceReadOnly", "java.lang.invoke.VarHandleInts", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleInts$FieldInstanceReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleInts$FieldInstanceReadWrite",
	"java.lang.invoke.VarHandleInts$FieldInstanceReadOnly",
	nullptr,
	_VarHandleInts$FieldInstanceReadWrite_FieldInfo_,
	_VarHandleInts$FieldInstanceReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleInts$FieldInstanceReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleInts"
};

$Object* allocate$VarHandleInts$FieldInstanceReadWrite($Class* clazz) {
	return $of($alloc(VarHandleInts$FieldInstanceReadWrite));
}

$VarForm* VarHandleInts$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleInts$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleInts$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleInts$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleInts$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleInts$FieldInstanceReadWrite::FORM, exact);
}

VarHandleInts$FieldInstanceReadWrite* VarHandleInts$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleInts$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleInts$FieldInstanceReadWrite* VarHandleInts$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleInts$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleInts$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleInts$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putIntVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleInts$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putIntOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleInts$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putIntRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleInts$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleInts$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleInts$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleInts$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleInts$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, int32_t expected, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetIntAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetIntRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorInt($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

int32_t VarHandleInts$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, int32_t value) {
	$init(VarHandleInts$FieldInstanceReadWrite);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleInts$FieldInstanceReadWrite, handle, $cast(VarHandleInts$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void clinit$VarHandleInts$FieldInstanceReadWrite($Class* class$) {
	$load($Object);
	$init($Integer);
	$assignStatic(VarHandleInts$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleInts$FieldInstanceReadWrite::class$, $Object::class$, $Integer::TYPE, $$new($ClassArray, 0)));
}

VarHandleInts$FieldInstanceReadWrite::VarHandleInts$FieldInstanceReadWrite() {
}

$Class* VarHandleInts$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleInts$FieldInstanceReadWrite, name, initialize, &_VarHandleInts$FieldInstanceReadWrite_ClassInfo_, clinit$VarHandleInts$FieldInstanceReadWrite, allocate$VarHandleInts$FieldInstanceReadWrite);
	return class$;
}

$Class* VarHandleInts$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java