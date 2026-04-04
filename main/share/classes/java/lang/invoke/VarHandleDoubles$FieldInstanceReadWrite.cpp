#include <java/lang/invoke/VarHandleDoubles$FieldInstanceReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleDoubles$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleDoubles.h>
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
using $VarHandleDoubles$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleDoubles$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

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
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleDoubles$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoublePlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleDoubles$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, double expected, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDouble($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

double VarHandleDoubles$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, double value) {
	$init(VarHandleDoubles$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleDoubles$FieldInstanceReadWrite, handle, $cast(VarHandleDoubles$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleDoubles$FieldInstanceReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleDoubles$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleDoubles$FieldInstanceReadWrite::class$, $Object::class$, $Double::TYPE, $$new($ClassArray, 0)));
}

VarHandleDoubles$FieldInstanceReadWrite::VarHandleDoubles$FieldInstanceReadWrite() {
}

$Class* VarHandleDoubles$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleDoubles$FieldInstanceReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleDoubles$FieldInstanceReadWrite, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(VarHandleDoubles$FieldInstanceReadWrite, init$, void, $Class*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, compareAndExchange, double, $VarHandle*, Object$*, double, double), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, compareAndExchangeAcquire, double, $VarHandle*, Object$*, double, double), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, compareAndExchangeRelease, double, $VarHandle*, Object$*, double, double), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, compareAndSet, bool, $VarHandle*, Object$*, double, double), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, getAndAdd, double, $VarHandle*, Object$*, double), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, getAndAddAcquire, double, $VarHandle*, Object$*, double), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, getAndAddRelease, double, $VarHandle*, Object$*, double), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, getAndSet, double, $VarHandle*, Object$*, double), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, getAndSetAcquire, double, $VarHandle*, Object$*, double), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)D", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, getAndSetRelease, double, $VarHandle*, Object$*, double), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, set, void, $VarHandle*, Object$*, double), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, setOpaque, void, $VarHandle*, Object$*, double), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, setRelease, void, $VarHandle*, Object$*, double), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;D)V", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, setVolatile, void, $VarHandle*, Object$*, double), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, double, double), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, double, double), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, double, double), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;DD)Z", nullptr, $STATIC, $staticMethod(VarHandleDoubles$FieldInstanceReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, double, double), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleDoubles$FieldInstanceReadWrite, withInvokeBehavior, VarHandleDoubles$FieldInstanceReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleDoubles$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleDoubles$FieldInstanceReadWrite, withInvokeExactBehavior, VarHandleDoubles$FieldInstanceReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleDoubles$FieldInstanceReadWrite", "java.lang.invoke.VarHandleDoubles", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly", "java.lang.invoke.VarHandleDoubles", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleDoubles$FieldInstanceReadWrite",
		"java.lang.invoke.VarHandleDoubles$FieldInstanceReadOnly",
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
	$loadClass(VarHandleDoubles$FieldInstanceReadWrite, name, initialize, &classInfo$$, VarHandleDoubles$FieldInstanceReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleDoubles$FieldInstanceReadWrite);
	});
	return class$;
}

$Class* VarHandleDoubles$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java