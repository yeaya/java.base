#include <java/lang/invoke/VarHandleInts$Array.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
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
#include <java/lang/invoke/VarHandleInts.h>
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
using $VarHandleInts = ::java::lang::invoke::VarHandleInts;
using $Optional = ::java::util::Optional;
using $BiFunction = ::java::util::function::BiFunction;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndAddRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndBitwiseAnd13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndBitwiseAndAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndBitwiseAndRelease15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndBitwiseOr16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndBitwiseOrAcquire17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndBitwiseOrRelease18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndBitwiseXor19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndBitwiseXorAcquire20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndBitwiseXorRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getAndSetRelease24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getOpaque25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_getVolatile26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_set27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_setOpaque28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_setRelease29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_setVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_weakCompareAndSet31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_weakCompareAndSetAcquire32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_weakCompareAndSetPlain33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleInts$Array_MethodAnnotations_weakCompareAndSetRelease34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleInts$Array_FieldInfo_[] = {
	{"abase", "I", nullptr, $FINAL, $field(VarHandleInts$Array, abase)},
	{"ashift", "I", nullptr, $FINAL, $field(VarHandleInts$Array, ashift)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleInts$Array, FORM)},
	{}
};

$MethodInfo _VarHandleInts$Array_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(VarHandleInts$Array::*)(int32_t,int32_t)>(&VarHandleInts$Array::init$))},
	{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleInts$Array::*)(int32_t,int32_t,bool)>(&VarHandleInts$Array::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleInts$Array::compareAndExchange)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleInts$Array::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleInts$Array::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleInts$Array::compareAndSet)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_compareAndSet6},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$Array::get)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$Array::getAcquire)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndAdd)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndAddAcquire)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndAddRelease)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndAddRelease12},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndBitwiseAnd13},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndBitwiseAndAcquire14},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndBitwiseAndRelease15},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndBitwiseOr)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndBitwiseOr16},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndBitwiseOrAcquire17},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndBitwiseOrRelease18},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndBitwiseXor)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndBitwiseXor19},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndBitwiseXorAcquire20},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndBitwiseXorRelease21},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndSet)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndSet22},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndSetAcquire)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndSetAcquire23},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::getAndSetRelease)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getAndSetRelease24},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$Array::getOpaque)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getOpaque25},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleInts$Array::getVolatile)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_getVolatile26},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::set)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_set27},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::setOpaque)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_setOpaque28},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::setRelease)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_setRelease29},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;II)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int32_t)>(&VarHandleInts$Array::setVolatile)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_setVolatile30},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleInts$Array::weakCompareAndSet)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_weakCompareAndSet31},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleInts$Array::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_weakCompareAndSetAcquire32},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleInts$Array::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_weakCompareAndSetPlain33},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;III)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int32_t,int32_t)>(&VarHandleInts$Array::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleInts$Array_MethodAnnotations_weakCompareAndSetRelease34},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleInts$Array;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleInts$Array;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleInts$Array_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleInts$Array", "java.lang.invoke.VarHandleInts", "Array", $STATIC | $FINAL},
	{}
};

$ClassInfo _VarHandleInts$Array_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleInts$Array",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleInts$Array_FieldInfo_,
	_VarHandleInts$Array_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleInts$Array_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleInts"
};

$Object* allocate$VarHandleInts$Array($Class* clazz) {
	return $of($alloc(VarHandleInts$Array));
}

$VarForm* VarHandleInts$Array::FORM = nullptr;

void VarHandleInts$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleInts$Array::init$(abase, ashift, false);
}

void VarHandleInts$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleInts$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleInts$Array* VarHandleInts$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleInts$Array, this->abase, this->ashift, true);
}

VarHandleInts$Array* VarHandleInts$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleInts$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleInts$Array::describeConstable() {
	$load($ints);
	$var($Optional, arrayTypeRef, $getClass($ints)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($cast($ClassDesc, $($nc(arrayTypeRef)->get())))));
}

$MethodType* VarHandleInts$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($ints);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($ints), $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int32_t VarHandleInts$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	return $nc(array)->get(index);
}

void VarHandleInts$Array::set($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$nc(array)->set(index, value);
}

int32_t VarHandleInts$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getIntVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleInts$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putIntVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getIntOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleInts$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putIntOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleInts$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleInts$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int32_t VarHandleInts$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int32_t VarHandleInts$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int32_t VarHandleInts$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleInts$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntPlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleInts$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleInts$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleInts$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t expected, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int32_t VarHandleInts$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorInt(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int32_t VarHandleInts$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, int32_t value) {
	$init(VarHandleInts$Array);
	$var(VarHandleInts$Array, handle, $cast(VarHandleInts$Array, ob));
	$var($ints, array, $cast($ints, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorIntAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

void clinit$VarHandleInts$Array($Class* class$) {
	$load($ints);
	$init($Integer);
	$assignStatic(VarHandleInts$Array::FORM, $new($VarForm, VarHandleInts$Array::class$, $getClass($ints), $Integer::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleInts$Array::VarHandleInts$Array() {
}

$Class* VarHandleInts$Array::load$($String* name, bool initialize) {
	$loadClass(VarHandleInts$Array, name, initialize, &_VarHandleInts$Array_ClassInfo_, clinit$VarHandleInts$Array, allocate$VarHandleInts$Array);
	return class$;
}

$Class* VarHandleInts$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java