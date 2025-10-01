#include <java/lang/invoke/VarHandleBooleans$FieldInstanceReadWrite.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleBooleans$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleBooleans.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef UNSAFE
#undef TYPE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleBooleans = ::java::lang::invoke::VarHandleBooleans;
using $VarHandleBooleans$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndSet15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_set18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_setOpaque19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_setRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_setVolatile21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleBooleans$FieldInstanceReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBooleans$FieldInstanceReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleBooleans$FieldInstanceReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleBooleans$FieldInstanceReadWrite::*)($Class*,int64_t)>(&VarHandleBooleans$FieldInstanceReadWrite::init$))},
	{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(static_cast<void(VarHandleBooleans$FieldInstanceReadWrite::*)($Class*,int64_t,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAnd6},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndAcquire7},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseAndRelease8},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseOr)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOr9},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrAcquire10},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseOrRelease11},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseXor)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXor12},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorAcquire13},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndBitwiseXorRelease14},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndSet)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndSet15},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire16},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease17},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::set)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_set18},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::setOpaque)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_setOpaque19},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::setRelease)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_setRelease20},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::setVolatile)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_setVolatile21},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet22},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire23},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain24},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,bool,bool)>(&VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleBooleans$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease25},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleBooleans$FieldInstanceReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBooleans$FieldInstanceReadWrite", "java.lang.invoke.VarHandleBooleans", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleBooleans$FieldInstanceReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleBooleans$FieldInstanceReadWrite",
	"java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly",
	nullptr,
	_VarHandleBooleans$FieldInstanceReadWrite_FieldInfo_,
	_VarHandleBooleans$FieldInstanceReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBooleans$FieldInstanceReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBooleans"
};

$Object* allocate$VarHandleBooleans$FieldInstanceReadWrite($Class* clazz) {
	return $of($alloc(VarHandleBooleans$FieldInstanceReadWrite));
}

$VarForm* VarHandleBooleans$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleBooleans$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleBooleans$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleBooleans$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleBooleans$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleBooleans$FieldInstanceReadWrite::FORM, exact);
}

VarHandleBooleans$FieldInstanceReadWrite* VarHandleBooleans$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleBooleans$FieldInstanceReadWrite* VarHandleBooleans$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleBooleans$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleBooleans$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, bool expected, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseOr($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseOrRelease($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseAnd($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseAndRelease($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseXor($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBoolean($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseXorRelease($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBooleanRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleBooleans$FieldInstanceReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, Object$* holder, bool value) {
	$init(VarHandleBooleans$FieldInstanceReadWrite);
	$var(VarHandleBooleans$FieldInstanceReadWrite, handle, $cast(VarHandleBooleans$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBooleanAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void clinit$VarHandleBooleans$FieldInstanceReadWrite($Class* class$) {
	$load($Object);
	$init($Boolean);
	$assignStatic(VarHandleBooleans$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleBooleans$FieldInstanceReadWrite::class$, $Object::class$, $Boolean::TYPE, $$new($ClassArray, 0)));
}

VarHandleBooleans$FieldInstanceReadWrite::VarHandleBooleans$FieldInstanceReadWrite() {
}

$Class* VarHandleBooleans$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleBooleans$FieldInstanceReadWrite, name, initialize, &_VarHandleBooleans$FieldInstanceReadWrite_ClassInfo_, clinit$VarHandleBooleans$FieldInstanceReadWrite, allocate$VarHandleBooleans$FieldInstanceReadWrite);
	return class$;
}

$Class* VarHandleBooleans$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java