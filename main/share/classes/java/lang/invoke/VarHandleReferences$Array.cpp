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
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_getAndSet10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_getAndSetAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_getAndSetRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_getOpaque13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_getVolatile14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_reflectiveTypeCheck15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_runtimeTypeCheck16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_set17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_setOpaque18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_setRelease19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_setVolatile20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_weakCompareAndSet21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_weakCompareAndSetAcquire22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_weakCompareAndSetPlain23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleReferences$Array_MethodAnnotations_weakCompareAndSetRelease24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleReferences$Array_FieldInfo_[] = {
	{"abase", "I", nullptr, $FINAL, $field(VarHandleReferences$Array, abase)},
	{"ashift", "I", nullptr, $FINAL, $field(VarHandleReferences$Array, ashift)},
	{"arrayType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleReferences$Array, arrayType)},
	{"componentType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(VarHandleReferences$Array, componentType)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleReferences$Array, FORM)},
	{}
};

$MethodInfo _VarHandleReferences$Array_MethodInfo_[] = {
	{"<init>", "(IILjava/lang/Class;)V", "(IILjava/lang/Class<*>;)V", 0, $method(static_cast<void(VarHandleReferences$Array::*)(int32_t,int32_t,$Class*)>(&VarHandleReferences$Array::init$))},
	{"<init>", "(IILjava/lang/Class;Z)V", "(IILjava/lang/Class<*>;Z)V", $PRIVATE, $method(static_cast<void(VarHandleReferences$Array::*)(int32_t,int32_t,$Class*,bool)>(&VarHandleReferences$Array::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t,Object$*,Object$*)>(&VarHandleReferences$Array::compareAndExchange)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t,Object$*,Object$*)>(&VarHandleReferences$Array::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t,Object$*,Object$*)>(&VarHandleReferences$Array::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,Object$*,Object$*)>(&VarHandleReferences$Array::compareAndSet)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_compareAndSet6},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t)>(&VarHandleReferences$Array::get)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t)>(&VarHandleReferences$Array::getAcquire)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_getAcquire9},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t,Object$*)>(&VarHandleReferences$Array::getAndSet)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_getAndSet10},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t,Object$*)>(&VarHandleReferences$Array::getAndSetAcquire)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_getAndSetAcquire11},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t,Object$*)>(&VarHandleReferences$Array::getAndSetRelease)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_getAndSetRelease12},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t)>(&VarHandleReferences$Array::getOpaque)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_getOpaque13},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($VarHandle*,Object$*,int32_t)>(&VarHandleReferences$Array::getVolatile)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_getVolatile14},
	{"reflectiveTypeCheck", "([Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($ObjectArray*,Object$*)>(&VarHandleReferences$Array::reflectiveTypeCheck)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_reflectiveTypeCheck15},
	{"runtimeTypeCheck", "(Ljava/lang/invoke/VarHandleReferences$Array;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(VarHandleReferences$Array*,$ObjectArray*,Object$*)>(&VarHandleReferences$Array::runtimeTypeCheck)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_runtimeTypeCheck16},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,Object$*)>(&VarHandleReferences$Array::set)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_set17},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,Object$*)>(&VarHandleReferences$Array::setOpaque)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_setOpaque18},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,Object$*)>(&VarHandleReferences$Array::setRelease)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_setRelease19},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,Object$*)>(&VarHandleReferences$Array::setVolatile)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_setVolatile20},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,Object$*,Object$*)>(&VarHandleReferences$Array::weakCompareAndSet)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_weakCompareAndSet21},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,Object$*,Object$*)>(&VarHandleReferences$Array::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_weakCompareAndSetAcquire22},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,Object$*,Object$*)>(&VarHandleReferences$Array::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_weakCompareAndSetPlain23},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,Object$*,Object$*)>(&VarHandleReferences$Array::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleReferences$Array_MethodAnnotations_weakCompareAndSetRelease24},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleReferences$Array;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleReferences$Array;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleReferences$Array_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleReferences$Array", "java.lang.invoke.VarHandleReferences", "Array", $STATIC | $FINAL},
	{}
};

$ClassInfo _VarHandleReferences$Array_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleReferences$Array",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleReferences$Array_FieldInfo_,
	_VarHandleReferences$Array_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleReferences$Array_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleReferences"
};

$Object* allocate$VarHandleReferences$Array($Class* clazz) {
	return $of($alloc(VarHandleReferences$Array));
}

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
	$useLocalCurrentObjectStackCache();
	$var($Optional, arrayTypeRef, $nc(this->arrayType)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($cast($ClassDesc, $($nc(arrayTypeRef)->get())))));
}

$MethodType* VarHandleReferences$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	$init($Integer);
	return $nc(at)->accessModeType(this->arrayType, $nc(this->arrayType)->getComponentType(), $$new($ClassArray, {$Integer::TYPE}));
}

$Object* VarHandleReferences$Array::runtimeTypeCheck(VarHandleReferences$Array* handle, $ObjectArray* oarray, Object$* value) {
	$init(VarHandleReferences$Array);
	if ($nc(handle)->arrayType == $nc($of(oarray))->getClass()) {
		return $of($nc(handle->componentType)->cast(value));
	} else {
		return $of(reflectiveTypeCheck(oarray, value));
	}
}

$Object* VarHandleReferences$Array::reflectiveTypeCheck($ObjectArray* oarray, Object$* value) {
	$init(VarHandleReferences$Array);
	try {
		return $of($nc($nc($of(oarray))->getClass()->getComponentType())->cast(value));
	} catch ($ClassCastException& e) {
		$throwNew($ArrayStoreException);
	}
	$shouldNotReachHere();
}

$Object* VarHandleReferences$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	return $of($nc(array)->get(index));
}

void VarHandleReferences$Array::set($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$nc(array)->set(index, $($nc(handle->componentType)->cast(value)));
}

$Object* VarHandleReferences$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $of($nc($MethodHandleStatics::UNSAFE)->getReferenceVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase));
}

void VarHandleReferences$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceVolatile(var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $of($nc($MethodHandleStatics::UNSAFE)->getReferenceOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase));
}

void VarHandleReferences$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceOpaque(var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $of($nc($MethodHandleStatics::UNSAFE)->getReferenceAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase));
}

void VarHandleReferences$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$nc($MethodHandleStatics::UNSAFE)->putReferenceRelease(var$0, var$1, $(runtimeTypeCheck(handle, array, value)));
}

bool VarHandleReferences$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$2, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetReference(var$0, var$1, var$2, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$2, $nc(handle->componentType)->cast(expected));
	return $of($nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReference(var$0, var$1, var$2, $(runtimeTypeCheck(handle, array, value))));
}

$Object* VarHandleReferences$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$2, $nc(handle->componentType)->cast(expected));
	return $of($nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceAcquire(var$0, var$1, var$2, $(runtimeTypeCheck(handle, array, value))));
}

$Object* VarHandleReferences$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$2, $nc(handle->componentType)->cast(expected));
	return $of($nc($MethodHandleStatics::UNSAFE)->compareAndExchangeReferenceRelease(var$0, var$1, var$2, $(runtimeTypeCheck(handle, array, value))));
}

bool VarHandleReferences$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$2, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferencePlain(var$0, var$1, var$2, $(runtimeTypeCheck(handle, array, value)));
}

bool VarHandleReferences$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$2, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReference(var$0, var$1, var$2, $(runtimeTypeCheck(handle, array, value)));
}

bool VarHandleReferences$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$2, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceAcquire(var$0, var$1, var$2, $(runtimeTypeCheck(handle, array, value)));
}

bool VarHandleReferences$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	$var($Object, var$2, $nc(handle->componentType)->cast(expected));
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetReferenceRelease(var$0, var$1, var$2, $(runtimeTypeCheck(handle, array, value)));
}

$Object* VarHandleReferences$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	return $of($nc($MethodHandleStatics::UNSAFE)->getAndSetReference(var$0, var$1, $(runtimeTypeCheck(handle, array, value))));
}

$Object* VarHandleReferences$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	return $of($nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceAcquire(var$0, var$1, $(runtimeTypeCheck(handle, array, value))));
}

$Object* VarHandleReferences$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, Object$* value) {
	$init(VarHandleReferences$Array);
	$useLocalCurrentObjectStackCache();
	$var(VarHandleReferences$Array, handle, $cast(VarHandleReferences$Array, ob));
	$var($ObjectArray, array, $cast($ObjectArray, $nc($nc(handle)->arrayType)->cast(oarray)));
	$init($MethodHandleStatics);
	$var($Object, var$0, $of(array));
	$init($VarHandle);
	int64_t var$1 = ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), handle->ashift)) + handle->abase;
	return $of($nc($MethodHandleStatics::UNSAFE)->getAndSetReferenceRelease(var$0, var$1, $(runtimeTypeCheck(handle, array, value))));
}

void clinit$VarHandleReferences$Array($Class* class$) {
	$load($ObjectArray);
	$init($Integer);
	$assignStatic(VarHandleReferences$Array::FORM, $new($VarForm, VarHandleReferences$Array::class$, $getClass($ObjectArray), $Object::class$, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleReferences$Array::VarHandleReferences$Array() {
}

$Class* VarHandleReferences$Array::load$($String* name, bool initialize) {
	$loadClass(VarHandleReferences$Array, name, initialize, &_VarHandleReferences$Array_ClassInfo_, clinit$VarHandleReferences$Array, allocate$VarHandleReferences$Array);
	return class$;
}

$Class* VarHandleReferences$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java