#include <java/lang/invoke/VarHandleBooleans$FieldStaticReadWrite.h>

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
#include <java/lang/invoke/VarHandleBooleans$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleBooleans.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef TYPE
#undef UNSAFE

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
using $VarHandleBooleans$FieldStaticReadOnly = ::java::lang::invoke::VarHandleBooleans$FieldStaticReadOnly;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndSet15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_set18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_setOpaque19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_setRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_setVolatile21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleBooleans$FieldStaticReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBooleans$FieldStaticReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleBooleans$FieldStaticReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(static_cast<void(VarHandleBooleans$FieldStaticReadWrite::*)(Object$*,int64_t)>(&VarHandleBooleans$FieldStaticReadWrite::init$))},
	{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleBooleans$FieldStaticReadWrite::*)(Object$*,int64_t,bool)>(&VarHandleBooleans$FieldStaticReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool,bool)>(&VarHandleBooleans$FieldStaticReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool,bool)>(&VarHandleBooleans$FieldStaticReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool,bool)>(&VarHandleBooleans$FieldStaticReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool,bool)>(&VarHandleBooleans$FieldStaticReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAnd6},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndAcquire7},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseAndRelease8},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseOr)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOr9},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrAcquire10},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseOrRelease11},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseXor)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXor12},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorAcquire13},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndBitwiseXorRelease14},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndSet)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndSet15},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire16},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease17},
	{"set", "(Ljava/lang/invoke/VarHandle;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::set)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_set18},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::setOpaque)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_setOpaque19},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::setRelease)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_setRelease20},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,bool)>(&VarHandleBooleans$FieldStaticReadWrite::setVolatile)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_setVolatile21},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool,bool)>(&VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet22},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool,bool)>(&VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire23},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool,bool)>(&VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain24},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;ZZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,bool,bool)>(&VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleBooleans$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease25},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBooleans$FieldStaticReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleBooleans$FieldStaticReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBooleans$FieldStaticReadWrite", "java.lang.invoke.VarHandleBooleans", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly", "java.lang.invoke.VarHandleBooleans", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleBooleans$FieldStaticReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleBooleans$FieldStaticReadWrite",
	"java.lang.invoke.VarHandleBooleans$FieldStaticReadOnly",
	nullptr,
	_VarHandleBooleans$FieldStaticReadWrite_FieldInfo_,
	_VarHandleBooleans$FieldStaticReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBooleans$FieldStaticReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBooleans"
};

$Object* allocate$VarHandleBooleans$FieldStaticReadWrite($Class* clazz) {
	return $of($alloc(VarHandleBooleans$FieldStaticReadWrite));
}

$VarForm* VarHandleBooleans$FieldStaticReadWrite::FORM = nullptr;

void VarHandleBooleans$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleBooleans$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleBooleans$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleBooleans$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleBooleans$FieldStaticReadWrite::FORM, exact);
}

VarHandleBooleans$FieldStaticReadWrite* VarHandleBooleans$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleBooleans$FieldStaticReadWrite* VarHandleBooleans$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBooleans$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleBooleans$FieldStaticReadWrite::set($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBoolean($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleBooleans$FieldStaticReadWrite::setVolatile($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanVolatile($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleBooleans$FieldStaticReadWrite::setOpaque($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanOpaque($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleBooleans$FieldStaticReadWrite::setRelease($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putBooleanRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::compareAndSet($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetBoolean($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBoolean($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBooleanAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeBooleanRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanPlain($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBoolean($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, bool expected, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBooleanRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndSet($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBoolean($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBooleanAcquire($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetBooleanRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseOr($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBoolean($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseOrRelease($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBooleanRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseOrAcquire($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrBooleanAcquire($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseAnd($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBoolean($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseAndRelease($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBooleanRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseAndAcquire($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndBooleanAcquire($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseXor($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBoolean($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseXorRelease($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBooleanRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleBooleans$FieldStaticReadWrite::getAndBitwiseXorAcquire($VarHandle* ob, bool value) {
	$init(VarHandleBooleans$FieldStaticReadWrite);
	$var(VarHandleBooleans$FieldStaticReadWrite, handle, $cast(VarHandleBooleans$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorBooleanAcquire($nc(handle)->base, handle->fieldOffset, value);
}

void clinit$VarHandleBooleans$FieldStaticReadWrite($Class* class$) {
	$init($Boolean);
	$assignStatic(VarHandleBooleans$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleBooleans$FieldStaticReadWrite::class$, nullptr, $Boolean::TYPE, $$new($ClassArray, 0)));
}

VarHandleBooleans$FieldStaticReadWrite::VarHandleBooleans$FieldStaticReadWrite() {
}

$Class* VarHandleBooleans$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleBooleans$FieldStaticReadWrite, name, initialize, &_VarHandleBooleans$FieldStaticReadWrite_ClassInfo_, clinit$VarHandleBooleans$FieldStaticReadWrite, allocate$VarHandleBooleans$FieldStaticReadWrite);
	return class$;
}

$Class* VarHandleBooleans$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java