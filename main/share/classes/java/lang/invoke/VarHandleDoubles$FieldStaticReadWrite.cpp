#include <java/lang/invoke/VarHandleDoubles$FieldStaticReadWrite.h>

#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleDoubles$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleDoubles.h>
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
using $VarHandleDoubles$FieldStaticReadOnly = ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_compareAndSet5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndAdd6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndSet9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_set12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_setOpaque13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_setRelease14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_setVolatile15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleDoubles$FieldStaticReadWrite_FieldInfo_[] = {
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleDoubles$FieldStaticReadWrite, FORM)},
	{}
};

$MethodInfo _VarHandleDoubles$FieldStaticReadWrite_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleDoubles$FieldStaticReadWrite, init$, void, Object$*, int64_t)},
	{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(VarHandleDoubles$FieldStaticReadWrite, init$, void, Object$*, int64_t, bool)},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;DD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, compareAndExchange, double, $VarHandle*, double, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_compareAndExchange2},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;DD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, compareAndExchangeAcquire, double, $VarHandle*, double, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeAcquire3},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;DD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, compareAndExchangeRelease, double, $VarHandle*, double, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_compareAndExchangeRelease4},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, double, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_compareAndSet5},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndAdd, double, $VarHandle*, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndAdd6},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndAddAcquire, double, $VarHandle*, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndAddAcquire7},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndAddRelease, double, $VarHandle*, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndAddRelease8},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndSet, double, $VarHandle*, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndSet9},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndSetAcquire, double, $VarHandle*, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndSetAcquire10},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndSetRelease, double, $VarHandle*, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_getAndSetRelease11},
	{"set", "(Ljava/lang/invoke/VarHandle;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, set, void, $VarHandle*, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_set12},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, setOpaque, void, $VarHandle*, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_setOpaque13},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, setRelease, void, $VarHandle*, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_setRelease14},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, setVolatile, void, $VarHandle*, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_setVolatile15},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, double, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSet16},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, double, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetAcquire17},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, double, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetPlain18},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, double, double), nullptr, nullptr, _VarHandleDoubles$FieldStaticReadWrite_MethodAnnotations_weakCompareAndSetRelease19},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleDoubles$FieldStaticReadWrite, withInvokeBehavior, VarHandleDoubles$FieldStaticReadWrite*)},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleDoubles$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleDoubles$FieldStaticReadWrite*)},
	{}
};

$InnerClassInfo _VarHandleDoubles$FieldStaticReadWrite_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleDoubles$FieldStaticReadWrite", "java.lang.invoke.VarHandleDoubles", "FieldStaticReadWrite", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldStaticReadOnly", $STATIC},
	{}
};

$ClassInfo _VarHandleDoubles$FieldStaticReadWrite_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleDoubles$FieldStaticReadWrite",
	"java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly",
	nullptr,
	_VarHandleDoubles$FieldStaticReadWrite_FieldInfo_,
	_VarHandleDoubles$FieldStaticReadWrite_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleDoubles$FieldStaticReadWrite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleDoubles"
};

$Object* allocate$VarHandleDoubles$FieldStaticReadWrite($Class* clazz) {
	return $of($alloc(VarHandleDoubles$FieldStaticReadWrite));
}

$VarForm* VarHandleDoubles$FieldStaticReadWrite::FORM = nullptr;

void VarHandleDoubles$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset) {
	VarHandleDoubles$FieldStaticReadWrite::init$(base, fieldOffset, false);
}

void VarHandleDoubles$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, bool exact) {
	$VarHandleDoubles$FieldStaticReadOnly::init$(base, fieldOffset, VarHandleDoubles$FieldStaticReadWrite::FORM, exact);
}

VarHandleDoubles$FieldStaticReadWrite* VarHandleDoubles$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$FieldStaticReadWrite, this->base, this->fieldOffset, true);
}

VarHandleDoubles$FieldStaticReadWrite* VarHandleDoubles$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$FieldStaticReadWrite, this->base, this->fieldOffset, false);
}

void VarHandleDoubles$FieldStaticReadWrite::set($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDouble($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleDoubles$FieldStaticReadWrite::setVolatile($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleVolatile($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleDoubles$FieldStaticReadWrite::setOpaque($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleOpaque($nc(handle)->base, handle->fieldOffset, value);
}

void VarHandleDoubles$FieldStaticReadWrite::setRelease($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleRelease($nc(handle)->base, handle->fieldOffset, value);
}

bool VarHandleDoubles$FieldStaticReadWrite::compareAndSet($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetDouble($nc(handle)->base, handle->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDouble($nc(handle)->base, handle->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoublePlain($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDouble($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleAcquire($nc(handle)->base, handle->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleRelease($nc(handle)->base, handle->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndSet($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDouble($nc(handle)->base, handle->fieldOffset, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleAcquire($nc(handle)->base, handle->fieldOffset, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleRelease($nc(handle)->base, handle->fieldOffset, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndAdd($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDouble($nc(handle)->base, handle->fieldOffset, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleAcquire($nc(handle)->base, handle->fieldOffset, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleRelease($nc(handle)->base, handle->fieldOffset, value);
}

void clinit$VarHandleDoubles$FieldStaticReadWrite($Class* class$) {
	$init($Double);
	$assignStatic(VarHandleDoubles$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleDoubles$FieldStaticReadWrite::class$, nullptr, $Double::TYPE, $$new($ClassArray, 0)));
}

VarHandleDoubles$FieldStaticReadWrite::VarHandleDoubles$FieldStaticReadWrite() {
}

$Class* VarHandleDoubles$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$loadClass(VarHandleDoubles$FieldStaticReadWrite, name, initialize, &_VarHandleDoubles$FieldStaticReadWrite_ClassInfo_, clinit$VarHandleDoubles$FieldStaticReadWrite, allocate$VarHandleDoubles$FieldStaticReadWrite);
	return class$;
}

$Class* VarHandleDoubles$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java