#include <java/lang/invoke/VarHandleFloats$FieldStaticReadWrite.h>

#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleFloats$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleFloats.h>
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
using $VarHandleFloats$FieldStaticReadOnly = ::java::lang::invoke::VarHandleFloats$FieldStaticReadOnly;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndSet9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_set12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_setOpaque13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_setRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_setVolatile15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleFloats$FieldStaticReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleFloats$FieldStaticReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleFloats$FieldStaticReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleFloats$FieldStaticReadWrite, init$, void, Object$*, int64_t)},
	{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(VarHandleFloats$FieldStaticReadWrite, init$, void, Object$*, int64_t, bool)},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;FF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, compareAndExchange, float, $VarHandle*, float, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;FF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, compareAndExchangeAcquire, float, $VarHandle*, float, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;FF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, compareAndExchangeRelease, float, $VarHandle*, float, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;FF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, float, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, getAndAdd, float, $VarHandle*, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, getAndAddAcquire, float, $VarHandle*, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, getAndAddRelease, float, $VarHandle*, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, getAndSet, float, $VarHandle*, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndSet9},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, getAndSetAcquire, float, $VarHandle*, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire10},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, getAndSetRelease, float, $VarHandle*, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease11},
	{"set", "(Ljava/lang/invoke/VarHandle;F)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, set, void, $VarHandle*, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_set12},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;F)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, setOpaque, void, $VarHandle*, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_setOpaque13},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;F)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, setRelease, void, $VarHandle*, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_setRelease14},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;F)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, setVolatile, void, $VarHandle*, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_setVolatile15},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;FF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, float, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet16},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;FF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, float, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire17},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;FF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, float, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain18},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;FF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, float, float), nullptr, nullptr, _VarHandleFloats$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease19},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleFloats$FieldStaticReadWrite, withInvokeBehavior, VarHandleFloats$FieldStaticReadWrite*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleFloats$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleFloats$FieldStaticReadWrite*)},
	{}
};

$InnerClassInfo _VarHandleFloats$FieldStaticReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleFloats$FieldStaticReadWrite", "java.lang.invoke.VarHandleFloats", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleFloats$FieldStaticReadOnly", "java.lang.invoke.VarHandleFloats", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleFloats$FieldStaticReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleFloats$FieldStaticReadWrite",
	"java.lang.invoke.VarHandleFloats$FieldStaticReadOnly",
	nullptr,
	_VarHandleFloats$FieldStaticReadWrite_FieldInfo_,
	_VarHandleFloats$FieldStaticReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleFloats$FieldStaticReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleFloats"
};

$Object* allocate$VarHandleFloats$FieldStaticReadWrite($Class* clazz) {
	return $of($alloc(VarHandleFloats$FieldStaticReadWrite));
}

$VarForm* VarHandleFloats$FieldStaticReadWrite::FORM = nullptr;

void VarHandleFloats$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleFloats$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleFloats$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleFloats$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleFloats$FieldStaticReadWrite::FORM, exact);
}

VarHandleFloats$FieldStaticReadWrite* VarHandleFloats$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleFloats$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleFloats$FieldStaticReadWrite* VarHandleFloats$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleFloats$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleFloats$FieldStaticReadWrite::set($VarHandle* ob, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloat($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleFloats$FieldStaticReadWrite::setVolatile($VarHandle* ob, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloatVolatile($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleFloats$FieldStaticReadWrite::setOpaque($VarHandle* ob, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloatOpaque($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleFloats$FieldStaticReadWrite::setRelease($VarHandle* ob, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloatRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleFloats$FieldStaticReadWrite::compareAndSet($VarHandle* ob, float expected, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetFloat($nc(handle)->base, handle->fieldOffset, expected, value);
}

float VarHandleFloats$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, float expected, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloat($nc(handle)->base, handle->fieldOffset, expected, value);
}

float VarHandleFloats$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, float expected, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloatAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

float VarHandleFloats$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, float expected, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloatRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, float expected, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatPlain($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, float expected, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloat($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, float expected, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, float expected, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

float VarHandleFloats$FieldStaticReadWrite::getAndSet($VarHandle* ob, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloat($nc(handle)->base, handle->fieldOffset, value);
}

float VarHandleFloats$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloatAcquire($nc(handle)->base, handle->fieldOffset, value);
}

float VarHandleFloats$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloatRelease($nc(handle)->base, handle->fieldOffset, value);
}

float VarHandleFloats$FieldStaticReadWrite::getAndAdd($VarHandle* ob, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloat($nc(handle)->base, handle->fieldOffset, value);
}

float VarHandleFloats$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloatAcquire($nc(handle)->base, handle->fieldOffset, value);
}

float VarHandleFloats$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, float value) {
	$init(VarHandleFloats$FieldStaticReadWrite);
	$var(VarHandleFloats$FieldStaticReadWrite, handle, $cast(VarHandleFloats$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloatRelease($nc(handle)->base, handle->fieldOffset, value);
}

void clinit$VarHandleFloats$FieldStaticReadWrite($Class* class$) {
	$init($Float);
	$assignStatic(VarHandleFloats$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleFloats$FieldStaticReadWrite::class$, nullptr, $Float::TYPE, $$new($ClassArray, 0)));
}

VarHandleFloats$FieldStaticReadWrite::VarHandleFloats$FieldStaticReadWrite() {
}

$Class* VarHandleFloats$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleFloats$FieldStaticReadWrite, name, initialize, &_VarHandleFloats$FieldStaticReadWrite_ClassInfo_, clinit$VarHandleFloats$FieldStaticReadWrite, allocate$VarHandleFloats$FieldStaticReadWrite);
	return class$;
}

$Class* VarHandleFloats$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java