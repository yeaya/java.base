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

namespace java {
	namespace lang {
		namespace invoke {

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
	$nc($MethodHandleStatics::UNSAFE)->putDouble($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldStaticReadWrite::setVolatile($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleVolatile($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldStaticReadWrite::setOpaque($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleOpaque($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldStaticReadWrite::setRelease($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

bool VarHandleDoubles$FieldStaticReadWrite::compareAndSet($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetDouble($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDouble($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoublePlain($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDouble($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleAcquire($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, double expected, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleRelease($nc(handle)->base, $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndSet($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDouble($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndAdd($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDouble($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndAddAcquire($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleAcquire($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldStaticReadWrite::getAndAddRelease($VarHandle* ob, double value) {
	$init(VarHandleDoubles$FieldStaticReadWrite);
	$var(VarHandleDoubles$FieldStaticReadWrite, handle, $cast(VarHandleDoubles$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleRelease($nc(handle)->base, $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldStaticReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleDoubles$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleDoubles$FieldStaticReadWrite::class$, nullptr, $Double::TYPE, $$new($ClassArray, 0)));
}

VarHandleDoubles$FieldStaticReadWrite::VarHandleDoubles$FieldStaticReadWrite() {
}

$Class* VarHandleDoubles$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleDoubles$FieldStaticReadWrite, FORM)},
		{}
	};
	$CompoundAttribute compareAndExchangemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndExchangeReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute compareAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndAddReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAndSetReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute setVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetAcquiremethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetPlainmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute weakCompareAndSetReleasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;J)V", nullptr, 0, $method(VarHandleDoubles$FieldStaticReadWrite, init$, void, Object$*, int64_t)},
		{"<init>", "(Ljava/lang/Object;JZ)V", nullptr, $PRIVATE, $method(VarHandleDoubles$FieldStaticReadWrite, init$, void, Object$*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;DD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, compareAndExchange, double, $VarHandle*, double, double), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;DD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, compareAndExchangeAcquire, double, $VarHandle*, double, double), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;DD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, compareAndExchangeRelease, double, $VarHandle*, double, double), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, double, double), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndAdd, double, $VarHandle*, double), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndAddAcquire, double, $VarHandle*, double), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndAddRelease, double, $VarHandle*, double), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndSet, double, $VarHandle*, double), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndSetAcquire, double, $VarHandle*, double), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, getAndSetRelease, double, $VarHandle*, double), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, set, void, $VarHandle*, double), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, setOpaque, void, $VarHandle*, double), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, setRelease, void, $VarHandle*, double), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, setVolatile, void, $VarHandle*, double), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, double, double), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, double, double), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, double, double), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, double, double), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleDoubles$FieldStaticReadWrite, withInvokeBehavior, VarHandleDoubles$FieldStaticReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleDoubles$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleDoubles$FieldStaticReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleDoubles$FieldStaticReadWrite", "java.lang.invoke.VarHandleDoubles", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleDoubles$FieldStaticReadWrite",
		"java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleDoubles"
	};
	$loadClass(VarHandleDoubles$FieldStaticReadWrite, name, initialize, &classInfo$$, VarHandleDoubles$FieldStaticReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleDoubles$FieldStaticReadWrite);
	});
	return class$;
}

$Class* VarHandleDoubles$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java