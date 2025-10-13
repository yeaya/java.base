#include <java/lang/invoke/VarHandleFloats$FieldInstanceReadWrite.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleFloats$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleFloats.h>
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
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleFloats = ::java::lang::invoke::VarHandleFloats;
using $VarHandleFloats$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndSet9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_set12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_setOpaque13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_setRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_setVolatile15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleFloats$FieldInstanceReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleFloats$FieldInstanceReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleFloats$FieldInstanceReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleFloats$FieldInstanceReadWrite::*)($Class*,int64_t)>(&VarHandleFloats$FieldInstanceReadWrite::init$))},
	{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(static_cast<void(VarHandleFloats$FieldInstanceReadWrite::*)($Class*,int64_t,bool)>(&VarHandleFloats$FieldInstanceReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,float,float)>(&VarHandleFloats$FieldInstanceReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,float,float)>(&VarHandleFloats$FieldInstanceReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,float,float)>(&VarHandleFloats$FieldInstanceReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,float,float)>(&VarHandleFloats$FieldInstanceReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,float)>(&VarHandleFloats$FieldInstanceReadWrite::getAndAdd)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,float)>(&VarHandleFloats$FieldInstanceReadWrite::getAndAddAcquire)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,float)>(&VarHandleFloats$FieldInstanceReadWrite::getAndAddRelease)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,float)>(&VarHandleFloats$FieldInstanceReadWrite::getAndSet)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndSet9},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,float)>(&VarHandleFloats$FieldInstanceReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire10},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $method(static_cast<float(*)($VarHandle*,Object$*,float)>(&VarHandleFloats$FieldInstanceReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease11},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,float)>(&VarHandleFloats$FieldInstanceReadWrite::set)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_set12},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,float)>(&VarHandleFloats$FieldInstanceReadWrite::setOpaque)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_setOpaque13},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,float)>(&VarHandleFloats$FieldInstanceReadWrite::setRelease)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_setRelease14},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,float)>(&VarHandleFloats$FieldInstanceReadWrite::setVolatile)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_setVolatile15},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,float,float)>(&VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet16},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,float,float)>(&VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire17},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,float,float)>(&VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain18},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,float,float)>(&VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleFloats$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease19},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleFloats$FieldInstanceReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleFloats$FieldInstanceReadWrite", "java.lang.invoke.VarHandleFloats", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly", "java.lang.invoke.VarHandleFloats", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleFloats$FieldInstanceReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleFloats$FieldInstanceReadWrite",
	"java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly",
	nullptr,
	_VarHandleFloats$FieldInstanceReadWrite_FieldInfo_,
	_VarHandleFloats$FieldInstanceReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleFloats$FieldInstanceReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleFloats"
};

$Object* allocate$VarHandleFloats$FieldInstanceReadWrite($Class* clazz) {
	return $of($alloc(VarHandleFloats$FieldInstanceReadWrite));
}

$VarForm* VarHandleFloats$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleFloats$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleFloats$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleFloats$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleFloats$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleFloats$FieldInstanceReadWrite::FORM, exact);
}

VarHandleFloats$FieldInstanceReadWrite* VarHandleFloats$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleFloats$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleFloats$FieldInstanceReadWrite* VarHandleFloats$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleFloats$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleFloats$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleFloats$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloatVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleFloats$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloatOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleFloats$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloatRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleFloats$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

float VarHandleFloats$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

float VarHandleFloats$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloatAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

float VarHandleFloats$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloatRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloatAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloatRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloatAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloatRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void clinit$VarHandleFloats$FieldInstanceReadWrite($Class* class$) {
	$load($Object);
	$init($Float);
	$assignStatic(VarHandleFloats$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleFloats$FieldInstanceReadWrite::class$, $Object::class$, $Float::TYPE, $$new($ClassArray, 0)));
}

VarHandleFloats$FieldInstanceReadWrite::VarHandleFloats$FieldInstanceReadWrite() {
}

$Class* VarHandleFloats$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleFloats$FieldInstanceReadWrite, name, initialize, &_VarHandleFloats$FieldInstanceReadWrite_ClassInfo_, clinit$VarHandleFloats$FieldInstanceReadWrite, allocate$VarHandleFloats$FieldInstanceReadWrite);
	return class$;
}

$Class* VarHandleFloats$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java