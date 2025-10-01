#include <java/lang/invoke/VarHandleLongs$Array.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$VarHandleDesc.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandleLongs.h>
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
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$VarHandleDesc = ::java::lang::invoke::VarHandle$VarHandleDesc;
using $VarHandleLongs = ::java::lang::invoke::VarHandleLongs;
using $Optional = ::java::util::Optional;
using $BiFunction = ::java::util::function::BiFunction;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndAddRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseAnd13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseAndAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseAndRelease15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseOr16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseOrAcquire17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseOrRelease18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseXor19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseXorAcquire20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseXorRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getAndSetRelease24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getOpaque25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_getVolatile26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_set27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_setOpaque28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_setRelease29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_setVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_weakCompareAndSet31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_weakCompareAndSetAcquire32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_weakCompareAndSetPlain33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleLongs$Array_MethodAnnotations_weakCompareAndSetRelease34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleLongs$Array_FieldInfo_[] = {
	{"abase", "I", nullptr, $FINAL, $field(VarHandleLongs$Array, abase)},
	{"ashift", "I", nullptr, $FINAL, $field(VarHandleLongs$Array, ashift)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleLongs$Array, FORM)},
	{}
};

$MethodInfo _VarHandleLongs$Array_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(VarHandleLongs$Array::*)(int32_t,int32_t)>(&VarHandleLongs$Array::init$))},
	{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleLongs$Array::*)(int32_t,int32_t,bool)>(&VarHandleLongs$Array::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleLongs$Array::compareAndExchange)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleLongs$Array::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleLongs$Array::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleLongs$Array::compareAndSet)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_compareAndSet6},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleLongs$Array::get)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleLongs$Array::getAcquire)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndAdd)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndAddAcquire)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndAddRelease)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndAddRelease12},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseAnd13},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseAndAcquire14},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseAndRelease15},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndBitwiseOr)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseOr16},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseOrAcquire17},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseOrRelease18},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndBitwiseXor)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseXor19},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseXorAcquire20},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndBitwiseXorRelease21},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndSet)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndSet22},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndSetAcquire)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndSetAcquire23},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::getAndSetRelease)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getAndSetRelease24},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleLongs$Array::getOpaque)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getOpaque25},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleLongs$Array::getVolatile)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_getVolatile26},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::set)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_set27},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::setOpaque)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_setOpaque28},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::setRelease)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_setRelease29},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int64_t)>(&VarHandleLongs$Array::setVolatile)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_setVolatile30},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleLongs$Array::weakCompareAndSet)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_weakCompareAndSet31},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleLongs$Array::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_weakCompareAndSetAcquire32},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleLongs$Array::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_weakCompareAndSetPlain33},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IJJ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int64_t,int64_t)>(&VarHandleLongs$Array::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleLongs$Array_MethodAnnotations_weakCompareAndSetRelease34},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleLongs$Array;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleLongs$Array;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleLongs$Array_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleLongs$Array", "java.lang.invoke.VarHandleLongs", "Array", $STATIC | $FINAL},
	{}
};

$ClassInfo _VarHandleLongs$Array_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleLongs$Array",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleLongs$Array_FieldInfo_,
	_VarHandleLongs$Array_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleLongs$Array_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleLongs"
};

$Object* allocate$VarHandleLongs$Array($Class* clazz) {
	return $of($alloc(VarHandleLongs$Array));
}

$VarForm* VarHandleLongs$Array::FORM = nullptr;

void VarHandleLongs$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleLongs$Array::init$(abase, ashift, false);
}

void VarHandleLongs$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleLongs$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleLongs$Array* VarHandleLongs$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleLongs$Array, this->abase, this->ashift, true);
}

VarHandleLongs$Array* VarHandleLongs$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleLongs$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleLongs$Array::describeConstable() {
	$load($longs);
	$var($Optional, arrayTypeRef, $getClass($longs)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($cast($ClassDesc, $($nc(arrayTypeRef)->get())))));
}

$MethodType* VarHandleLongs$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($longs);
	$init($Long);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($longs), $Long::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int64_t VarHandleLongs$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	return $nc(array)->get(index);
}

void VarHandleLongs$Array::set($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$nc(array)->set(index, value);
}

int64_t VarHandleLongs$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getLongVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleLongs$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putLongVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getLongOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleLongs$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putLongOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleLongs$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleLongs$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int64_t VarHandleLongs$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int64_t VarHandleLongs$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int64_t VarHandleLongs$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleLongs$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongPlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleLongs$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleLongs$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleLongs$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t expected, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int64_t VarHandleLongs$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLong(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int64_t VarHandleLongs$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, int64_t value) {
	$init(VarHandleLongs$Array);
	$var(VarHandleLongs$Array, handle, $cast(VarHandleLongs$Array, ob));
	$var($longs, array, $cast($longs, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorLongAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

void clinit$VarHandleLongs$Array($Class* class$) {
	$load($longs);
	$init($Long);
	$init($Integer);
	$assignStatic(VarHandleLongs$Array::FORM, $new($VarForm, VarHandleLongs$Array::class$, $getClass($longs), $Long::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleLongs$Array::VarHandleLongs$Array() {
}

$Class* VarHandleLongs$Array::load$($String* name, bool initialize) {
	$loadClass(VarHandleLongs$Array, name, initialize, &_VarHandleLongs$Array_ClassInfo_, clinit$VarHandleLongs$Array, allocate$VarHandleLongs$Array);
	return class$;
}

$Class* VarHandleLongs$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java