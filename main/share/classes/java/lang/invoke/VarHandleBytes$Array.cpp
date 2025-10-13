#include <java/lang/invoke/VarHandleBytes$Array.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
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
#include <java/lang/invoke/VarHandleBytes.h>
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

using $Byte = ::java::lang::Byte;
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
using $VarHandleBytes = ::java::lang::invoke::VarHandleBytes;
using $Optional = ::java::util::Optional;
using $BiFunction = ::java::util::function::BiFunction;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndAddRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseAnd13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseAndAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseAndRelease15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseOr16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseOrAcquire17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseOrRelease18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseXor19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseXorAcquire20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseXorRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getAndSetRelease24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getOpaque25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_getVolatile26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_set27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_setOpaque28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_setRelease29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_setVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_weakCompareAndSet31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_weakCompareAndSetAcquire32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_weakCompareAndSetPlain33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleBytes$Array_MethodAnnotations_weakCompareAndSetRelease34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleBytes$Array_FieldInfo_[] = {
	{"abase", "I", nullptr, $FINAL, $field(VarHandleBytes$Array, abase)},
	{"ashift", "I", nullptr, $FINAL, $field(VarHandleBytes$Array, ashift)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleBytes$Array, FORM)},
	{}
};

$MethodInfo _VarHandleBytes$Array_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(VarHandleBytes$Array::*)(int32_t,int32_t)>(&VarHandleBytes$Array::init$))},
	{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleBytes$Array::*)(int32_t,int32_t,bool)>(&VarHandleBytes$Array::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t,int8_t)>(&VarHandleBytes$Array::compareAndExchange)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t,int8_t)>(&VarHandleBytes$Array::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t,int8_t)>(&VarHandleBytes$Array::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int8_t,int8_t)>(&VarHandleBytes$Array::compareAndSet)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_compareAndSet6},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleBytes$Array::get)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleBytes$Array::getAcquire)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndAdd)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndAddAcquire)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndAddRelease)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndAddRelease12},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseAnd13},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseAndAcquire14},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseAndRelease15},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndBitwiseOr)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseOr16},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseOrAcquire17},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseOrRelease18},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndBitwiseXor)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseXor19},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseXorAcquire20},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndBitwiseXorRelease21},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndSet)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndSet22},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndSetAcquire)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndSetAcquire23},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::getAndSetRelease)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getAndSetRelease24},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleBytes$Array::getOpaque)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getOpaque25},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)B", nullptr, $STATIC, $method(static_cast<int8_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleBytes$Array::getVolatile)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_getVolatile26},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::set)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_set27},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::setOpaque)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_setOpaque28},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::setRelease)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_setRelease29},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IB)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,int8_t)>(&VarHandleBytes$Array::setVolatile)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_setVolatile30},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int8_t,int8_t)>(&VarHandleBytes$Array::weakCompareAndSet)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_weakCompareAndSet31},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int8_t,int8_t)>(&VarHandleBytes$Array::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_weakCompareAndSetAcquire32},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int8_t,int8_t)>(&VarHandleBytes$Array::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_weakCompareAndSetPlain33},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IBB)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,int8_t,int8_t)>(&VarHandleBytes$Array::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleBytes$Array_MethodAnnotations_weakCompareAndSetRelease34},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleBytes$Array;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleBytes$Array;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleBytes$Array_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleBytes$Array", "java.lang.invoke.VarHandleBytes", "Array", $STATIC | $FINAL},
	{}
};

$ClassInfo _VarHandleBytes$Array_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleBytes$Array",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleBytes$Array_FieldInfo_,
	_VarHandleBytes$Array_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleBytes$Array_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleBytes"
};

$Object* allocate$VarHandleBytes$Array($Class* clazz) {
	return $of($alloc(VarHandleBytes$Array));
}

$VarForm* VarHandleBytes$Array::FORM = nullptr;

void VarHandleBytes$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleBytes$Array::init$(abase, ashift, false);
}

void VarHandleBytes$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleBytes$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleBytes$Array* VarHandleBytes$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleBytes$Array, this->abase, this->ashift, true);
}

VarHandleBytes$Array* VarHandleBytes$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleBytes$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleBytes$Array::describeConstable() {
	$load($bytes);
	$var($Optional, arrayTypeRef, $getClass($bytes)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($cast($ClassDesc, $($nc(arrayTypeRef)->get())))));
}

$MethodType* VarHandleBytes$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($bytes);
	$init($Byte);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($bytes), $Byte::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

int8_t VarHandleBytes$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	return $nc(array)->get(index);
}

void VarHandleBytes$Array::set($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$nc(array)->set(index, value);
}

int8_t VarHandleBytes$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getByteVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleBytes$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putByteVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getByteOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleBytes$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putByteOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleBytes$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleBytes$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int8_t VarHandleBytes$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int8_t VarHandleBytes$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int8_t VarHandleBytes$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBytes$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetBytePlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBytes$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBytes$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleBytes$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t expected, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

int8_t VarHandleBytes$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByte(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

int8_t VarHandleBytes$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, int8_t value) {
	$init(VarHandleBytes$Array);
	$var(VarHandleBytes$Array, handle, $cast(VarHandleBytes$Array, ob));
	$var($bytes, array, $cast($bytes, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorByteAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

void clinit$VarHandleBytes$Array($Class* class$) {
	$load($bytes);
	$init($Byte);
	$init($Integer);
	$assignStatic(VarHandleBytes$Array::FORM, $new($VarForm, VarHandleBytes$Array::class$, $getClass($bytes), $Byte::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleBytes$Array::VarHandleBytes$Array() {
}

$Class* VarHandleBytes$Array::load$($String* name, bool initialize) {
	$loadClass(VarHandleBytes$Array, name, initialize, &_VarHandleBytes$Array_ClassInfo_, clinit$VarHandleBytes$Array, allocate$VarHandleBytes$Array);
	return class$;
}

$Class* VarHandleBytes$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java