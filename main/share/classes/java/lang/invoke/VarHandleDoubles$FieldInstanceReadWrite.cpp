#include <java/lang/invoke/VarHandleDoubles$FieldInstanceReadWrite.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleDoubles$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleDoubles.h>
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
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleDoubles = ::java::lang::invoke::VarHandleDoubles;
using $VarHandleDoubles$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndSet9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_set12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_setOpaque13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_setRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_setVolatile15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleDoubles$FieldInstanceReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleDoubles$FieldInstanceReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleDoubles$FieldInstanceReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(static_cast<void(VarHandleDoubles$FieldInstanceReadWrite::*)($Class*,int64_t)>(&VarHandleDoubles$FieldInstanceReadWrite::init$))},
	{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(static_cast<void(VarHandleDoubles$FieldInstanceReadWrite::*)($Class*,int64_t,bool)>(&VarHandleDoubles$FieldInstanceReadWrite::init$))},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,double,double)>(&VarHandleDoubles$FieldInstanceReadWrite::compareAndExchange)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,double,double)>(&VarHandleDoubles$FieldInstanceReadWrite::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,double,double)>(&VarHandleDoubles$FieldInstanceReadWrite::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,double,double)>(&VarHandleDoubles$FieldInstanceReadWrite::compareAndSet)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,double)>(&VarHandleDoubles$FieldInstanceReadWrite::getAndAdd)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,double)>(&VarHandleDoubles$FieldInstanceReadWrite::getAndAddAcquire)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,double)>(&VarHandleDoubles$FieldInstanceReadWrite::getAndAddRelease)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,double)>(&VarHandleDoubles$FieldInstanceReadWrite::getAndSet)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndSet9},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,double)>(&VarHandleDoubles$FieldInstanceReadWrite::getAndSetAcquire)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndSetAcquire10},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,double)>(&VarHandleDoubles$FieldInstanceReadWrite::getAndSetRelease)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_getAndSetRelease11},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,double)>(&VarHandleDoubles$FieldInstanceReadWrite::set)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_set12},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,double)>(&VarHandleDoubles$FieldInstanceReadWrite::setOpaque)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_setOpaque13},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,double)>(&VarHandleDoubles$FieldInstanceReadWrite::setRelease)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_setRelease14},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,double)>(&VarHandleDoubles$FieldInstanceReadWrite::setVolatile)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_setVolatile15},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,double,double)>(&VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSet)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSet16},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,double,double)>(&VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetAcquire17},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,double,double)>(&VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetPlain18},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,double,double)>(&VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleDoubles$FieldInstanceReadWrite_MethodAnnotations_weakCompareAndSetRelease19},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldInstanceReadWrite;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleDoubles$FieldInstanceReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleDoubles$FieldInstanceReadWrite", "java.lang.invoke.VarHandleDoubles", "FieldInstanceReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldInstanceReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleDoubles$FieldInstanceReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleDoubles$FieldInstanceReadWrite",
	"java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly",
	nullptr,
	_VarHandleDoubles$FieldInstanceReadWrite_FieldInfo_,
	_VarHandleDoubles$FieldInstanceReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleDoubles$FieldInstanceReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleDoubles"
};

$Object* allocate$VarHandleDoubles$FieldInstanceReadWrite($Class* clazz) {
	return $of($alloc(VarHandleDoubles$FieldInstanceReadWrite));
}

$VarForm* VarHandleDoubles$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleDoubles$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset) {
	VarHandleDoubles$FieldInstanceReadWrite::init$(receiverType, fieldOffset, false);
}

void VarHandleDoubles$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, bool exact) {
	$VarHandleDoubles$FieldInstanceReadOnly::init$(receiverType, fieldOffset, VarHandleDoubles$FieldInstanceReadWrite::FORM, exact);
}

VarHandleDoubles$FieldInstanceReadWrite* VarHandleDoubles$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, true);
}

VarHandleDoubles$FieldInstanceReadWrite* VarHandleDoubles$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, false);
}

void VarHandleDoubles$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleDoubles$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoublePlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void clinit$VarHandleDoubles$FieldInstanceReadWrite($Class* class$) {
	$load($Object);
	$init($Double);
	$assignStatic(VarHandleDoubles$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleDoubles$FieldInstanceReadWrite::class$, $Object::class$, $Double::TYPE, $$new($ClassArray, 0)));
}

VarHandleDoubles$FieldInstanceReadWrite::VarHandleDoubles$FieldInstanceReadWrite() {
}

$Class* VarHandleDoubles$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleDoubles$FieldInstanceReadWrite, name, initialize, &_VarHandleDoubles$FieldInstanceReadWrite_ClassInfo_, clinit$VarHandleDoubles$FieldInstanceReadWrite, allocate$VarHandleDoubles$FieldInstanceReadWrite);
	return class$;
}

$Class* VarHandleDoubles$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java