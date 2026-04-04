#include <java/lang/invoke/VarHandleFloats$FieldInstanceReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleFloats$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleFloats.h>
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
using $VarHandleFloats$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleFloats$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

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
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleFloats$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloatVolatile($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleFloats$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloatOpaque($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleFloats$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putFloatRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

bool VarHandleFloats$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

float VarHandleFloats$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

float VarHandleFloats$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloatAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

float VarHandleFloats$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeFloatRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatPlain($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

bool VarHandleFloats$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, float expected, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetFloatRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, expected, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloatAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetFloatRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndAdd($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloat($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndAddAcquire($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloatAcquire($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

float VarHandleFloats$FieldInstanceReadWrite::getAndAddRelease($VarHandle* ob, Object$* holder, float value) {
	$init(VarHandleFloats$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleFloats$FieldInstanceReadWrite, handle, $cast(VarHandleFloats$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddFloatRelease($Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))), $nc(handle)->fieldOffset, value);
}

void VarHandleFloats$FieldInstanceReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleFloats$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleFloats$FieldInstanceReadWrite::class$, $Object::class$, $Float::TYPE, $$new($ClassArray, 0)));
}

VarHandleFloats$FieldInstanceReadWrite::VarHandleFloats$FieldInstanceReadWrite() {
}

$Class* VarHandleFloats$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleFloats$FieldInstanceReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Class;J)V", "(Ljava/lang/Class<*>;J)V", 0, $method(VarHandleFloats$FieldInstanceReadWrite, init$, void, $Class*, int64_t)},
		{"<init>", "(Ljava/lang/Class;JZ)V", "(Ljava/lang/Class<*>;JZ)V", $PRIVATE, $method(VarHandleFloats$FieldInstanceReadWrite, init$, void, $Class*, int64_t, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, compareAndExchange, float, $VarHandle*, Object$*, float, float), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, compareAndExchangeAcquire, float, $VarHandle*, Object$*, float, float), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, compareAndExchangeRelease, float, $VarHandle*, Object$*, float, float), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, compareAndSet, bool, $VarHandle*, Object$*, float, float), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, getAndAdd, float, $VarHandle*, Object$*, float), nullptr, nullptr, getAndAddmethodAnnotations$$},
		{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, getAndAddAcquire, float, $VarHandle*, Object$*, float), nullptr, nullptr, getAndAddAcquiremethodAnnotations$$},
		{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, getAndAddRelease, float, $VarHandle*, Object$*, float), nullptr, nullptr, getAndAddReleasemethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, getAndSet, float, $VarHandle*, Object$*, float), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, getAndSetAcquire, float, $VarHandle*, Object$*, float), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)F", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, getAndSetRelease, float, $VarHandle*, Object$*, float), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, set, void, $VarHandle*, Object$*, float), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, setOpaque, void, $VarHandle*, Object$*, float), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, setRelease, void, $VarHandle*, Object$*, float), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;F)V", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, setVolatile, void, $VarHandle*, Object$*, float), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, float, float), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, float, float), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, float, float), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;FF)Z", nullptr, $STATIC, $staticMethod(VarHandleFloats$FieldInstanceReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, float, float), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleFloats$FieldInstanceReadWrite, withInvokeBehavior, VarHandleFloats$FieldInstanceReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleFloats$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleFloats$FieldInstanceReadWrite, withInvokeExactBehavior, VarHandleFloats$FieldInstanceReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleFloats$FieldInstanceReadWrite", "java.lang.invoke.VarHandleFloats", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly", "java.lang.invoke.VarHandleFloats", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleFloats$FieldInstanceReadWrite",
		"java.lang.invoke.VarHandleFloats$FieldInstanceReadOnly",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleFloats"
	};
	$loadClass(VarHandleFloats$FieldInstanceReadWrite, name, initialize, &classInfo$$, VarHandleFloats$FieldInstanceReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleFloats$FieldInstanceReadWrite);
	});
	return class$;
}

$Class* VarHandleFloats$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java