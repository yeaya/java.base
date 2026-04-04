#include <java/lang/invoke/VarHandleReferences$Array.h>
#include <java/lang/ArrayStoreException.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleReferences.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef AIOOBE_SUPPLIER
#undef FORM
#undef TYPE
#undef UNSAFE

using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$VarHandleDesc = ::java::lang::invoke::VarHandle$VarHandleDesc;
using $Optional = ::java::util::Optional;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$VarForm* VarHandleReferences$Array::FORM = nullptr;

void VarHandleReferences$Array::init$(int32_t abase, int32_t ashift, $Class* arrayType) {
	VarHandleReferences$Array::init$(abase, ashift, arrayType, false);
}

void VarHandleReferences$Array::init$(int32_t abase, int32_t ashift, $Class* arrayType, bool exact) {
	$VarHandle::init$(VarHandleReferences$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
	$set(this, arrayType, arrayType);
	$set(this, componentType, $nc(arrayType)->getComponentType());
}

VarHandleReferences$Array* VarHandleReferences$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleReferences$Array, this->abase, this->ashift, this->arrayType, true);
}

VarHandleReferences$Array* VarHandleReferences$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleReferences$Array, this->abase, this->ashift, this->arrayType, false);
}

$Optional* VarHandleReferences$Array::describeConstable() {
	$useLocalObjectStack();
	$var($Optional, arrayTypeRef, $nc(this->arrayType)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($$cast($ClassDesc, arrayTypeRef->get()))));
}

$MethodType* VarHandleReferences$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	return $nc(at)->accessModeType(this->arrayType, $nc(this->arrayType)->getComponentType(), $$new($ClassArray, {$Integer::TYPE}));
}

$Object* VarHandleReferences$Array::runtimeTypeCheck(VarHandleReferences$Array* handle, $ObjectArray* oarray, Object$* value) {
	$init(VarHandleReferences$Array);
	if ($nc(handle)->arrayType == $nc($of(oarray))->getClass()) {
		return $nc(handle->componentType)->cast(value);
	} else {
		return reflectiveTypeCheck(oarray, value);
	}
}

$Object* VarHandleReferences$Array::reflectiveTypeCheck($ObjectArray* oarray, Object$* value) {
	$init(VarHandleReferences$Array);
	try {
		return $nc($nc($of(oarray))->getClass()->getComponentType())->cast(value);
	} catch ($ClassCastException& e) {
		$throwNew($ArrayStoreException);
	}
	$shouldNotReachHere();
}

$Object* VarHandleReferences$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	return $nc(array)->get(index);
}

void VarHandleReferences$Array::set($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$nc(array)->set(index, $($nc(handle->componentType)->cast(value)));
}

$Object* VarHandleReferences$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getReferenceVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase);
}

void VarHandleReferences$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceVolatile(array, var$0, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getReferenceOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase);
}

void VarHandleReferences$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceOpaque(array, var$0, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getReferenceAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase);
}

void VarHandleReferences$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceRelease(array, var$0, $(runtimeTypeCheck(handle, array, value)));
}

bool VarHandleReferences$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$1, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetReference(array, var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$1, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReference(array, var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$1, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceAcquire(array, var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$1, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceRelease(array, var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

bool VarHandleReferences$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$1, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferencePlain(array, var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

bool VarHandleReferences$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$1, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReference(array, var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

bool VarHandleReferences$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$1, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceAcquire(array, var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

bool VarHandleReferences$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$1, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceRelease(array, var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetReference(array, var$0, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceAcquire(array, var$0, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalObjectStack();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	int64_t var$0 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceRelease(array, var$0, $(runtimeTypeCheck(handle, array, value)));
}

void VarHandleReferences$Array::clinit$($Class* clazz) {
	$assignStatic(VarHandleReferences$Array::FORM, $new($VarForm, VarHandleReferences$Array::class$, $getClass($ObjectArray), $Object::class$, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleReferences$Array::VarHandleReferences$Array() {
}

$Class* VarHandleReferences$Array::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"abase", "I", nullptr, $FINAL, $field(VarHandleReferences$Array, abase)},
		{"ashift", "I", nullptr, $FINAL, $field(VarHandleReferences$Array, ashift)},
		{"arrayType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleReferences$Array, arrayType)},
		{"componentType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleReferences$Array, componentType)},
		{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleReferences$Array, FORM)},
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
	$CompoundAttribute getmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getAcquiremethodAnnotations$$[] = {
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
	$CompoundAttribute getOpaquemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute getVolatilemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute reflectiveTypeCheckmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
		{}
	};
	$CompoundAttribute runtimeTypeCheckmethodAnnotations$$[] = {
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
		{"<init>", "(IILjava/lang/Class;)V", "(IILjava/lang/Class<*>;)V", 0, $method(VarHandleReferences$Array, init$, void, int32_t, int32_t, $Class*)},
		{"<init>", "(IILjava/lang/Class;Z)V", "(IILjava/lang/Class<*>;Z)V", $PRIVATE, $method(VarHandleReferences$Array, init$, void, int32_t, int32_t, $Class*, bool)},
		{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $virtualMethod(VarHandleReferences$Array, accessModeTypeUncached, $MethodType*, $VarHandle$AccessType*)},
		{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, compareAndExchange, $Object*, $VarHandle*, Object$*, int32_t, Object$*, Object$*), nullptr, nullptr, compareAndExchangemethodAnnotations$$},
		{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, compareAndExchangeAcquire, $Object*, $VarHandle*, Object$*, int32_t, Object$*, Object$*), nullptr, nullptr, compareAndExchangeAcquiremethodAnnotations$$},
		{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, compareAndExchangeRelease, $Object*, $VarHandle*, Object$*, int32_t, Object$*, Object$*), nullptr, nullptr, compareAndExchangeReleasemethodAnnotations$$},
		{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, compareAndSet, bool, $VarHandle*, Object$*, int32_t, Object$*, Object$*), nullptr, nullptr, compareAndSetmethodAnnotations$$},
		{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC, $virtualMethod(VarHandleReferences$Array, describeConstable, $Optional*)},
		{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, get, $Object*, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getmethodAnnotations$$},
		{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, getAcquire, $Object*, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getAcquiremethodAnnotations$$},
		{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, getAndSet, $Object*, $VarHandle*, Object$*, int32_t, Object$*), nullptr, nullptr, getAndSetmethodAnnotations$$},
		{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, getAndSetAcquire, $Object*, $VarHandle*, Object$*, int32_t, Object$*), nullptr, nullptr, getAndSetAcquiremethodAnnotations$$},
		{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, getAndSetRelease, $Object*, $VarHandle*, Object$*, int32_t, Object$*), nullptr, nullptr, getAndSetReleasemethodAnnotations$$},
		{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, getOpaque, $Object*, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getOpaquemethodAnnotations$$},
		{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, getVolatile, $Object*, $VarHandle*, Object$*, int32_t), nullptr, nullptr, getVolatilemethodAnnotations$$},
		{"reflectiveTypeCheck", "([Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, reflectiveTypeCheck, $Object*, $ObjectArray*, Object$*), nullptr, nullptr, reflectiveTypeCheckmethodAnnotations$$},
		{"runtimeTypeCheck", "(Ljava/lang/invoke/VarHandleReferences$Array;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, runtimeTypeCheck, $Object*, VarHandleReferences$Array*, $ObjectArray*, Object$*), nullptr, nullptr, runtimeTypeCheckmethodAnnotations$$},
		{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, set, void, $VarHandle*, Object$*, int32_t, Object$*), nullptr, nullptr, setmethodAnnotations$$},
		{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, setOpaque, void, $VarHandle*, Object$*, int32_t, Object$*), nullptr, nullptr, setOpaquemethodAnnotations$$},
		{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, setRelease, void, $VarHandle*, Object$*, int32_t, Object$*), nullptr, nullptr, setReleasemethodAnnotations$$},
		{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, setVolatile, void, $VarHandle*, Object$*, int32_t, Object$*), nullptr, nullptr, setVolatilemethodAnnotations$$},
		{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, weakCompareAndSet, bool, $VarHandle*, Object$*, int32_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetmethodAnnotations$$},
		{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, weakCompareAndSetAcquire, bool, $VarHandle*, Object$*, int32_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetAcquiremethodAnnotations$$},
		{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, weakCompareAndSetPlain, bool, $VarHandle*, Object$*, int32_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetPlainmethodAnnotations$$},
		{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(VarHandleReferences$Array, weakCompareAndSetRelease, bool, $VarHandle*, Object$*, int32_t, Object$*, Object$*), nullptr, nullptr, weakCompareAndSetReleasemethodAnnotations$$},
		{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleReferences$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleReferences$Array, withInvokeBehavior, VarHandleReferences$Array*)},
		{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleReferences$Array;", nullptr, $PUBLIC, $virtualMethod(VarHandleReferences$Array, withInvokeExactBehavior, VarHandleReferences$Array*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandleReferences$Array", "java.lang.invoke.VarHandleReferences", "Array", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.VarHandleReferences$Array",
		"java.lang.invoke.VarHandle",
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
	$loadClass(VarHandleReferences$Array, name, initialize, &classInfo$$, VarHandleReferences$Array::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandleReferences$Array);
	});
	return class$;
}

$Class* VarHandleReferences$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java