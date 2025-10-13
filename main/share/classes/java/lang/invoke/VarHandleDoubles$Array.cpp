#include <java/lang/invoke/VarHandleDoubles$Array.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleDoubles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef AIOOBE_SUPPLIER
#undef FORM
#undef TYPE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
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
using $VarHandleDoubles = ::java::lang::invoke::VarHandleDoubles;
using $Optional = ::java::util::Optional;
using $BiFunction = ::java::util::function::BiFunction;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_getAndAddRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_getAndSet13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_getAndSetAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_getAndSetRelease15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_getOpaque16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_getVolatile17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_set18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_setOpaque19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_setRelease20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_setVolatile21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_weakCompareAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_weakCompareAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_weakCompareAndSetPlain24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleDoubles$Array_MethodAnnotations_weakCompareAndSetRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleDoubles$Array_FieldInfo_[] = {
	{"abase", "I", nullptr, $FINAL, $field(VarHandleDoubles$Array, abase)},
	{"ashift", "I", nullptr, $FINAL, $field(VarHandleDoubles$Array, ashift)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleDoubles$Array, FORM)},
	{}
};

$MethodInfo _VarHandleDoubles$Array_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(VarHandleDoubles$Array::*)(int32_t,int32_t)>(&VarHandleDoubles$Array::init$))},
	{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleDoubles$Array::*)(int32_t,int32_t,bool)>(&VarHandleDoubles$Array::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleDoubles$Array::compareAndExchange)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleDoubles$Array::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleDoubles$Array::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleDoubles$Array::compareAndSet)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_compareAndSet6},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t)>(&VarHandleDoubles$Array::get)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t)>(&VarHandleDoubles$Array::getAcquire)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleDoubles$Array::getAndAdd)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleDoubles$Array::getAndAddAcquire)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleDoubles$Array::getAndAddRelease)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_getAndAddRelease12},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleDoubles$Array::getAndSet)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_getAndSet13},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleDoubles$Array::getAndSetAcquire)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_getAndSetAcquire14},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleDoubles$Array::getAndSetRelease)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_getAndSetRelease15},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t)>(&VarHandleDoubles$Array::getOpaque)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_getOpaque16},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)D", nullptr, $STATIC, $method(static_cast<double(*)($VarHandle*,Object$*,int32_t)>(&VarHandleDoubles$Array::getVolatile)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_getVolatile17},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleDoubles$Array::set)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_set18},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleDoubles$Array::setOpaque)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_setOpaque19},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleDoubles$Array::setRelease)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_setRelease20},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ID)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,double)>(&VarHandleDoubles$Array::setVolatile)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_setVolatile21},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleDoubles$Array::weakCompareAndSet)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_weakCompareAndSet22},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleDoubles$Array::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_weakCompareAndSetAcquire23},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleDoubles$Array::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_weakCompareAndSetPlain24},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IDD)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,double,double)>(&VarHandleDoubles$Array::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleDoubles$Array_MethodAnnotations_weakCompareAndSetRelease25},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleDoubles$Array;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleDoubles$Array;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleDoubles$Array_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleDoubles$Array", "java.lang.invoke.VarHandleDoubles", "Array", $STATIC | $FINAL},
	{}
};

$ClassInfo _VarHandleDoubles$Array_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleDoubles$Array",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleDoubles$Array_FieldInfo_,
	_VarHandleDoubles$Array_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleDoubles$Array_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleDoubles"
};

$Object* allocate$VarHandleDoubles$Array($Class* clazz) {
	return $of($alloc(VarHandleDoubles$Array));
}

$VarForm* VarHandleDoubles$Array::FORM = nullptr;

void VarHandleDoubles$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleDoubles$Array::init$(abase, ashift, false);
}

void VarHandleDoubles$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleDoubles$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleDoubles$Array* VarHandleDoubles$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$Array, this->abase, this->ashift, true);
}

VarHandleDoubles$Array* VarHandleDoubles$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleDoubles$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleDoubles$Array::describeConstable() {
	$load($doubles);
	$var($Optional, arrayTypeRef, $getClass($doubles)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($cast($ClassDesc, $($nc(arrayTypeRef)->get())))));
}

$MethodType* VarHandleDoubles$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($doubles);
	$init($Double);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($doubles), $Double::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

double VarHandleDoubles$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	return $nc(array)->get(index);
}

void VarHandleDoubles$Array::set($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$nc(array)->set(index, value);
}

double VarHandleDoubles$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleDoubles$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

double VarHandleDoubles$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleDoubles$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

double VarHandleDoubles$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getDoubleAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleDoubles$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putDoubleRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleDoubles$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetDouble(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

double VarHandleDoubles$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDouble(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

double VarHandleDoubles$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

double VarHandleDoubles$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeDoubleRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleDoubles$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoublePlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleDoubles$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDouble(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleDoubles$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleDoubles$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, double expected, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetDoubleRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

double VarHandleDoubles$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDouble(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

double VarHandleDoubles$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

double VarHandleDoubles$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetDoubleRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

double VarHandleDoubles$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDouble(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

double VarHandleDoubles$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

double VarHandleDoubles$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, double value) {
	$init(VarHandleDoubles$Array);
	$var(VarHandleDoubles$Array, handle, $cast(VarHandleDoubles$Array, ob));
	$var($doubles, array, $cast($doubles, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddDoubleRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

void clinit$VarHandleDoubles$Array($Class* class$) {
	$load($doubles);
	$init($Double);
	$init($Integer);
	$assignStatic(VarHandleDoubles$Array::FORM, $new($VarForm, VarHandleDoubles$Array::class$, $getClass($doubles), $Double::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleDoubles$Array::VarHandleDoubles$Array() {
}

$Class* VarHandleDoubles$Array::load$($String* name, bool initialize) {
	$loadClass(VarHandleDoubles$Array, name, initialize, &_VarHandleDoubles$Array_ClassInfo_, clinit$VarHandleDoubles$Array, allocate$VarHandleDoubles$Array);
	return class$;
}

$Class* VarHandleDoubles$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java