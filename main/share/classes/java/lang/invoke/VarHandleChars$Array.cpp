#include <java/lang/invoke/VarHandleChars$Array.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
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
#include <java/lang/invoke/VarHandleChars.h>
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

using $Character = ::java::lang::Character;
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
using $VarHandleChars = ::java::lang::invoke::VarHandleChars;
using $Optional = ::java::util::Optional;
using $BiFunction = ::java::util::function::BiFunction;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_compareAndExchange3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_compareAndExchangeAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_compareAndExchangeRelease5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_compareAndSet6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAcquire9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndAdd10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndAddAcquire11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndAddRelease12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndBitwiseAnd13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndBitwiseAndAcquire14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndBitwiseAndRelease15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndBitwiseOr16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndBitwiseOrAcquire17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndBitwiseOrRelease18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndBitwiseXor19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndBitwiseXorAcquire20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndBitwiseXorRelease21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndSet22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndSetAcquire23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getAndSetRelease24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getOpaque25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_getVolatile26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_set27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_setOpaque28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_setRelease29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_setVolatile30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_weakCompareAndSet31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_weakCompareAndSetAcquire32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_weakCompareAndSetPlain33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandleChars$Array_MethodAnnotations_weakCompareAndSetRelease34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _VarHandleChars$Array_FieldInfo_[] = {
	{"abase", "I", nullptr, $FINAL, $field(VarHandleChars$Array, abase)},
	{"ashift", "I", nullptr, $FINAL, $field(VarHandleChars$Array, ashift)},
	{"FORM", "Ljava/lang/invoke/VarForm;", nullptr, $STATIC | $FINAL, $staticField(VarHandleChars$Array, FORM)},
	{}
};

$MethodInfo _VarHandleChars$Array_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(VarHandleChars$Array::*)(int32_t,int32_t)>(&VarHandleChars$Array::init$))},
	{"<init>", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(VarHandleChars$Array::*)(int32_t,int32_t,bool)>(&VarHandleChars$Array::init$))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $FINAL},
	{"compareAndExchange", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t,char16_t)>(&VarHandleChars$Array::compareAndExchange)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_compareAndExchange3},
	{"compareAndExchangeAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t,char16_t)>(&VarHandleChars$Array::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_compareAndExchangeAcquire4},
	{"compareAndExchangeRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t,char16_t)>(&VarHandleChars$Array::compareAndExchangeRelease)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_compareAndExchangeRelease5},
	{"compareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,char16_t,char16_t)>(&VarHandleChars$Array::compareAndSet)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_compareAndSet6},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"get", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleChars$Array::get)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_get8},
	{"getAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleChars$Array::getAcquire)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAcquire9},
	{"getAndAdd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndAdd)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndAdd10},
	{"getAndAddAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndAddAcquire)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndAddAcquire11},
	{"getAndAddRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndAddRelease)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndAddRelease12},
	{"getAndBitwiseAnd", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndBitwiseAnd)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndBitwiseAnd13},
	{"getAndBitwiseAndAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndBitwiseAndAcquire14},
	{"getAndBitwiseAndRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndBitwiseAndRelease15},
	{"getAndBitwiseOr", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndBitwiseOr)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndBitwiseOr16},
	{"getAndBitwiseOrAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndBitwiseOrAcquire17},
	{"getAndBitwiseOrRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndBitwiseOrRelease18},
	{"getAndBitwiseXor", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndBitwiseXor)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndBitwiseXor19},
	{"getAndBitwiseXorAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndBitwiseXorAcquire20},
	{"getAndBitwiseXorRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndBitwiseXorRelease21},
	{"getAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndSet)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndSet22},
	{"getAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndSetAcquire)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndSetAcquire23},
	{"getAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::getAndSetRelease)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getAndSetRelease24},
	{"getOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleChars$Array::getOpaque)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getOpaque25},
	{"getVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;I)C", nullptr, $STATIC, $method(static_cast<char16_t(*)($VarHandle*,Object$*,int32_t)>(&VarHandleChars$Array::getVolatile)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_getVolatile26},
	{"set", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::set)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_set27},
	{"setOpaque", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::setOpaque)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_setOpaque28},
	{"setRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::setRelease)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_setRelease29},
	{"setVolatile", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;IC)V", nullptr, $STATIC, $method(static_cast<void(*)($VarHandle*,Object$*,int32_t,char16_t)>(&VarHandleChars$Array::setVolatile)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_setVolatile30},
	{"weakCompareAndSet", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,char16_t,char16_t)>(&VarHandleChars$Array::weakCompareAndSet)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_weakCompareAndSet31},
	{"weakCompareAndSetAcquire", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,char16_t,char16_t)>(&VarHandleChars$Array::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_weakCompareAndSetAcquire32},
	{"weakCompareAndSetPlain", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,char16_t,char16_t)>(&VarHandleChars$Array::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_weakCompareAndSetPlain33},
	{"weakCompareAndSetRelease", "(Ljava/lang/invoke/VarHandle;Ljava/lang/Object;ICC)Z", nullptr, $STATIC, $method(static_cast<bool(*)($VarHandle*,Object$*,int32_t,char16_t,char16_t)>(&VarHandleChars$Array::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandleChars$Array_MethodAnnotations_weakCompareAndSetRelease34},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandleChars$Array;", nullptr, $PUBLIC},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandleChars$Array;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VarHandleChars$Array_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandleChars$Array", "java.lang.invoke.VarHandleChars", "Array", $STATIC | $FINAL},
	{}
};

$ClassInfo _VarHandleChars$Array_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.VarHandleChars$Array",
	"java.lang.invoke.VarHandle",
	nullptr,
	_VarHandleChars$Array_FieldInfo_,
	_VarHandleChars$Array_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandleChars$Array_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandleChars"
};

$Object* allocate$VarHandleChars$Array($Class* clazz) {
	return $of($alloc(VarHandleChars$Array));
}

$VarForm* VarHandleChars$Array::FORM = nullptr;

void VarHandleChars$Array::init$(int32_t abase, int32_t ashift) {
	VarHandleChars$Array::init$(abase, ashift, false);
}

void VarHandleChars$Array::init$(int32_t abase, int32_t ashift, bool exact) {
	$VarHandle::init$(VarHandleChars$Array::FORM, exact);
	this->abase = abase;
	this->ashift = ashift;
}

VarHandleChars$Array* VarHandleChars$Array::withInvokeExactBehavior() {
	return hasInvokeExactBehavior() ? this : $new(VarHandleChars$Array, this->abase, this->ashift, true);
}

VarHandleChars$Array* VarHandleChars$Array::withInvokeBehavior() {
	return !hasInvokeExactBehavior() ? this : $new(VarHandleChars$Array, this->abase, this->ashift, false);
}

$Optional* VarHandleChars$Array::describeConstable() {
	$load($chars);
	$var($Optional, arrayTypeRef, $getClass($chars)->describeConstable());
	if (!$nc(arrayTypeRef)->isPresent()) {
		return $Optional::empty();
	}
	return $Optional::of($($VarHandle$VarHandleDesc::ofArray($cast($ClassDesc, $($nc(arrayTypeRef)->get())))));
}

$MethodType* VarHandleChars$Array::accessModeTypeUncached($VarHandle$AccessType* at) {
	$load($chars);
	$init($Character);
	$init($Integer);
	return $nc(at)->accessModeType($getClass($chars), $Character::TYPE, $$new($ClassArray, {$Integer::TYPE}));
}

char16_t VarHandleChars$Array::get($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	return $nc(array)->get(index);
}

void VarHandleChars$Array::set($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$nc(array)->set(index, value);
}

char16_t VarHandleChars$Array::getVolatile($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getCharVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleChars$Array::setVolatile($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putCharVolatile(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getOpaque($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getCharOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleChars$Array::setOpaque($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putCharOpaque(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAcquire($VarHandle* ob, Object$* oarray, int32_t index) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase);
}

void VarHandleChars$Array::setRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	$nc($MethodHandleStatics::UNSAFE)->putCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

bool VarHandleChars$Array::compareAndSet($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndSetChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

char16_t VarHandleChars$Array::compareAndExchange($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

char16_t VarHandleChars$Array::compareAndExchangeAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

char16_t VarHandleChars$Array::compareAndExchangeRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->compareAndExchangeCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleChars$Array::weakCompareAndSetPlain($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharPlain(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleChars$Array::weakCompareAndSet($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleChars$Array::weakCompareAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

bool VarHandleChars$Array::weakCompareAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t expected, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->weakCompareAndSetCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, expected, value);
}

char16_t VarHandleChars$Array::getAndSet($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndSetAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndSetRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndSetCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndAdd($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndAddAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndAddRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndAddCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseOr($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseOrRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseOrAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseOrCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseAnd($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseAndRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseAndAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseAndCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseXor($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorChar(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseXorRelease($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharRelease(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

char16_t VarHandleChars$Array::getAndBitwiseXorAcquire($VarHandle* ob, Object$* oarray, int32_t index, char16_t value) {
	$init(VarHandleChars$Array);
	$var(VarHandleChars$Array, handle, $cast(VarHandleChars$Array, ob));
	$var($chars, array, $cast($chars, oarray));
	$init($MethodHandleStatics);
	$init($VarHandle);
	return $nc($MethodHandleStatics::UNSAFE)->getAndBitwiseXorCharAcquire(array, ($sl((int64_t)$Preconditions::checkIndex(index, $nc(array)->length, $VarHandle::AIOOBE_SUPPLIER), $nc(handle)->ashift)) + handle->abase, value);
}

void clinit$VarHandleChars$Array($Class* class$) {
	$load($chars);
	$init($Character);
	$init($Integer);
	$assignStatic(VarHandleChars$Array::FORM, $new($VarForm, VarHandleChars$Array::class$, $getClass($chars), $Character::TYPE, $$new($ClassArray, {$Integer::TYPE})));
}

VarHandleChars$Array::VarHandleChars$Array() {
}

$Class* VarHandleChars$Array::load$($String* name, bool initialize) {
	$loadClass(VarHandleChars$Array, name, initialize, &_VarHandleChars$Array_ClassInfo_, clinit$VarHandleChars$Array, allocate$VarHandleChars$Array);
	return class$;
}

$Class* VarHandleChars$Array::class$ = nullptr;

		} // invoke
	} // lang
} // java