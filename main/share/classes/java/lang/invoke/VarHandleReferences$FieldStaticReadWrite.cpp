#include <java/lang/invoke/VarHandleReferences$FieldStaticReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleReferences$FieldStaticReadOnly.h>
#include <java/lang/invoke/VarHandleReferences.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef FORM
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandleReferences$FieldStaticReadOnly = ::java::lang::invoke::VarHandleReferences$FieldStaticReadOnly;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleReferences$FieldStaticReadWrite::FORM = nullptr;

void VarHandleReferences$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, $Class* fieldType) {
	VarHandleReferences$FieldStaticReadWrite::init$(base, fieldOffset, fieldType, false);
}

void VarHandleReferences$FieldStaticReadWrite::init$(Object$* base, int64_t fieldOffset, $Class* fieldType, bool exact) {
	$VarHandleReferences$FieldStaticReadOnly::init$(base, fieldOffset, fieldType, VarHandleReferences$FieldStaticReadWrite::FORM, exact);
}

VarHandleReferences$FieldStaticReadWrite* VarHandleReferences$FieldStaticReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldStaticReadWrite, this->base, this->fieldOffset, this->fieldType, true);
}

VarHandleReferences$FieldStaticReadWrite* VarHandleReferences$FieldStaticReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldStaticReadWrite, this->base, this->fieldOffset, this->fieldType, false);
}

void VarHandleReferences$FieldStaticReadWrite::set($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putReference($nc(handle)->base, $nc(handle)->fieldOffset, $($nc($nc(handle)->fieldType)->cast(value)));
}

void VarHandleReferences$FieldStaticReadWrite::setVolatile($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putReferenceVolatile($nc(handle)->base, $nc(handle)->fieldOffset, $($nc($nc(handle)->fieldType)->cast(value)));
}

void VarHandleReferences$FieldStaticReadWrite::setOpaque($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putReferenceOpaque($nc(handle)->base, $nc(handle)->fieldOffset, $($nc($nc(handle)->fieldType)->cast(value)));
}

void VarHandleReferences$FieldStaticReadWrite::setRelease($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putReferenceRelease($nc(handle)->base, $nc(handle)->fieldOffset, $($nc($nc(handle)->fieldType)->cast(value)));
}

bool VarHandleReferences$FieldStaticReadWrite::compareAndSet($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetReference(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

$Object* VarHandleReferences$FieldStaticReadWrite::compareAndExchange($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReference(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

$Object* VarHandleReferences$FieldStaticReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceAcquire(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

$Object* VarHandleReferences$FieldStaticReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceRelease(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

bool VarHandleReferences$FieldStaticReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferencePlain(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

bool VarHandleReferences$FieldStaticReadWrite::weakCompareAndSet($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReference(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

bool VarHandleReferences$FieldStaticReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceAcquire(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

bool VarHandleReferences$FieldStaticReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $nc(handle)->base);
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceRelease(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

$Object* VarHandleReferences$FieldStaticReadWrite::getAndSet($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetReference($nc(handle)->base, $nc(handle)->fieldOffset, $($nc($nc(handle)->fieldType)->cast(value)));
}

$Object* VarHandleReferences$FieldStaticReadWrite::getAndSetAcquire($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceAcquire($nc(handle)->base, $nc(handle)->fieldOffset, $($nc($nc(handle)->fieldType)->cast(value)));
}

$Object* VarHandleReferences$FieldStaticReadWrite::getAndSetRelease($VarHandle* ob, Object$* value) {
	$init(VarHandleReferences$FieldStaticReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldStaticReadWrite, handle, $cast(VarHandleReferences$FieldStaticReadWrite, ob));
	$init($MethodHandleStatics);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceRelease($nc(handle)->base, $nc(handle)->fieldOffset, $($nc($nc(handle)->fieldType)->cast(value)));
}

void VarHandleReferences$FieldStaticReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleReferences$FieldStaticReadWrite::FORM, $new($VarForm, VarHandleReferences$FieldStaticReadWrite::class$, nullptr, $Object::class$, $$new($ClassArray, 0)));
}

VarHandleReferences$FieldStaticReadWrite::VarHandleReferences$FieldStaticReadWrite() {
}

$Class* VarHandleReferences$FieldStaticReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleReferences$FieldStaticReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Object;JLjava/lang/Class;)V", "(Ljava/lang/Object;JLjava/lang/Class<*>;)V", 0, $method(VarHandleReferences$FieldStaticReadWrite, init$, void, Object$*, int64_t, $Class*)},
		{"<init>", "(Ljava/lang/Object;JLjava/lang/Class;Z)V", "(Ljava/lang/Object;JLjava/lang/Class<*>;Z)V", $PRIVATE, $method(VarHandleReferences$FieldStaticReadWrite, init$, void, Object$*, int64_t, $Class*, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, compareAndExchange, $Object*, $VarHandle*, Object$*, Object$*), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, compareAndExchangeAcquire, $Object*, $VarHandle*, Object$*, Object$*), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, compareAndExchangeRelease, $Object*, $VarHandle*, Object$*, Object$*), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, compareAndSet, bool, $VarHandle*, Object$*, Object$*), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, getAndSet, $Object*, $VarHandle*, Object$*), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, getAndSetAcquire, $Object*, $VarHandle*, Object$*), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, getAndSetRelease, $Object*, $VarHandle*, Object$*), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, set, void, $VarHandle*, Object$*), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, setOpaque, void, $VarHandle*, Object$*), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, setRelease, void, $VarHandle*, Object$*), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, setVolatile, void, $VarHandle*, Object$*), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldStaticReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleReferences$FieldStaticReadWrite, withInvokeBehavior, VarHandleReferences$FieldStaticReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldStaticReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleReferences$FieldStaticReadWrite, withInvokeExactBehavior, VarHandleReferences$FieldStaticReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleReferences$FieldStaticReadWrite", "java.lang.invoke.VarHandleReferences", "FieldStaticReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleReferences$FieldStaticReadOnly", "java.lang.invoke.VarHandleReferences", "FieldStaticReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleReferences$FieldStaticReadWrite",
		"java.lang.invoke.VarHandleReferences$FieldStaticReadOnly",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandleReferences"
	};
	$loadClass(VarHandleReferences$FieldStaticReadWrite, name, initialize, &classInfo$$, VarHandleReferences$FieldStaticReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleReferences$FieldStaticReadWrite);
	});
	return class$;
}

$Class* VarHandleReferences$FieldStaticReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java