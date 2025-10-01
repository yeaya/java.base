#include <java/lang/invoke/VarHandleShorts$Array.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleShorts.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#undef FORM
#undef UNSAFE
#undef TYPE
#undef AIOOBE_SUPPLIER

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$VarHandleDesc = ::java::lang::invoke::VarHandle$VarHandleDesc;
using $VarHandleShorts = ::java::lang::invoke::VarHandleShorts;
using $Optional = ::java::util::Optional;
using $BiFunction = ::java::util::function::BiFunction;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndAddRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseAnd13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseAndAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseAndRelease15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseOr16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseOrAcquire17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseOrRelease18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseXor19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseXorAcquire20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseXorRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getAndSetRelease24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getOpaque25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_getVolatile26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_set27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_setOpaque28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_setRelease29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_setVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_weakCompareAndSet31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_weakCompareAndSetAcquire32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_weakCompareAndSetPlain33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleShorts$Array_MethodAnnotations_weakCompareAndSetRelease34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleShorts$Array_FieldInfo_[] = {
	{"abase", "I", nullptr, $FINAL, $field(VarHandleShorts$Array, abase)},
	{"ashift", "I", nullptr, $FINAL, $field(VarHandleShorts$Array, ashift)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleShorts$Array, FORM)},
	{}
};

$MethodInfo _VarHandleShorts$Array_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(VarHandleShorts$Array::*)(int32_t,int32_t)>(&VarHandleShorts$Array::init$))},
	{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleShorts$Array::*)(int32_t,int32_t,bool)>(&VarHandleShorts$Array::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t,int16_t)>(&VarHandleShorts$Array::compareAndExchange)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t,int16_t)>(&VarHandleShorts$Array::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t,int16_t)>(&VarHandleShorts$Array::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int16_t,int16_t)>(&VarHandleShorts$Array::compareAndSet)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_compareAndSet6},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleShorts$Array::get)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleShorts$Array::getAcquire)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndAdd)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndAddAcquire)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndAddRelease)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndAddRelease12},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseAnd13},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseAndAcquire14},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseAndRelease15},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndBitwiseOr)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseOr16},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseOrAcquire17},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseOrRelease18},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndBitwiseXor)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseXor19},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseXorAcquire20},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndBitwiseXorRelease21},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndSet)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndSet22},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndSetAcquire)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndSetAcquire23},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::getAndSetRelease)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getAndSetRelease24},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleShorts$Array::getOpaque)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getOpaque25},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleShorts$Array::getVolatile)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_getVolatile26},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::set)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_set27},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::setOpaque)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_setOpaque28},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::setRelease)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_setRelease29},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IS)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int16_t)>(&VarHandleShorts$Array::setVolatile)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_setVolatile30},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int16_t,int16_t)>(&VarHandleShorts$Array::weakCompareAndSet)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_weakCompareAndSet31},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int16_t,int16_t)>(&VarHandleShorts$Array::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_weakCompareAndSetAcquire32},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int16_t,int16_t)>(&VarHandleShorts$Array::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_weakCompareAndSetPlain33},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ISS)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int16_t,int16_t)>(&VarHandleShorts$Array::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleShorts$Array_MethodAnnotations_weakCompareAndSetRelease34},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleShorts$Array;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleShorts$Array;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleShorts$Array_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleShorts$Array", "java.lang.invoke.VarHandleShorts", "Array", $STATIC | $FINAL},
	{}
};

$ClassInfo _VarHandleShorts$Array_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleShorts$Array",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleShorts$Array_FieldInfo_,
	_VarHandleShorts$Array_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleShorts$Array_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleShorts"
};

$Object* allocate$VarHandleShorts$Array($Class* clazz) {
	return $of($alloc(VarHandleShorts$Array));
}

$VarForm* VarHandleShorts$Array::FORM = nullptr;

void VarHandleShorts$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleShorts$Array::init$(abase, ashift, false);
}

void VarHandleShorts$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleShorts$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleShorts$Array* VarHandleShorts$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleShorts$Array, this->abase, this->ashift, true);
}

VarHandleShorts$Array* VarHandleShorts$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleShorts$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleShorts$Array::describeConstable() {
	$load($shorts);
	$var($Optional, arrayTypeRef, $getClass($shorts)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($cast($ClassDesc, $($nc(arrayTypeRef)->get())))));
}

$MethodType* VarHandleShorts$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($shorts);
	$init($Short);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($shorts), $Short::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int16_t VarHandleShorts$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	return $nc(array)->get(index);
}

void VarHandleShorts$Array::set($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$nc(array)->set(index, value);
}

int16_t VarHandleShorts$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getShortVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleShorts$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putShortVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getShortOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleShorts$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putShortOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleShorts$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleShorts$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int16_t VarHandleShorts$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int16_t VarHandleShorts$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int16_t VarHandleShorts$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleShorts$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortPlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleShorts$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleShorts$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleShorts$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t expected, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int16_t VarHandleShorts$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShort(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int16_t VarHandleShorts$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, int16_t value) {
	$init(VarHandleShorts$Array);
	$var(VarHandleShorts$Array, handle, $cast(VarHandleShorts$Array, ob));
	$var($shorts, array, $cast($shorts, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorShortAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

void clinit$VarHandleShorts$Array($Class* class$) {
	$load($shorts);
	$init($Short);
	$init($Integer);
	$assignStatic(VarHandleShorts$Array::FORM, $new($VarForm, VarHandleShorts$Array::class$, $getClass($shorts), $Short::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleShorts$Array::VarHandleShorts$Array() {
}

$Class* VarHandleShorts$Array::load$($String* name, bool initialize) {
	$loadClass(VarHandleShorts$Array, name, initialize, &_VarHandleShorts$Array_ClassInfo_, clinit$VarHandleShorts$Array, allocate$VarHandleShorts$Array);
	return class$;
}

$Class* VarHandleShorts$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java