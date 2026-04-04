#include <java/lang/invoke/VarHandleReferences$FieldInstanceReadWrite.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleReferences$FieldInstanceReadOnly.h>
#include <java/lang/invoke/VarHandleReferences.h>
#include <java/util/Objects.h>
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
using $VarHandleReferences$FieldInstanceReadOnly = ::java::lang::invoke::VarHandleReferences$FieldInstanceReadOnly;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleReferences$FieldInstanceReadWrite::FORM = nullptr;

void VarHandleReferences$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, $Class* fieldType) {
	VarHandleReferences$FieldInstanceReadWrite::init$(receiverType, fieldOffset, fieldType, false);
}

void VarHandleReferences$FieldInstanceReadWrite::init$($Class* receiverType, int64_t fieldOffset, $Class* fieldType, bool exact) {
	$VarHandleReferences$FieldInstanceReadOnly::init$(receiverType, fieldOffset, fieldType, VarHandleReferences$FieldInstanceReadWrite::FORM, exact);
}

VarHandleReferences$FieldInstanceReadWrite* VarHandleReferences$FieldInstanceReadWrite::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, this->fieldType, true);
}

VarHandleReferences$FieldInstanceReadWrite* VarHandleReferences$FieldInstanceReadWrite::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleReferences$FieldInstanceReadWrite, this->receiverType, this->fieldOffset, this->fieldType, false);
}

void VarHandleReferences$FieldInstanceReadWrite::set($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$nc($MethodHandleStatics::UNSAFE)->putReference(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

void VarHandleReferences$FieldInstanceReadWrite::setVolatile($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceVolatile(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

void VarHandleReferences$FieldInstanceReadWrite::setOpaque($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceOpaque(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

void VarHandleReferences$FieldInstanceReadWrite::setRelease($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceRelease(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

bool VarHandleReferences$FieldInstanceReadWrite::compareAndSet($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetReference(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::compareAndExchange($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReference(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::compareAndExchangeAcquire($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceAcquire(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::compareAndExchangeRelease($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceRelease(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

bool VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSetPlain($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferencePlain(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

bool VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSet($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReference(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

bool VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSetAcquire($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceAcquire(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

bool VarHandleReferences$FieldInstanceReadWrite::weakCompareAndSetRelease($VarHandle* ob, Object$* holder, Object$* expected, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	$var($Object, var$2, $nc(handle->fieldType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceRelease(var$0, var$1, var$2, $(handle->fieldType->cast(value)));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::getAndSet($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetReference(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::getAndSetAcquire($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceAcquire(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

$Object* VarHandleReferences$FieldInstanceReadWrite::getAndSetRelease($VarHandle* ob, Object$* holder, Object$* value) {
	$init(VarHandleReferences$FieldInstanceReadWrite);
	$useLocalObjectStack();
	$var(VarHandleReferences$FieldInstanceReadWrite, handle, $cast(VarHandleReferences$FieldInstanceReadWrite, ob));
	$init($MethodHandleStatics);
	$var($Object, var$0, $Objects::requireNonNull($($nc($nc(handle)->receiverType)->cast(holder))));
	int64_t var$1 = handle->fieldOffset;
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceRelease(var$0, var$1, $($nc(handle->fieldType)->cast(value)));
}

void VarHandleReferences$FieldInstanceReadWrite::clinit$($Class* clazz) {
	$assignStatic(VarHandleReferences$FieldInstanceReadWrite::FORM, $new($VarForm, VarHandleReferences$FieldInstanceReadWrite::class$, $Object::class$, $Object::class$, $$new($ClassArray, 0)));
}

VarHandleReferences$FieldInstanceReadWrite::VarHandleReferences$FieldInstanceReadWrite() {
}

$Class* VarHandleReferences$FieldInstanceReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleReferences$FieldInstanceReadWrite, FORM)},
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
		{"<init>", "(Ljava/lang/Class;JLjava/lang/Class;)V", "(Ljava/lang/Class<*>;JLjava/lang/Class<*>;)V", 0, $method(VarHandleReferences$FieldInstanceReadWrite, init$, void, $Class*, int64_t, $Class*)},
		{"<init>", "(Ljava/lang/Class;JLjava/lang/Class;Z)V", "(Ljava/lang/Class<*>;JLjava/lang/Class<*>;Z)V", $PRIVATE, $method(VarHandleReferences$FieldInstanceReadWrite, init$, void, $Class*, int64_t, $Class*, bool)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, compareAndExchange, $Object*, $VarHandle*, Object$*, Object$*, Object$*), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, compareAndExchangeAcquire, $Object*, $VarHandle*, Object$*, Object$*, Object$*), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, compareAndExchangeRelease, $Object*, $VarHandle*, Object$*, Object$*, Object$*), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, compareAndSet, bool, $VarHandle*, Object$*, Object$*, Object$*), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, getAndSet, $Object*, $VarHandle*, Object$*, Object$*), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, getAndSetAcquire, $Object*, $VarHandle*, Object$*, Object$*), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, getAndSetRelease, $Object*, $VarHandle*, Object$*, Object$*), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, set, void, $VarHandle*, Object$*, Object$*), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, setOpaque, void, $VarHandle*, Object$*, Object$*), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, setRelease, void, $VarHandle*, Object$*, Object$*), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, setVolatile, void, $VarHandle*, Object$*, Object$*), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, weakCompareAndSet, bool, $VarHandle*, Object$*, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$FieldInstanceReadWrite, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleReferences$FieldInstanceReadWrite, withInvokeBehavior, VarHandleReferences$FieldInstanceReadWrite*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleReferences$FieldInstanceReadWrite;", nullptr, $PUBLIC, $virtualMethod(VarHandleReferences$FieldInstanceReadWrite, withInvokeExactBehavior, VarHandleReferences$FieldInstanceReadWrite*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleReferences$FieldInstanceReadWrite", "java.lang.invoke.VarHandleReferences", "FieldInstanceReadWrite", $STATIC | $FINAL},
		{"java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly", "java.lang.invoke.VarHandleReferences", "FieldInstanceReadOnly", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleReferences$FieldInstanceReadWrite",
		"java.lang.invoke.VarHandleReferences$FieldInstanceReadOnly",
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
	$loadClass(VarHandleReferences$FieldInstanceReadWrite, name, initialize, &classInfo$$, VarHandleReferences$FieldInstanceReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleReferences$FieldInstanceReadWrite);
	});
	return class$;
}

$Class* VarHandleReferences$FieldInstanceReadWrite::class$ = nullptr;

		} // invoke
	} // lang
} // java