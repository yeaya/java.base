#include <java/lang/invoke/VarHandle.h>

#include <java/lang/AssertionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/DirectMethodHandle.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/invoke/VarForm.h>
#include <java/lang/invoke/VarHandle$1.h>
#include <java/lang/invoke/VarHandle$AccessDescriptor.h>
#include <java/lang/invoke/VarHandle$AccessMode.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle$TypesAndInvokers.h>
#include <java/lang/invoke/VarHandleGuards.h>
#include <java/lang/invoke/WrongMethodTypeException.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/Preconditions.h>
#include <jcpp.h>

#include "_java_lang_invoke_VarHandle.h"

#undef AIOOBE_SUPPLIER
#undef GET
#undef SET
#undef UNSAFE
#undef VFORM_OFFSET

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $VarHandle$AccessModeArray = $Array<::java::lang::invoke::VarHandle$AccessMode>;
using $VarHandle$AccessTypeArray = $Array<::java::lang::invoke::VarHandle$AccessType>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Constable = ::java::lang::constant::Constable;
using $DirectMethodHandle = ::java::lang::invoke::DirectMethodHandle;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarForm = ::java::lang::invoke::VarForm;
using $VarHandle$1 = ::java::lang::invoke::VarHandle$1;
using $VarHandle$AccessDescriptor = ::java::lang::invoke::VarHandle$AccessDescriptor;
using $VarHandle$AccessMode = ::java::lang::invoke::VarHandle$AccessMode;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;
using $VarHandle$TypesAndInvokers = ::java::lang::invoke::VarHandle$TypesAndInvokers;
using $VarHandleGuards = ::java::lang::invoke::VarHandleGuards;
using $WrongMethodTypeException = ::java::lang::invoke::WrongMethodTypeException;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Preconditions = ::jdk::internal::util::Preconditions;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandle_FieldAnnotations_typesAndInvokers[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_accessModeType3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_acquireFence6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_checkExactAccessMode8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_compareAndExchange9[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_compareAndExchangeAcquire10[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_compareAndExchangeRelease11[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_compareAndSet12[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_fullFence15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_get16[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAcquire17[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndAdd18[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndAddAcquire19[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndAddRelease20[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndBitwiseAnd21[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndBitwiseAndAcquire22[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndBitwiseAndRelease23[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndBitwiseOr24[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndBitwiseOrAcquire25[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndBitwiseOrRelease26[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndBitwiseXor27[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndBitwiseXorAcquire28[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndBitwiseXorRelease29[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndSet30[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndSetAcquire31[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getAndSetRelease32[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getMethodHandle33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getOpaque35[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getTypesAndInvokers36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_getVolatile37[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_loadLoadFence41[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_releaseFence42[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_set43[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_setOpaque44[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_setRelease45[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_setVolatile46[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_storeStoreFence47[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_throwWrongMethodTypeException49[] = {
	{"Ljdk/internal/vm/annotation/DontInline;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_weakCompareAndSet55[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_weakCompareAndSetAcquire56[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_weakCompareAndSetPlain57[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _VarHandle_MethodAnnotations_weakCompareAndSetRelease58[] = {
	{"Ljava/lang/invoke/MethodHandle$PolymorphicSignature;", nullptr},
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _VarHandle_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(VarHandle, $assertionsDisabled)},
	{"vform", "Ljava/lang/invoke/VarForm;", nullptr, $FINAL, $field(VarHandle, vform)},
	{"exact", "Z", nullptr, $FINAL, $field(VarHandle, exact)},
	{"typesAndInvokers", "Ljava/lang/invoke/VarHandle$TypesAndInvokers;", nullptr, 0, $field(VarHandle, typesAndInvokers), _VarHandle_FieldAnnotations_typesAndInvokers},
	{"AIOOBE_SUPPLIER", "Ljava/util/function/BiFunction;", "Ljava/util/function/BiFunction<Ljava/lang/String;Ljava/util/List<Ljava/lang/Number;>;Ljava/lang/ArrayIndexOutOfBoundsException;>;", $STATIC | $FINAL, $staticField(VarHandle, AIOOBE_SUPPLIER)},
	{"VFORM_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VarHandle, VFORM_OFFSET)},
	{}
};

$MethodInfo _VarHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/VarForm;)V", nullptr, 0, $method(static_cast<void(VarHandle::*)($VarForm*)>(&VarHandle::init$))},
	{"<init>", "(Ljava/lang/invoke/VarForm;Z)V", nullptr, 0, $method(static_cast<void(VarHandle::*)($VarForm*,bool)>(&VarHandle::init$))},
	{"accessModeType", "(Ljava/lang/invoke/VarHandle$AccessMode;)Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$MethodType*(VarHandle::*)($VarHandle$AccessMode*)>(&VarHandle::accessModeType))},
	{"accessModeType", "(I)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $method(static_cast<$MethodType*(VarHandle::*)(int32_t)>(&VarHandle::accessModeType)), nullptr, nullptr, _VarHandle_MethodAnnotations_accessModeType3},
	{"accessModeTypeUncached", "(I)Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $method(static_cast<$MethodType*(VarHandle::*)(int32_t)>(&VarHandle::accessModeTypeUncached))},
	{"accessModeTypeUncached", "(Ljava/lang/invoke/VarHandle$AccessType;)Ljava/lang/invoke/MethodType;", nullptr, $ABSTRACT},
	{"acquireFence", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&VarHandle::acquireFence)), nullptr, nullptr, _VarHandle_MethodAnnotations_acquireFence6},
	{"asDirect", "()Ljava/lang/invoke/VarHandle;", nullptr, 0},
	{"checkExactAccessMode", "(Ljava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $FINAL, $method(static_cast<void(VarHandle::*)($VarHandle$AccessDescriptor*)>(&VarHandle::checkExactAccessMode)), nullptr, nullptr, _VarHandle_MethodAnnotations_checkExactAccessMode8},
	{"compareAndExchange", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::compareAndExchange)), nullptr, nullptr, _VarHandle_MethodAnnotations_compareAndExchange9},
	{"compareAndExchangeAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::compareAndExchangeAcquire)), nullptr, nullptr, _VarHandle_MethodAnnotations_compareAndExchangeAcquire10},
	{"compareAndExchangeRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::compareAndExchangeRelease)), nullptr, nullptr, _VarHandle_MethodAnnotations_compareAndExchangeRelease11},
	{"compareAndSet", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<bool(VarHandle::*)($ObjectArray*)>(&VarHandle::compareAndSet)), nullptr, nullptr, _VarHandle_MethodAnnotations_compareAndSet12},
	{"coordinateTypes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Class<*>;>;", $PUBLIC},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/invoke/VarHandle$VarHandleDesc;>;", $PUBLIC},
	{"fullFence", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&VarHandle::fullFence)), nullptr, nullptr, _VarHandle_MethodAnnotations_fullFence15},
	{"get", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::get)), nullptr, nullptr, _VarHandle_MethodAnnotations_get16},
	{"getAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAcquire)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAcquire17},
	{"getAndAdd", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndAdd)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndAdd18},
	{"getAndAddAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndAddAcquire)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndAddAcquire19},
	{"getAndAddRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndAddRelease)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndAddRelease20},
	{"getAndBitwiseAnd", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndBitwiseAnd)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndBitwiseAnd21},
	{"getAndBitwiseAndAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndBitwiseAndAcquire)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndBitwiseAndAcquire22},
	{"getAndBitwiseAndRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndBitwiseAndRelease)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndBitwiseAndRelease23},
	{"getAndBitwiseOr", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndBitwiseOr)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndBitwiseOr24},
	{"getAndBitwiseOrAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndBitwiseOrAcquire)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndBitwiseOrAcquire25},
	{"getAndBitwiseOrRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndBitwiseOrRelease)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndBitwiseOrRelease26},
	{"getAndBitwiseXor", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndBitwiseXor)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndBitwiseXor27},
	{"getAndBitwiseXorAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndBitwiseXorAcquire)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndBitwiseXorAcquire28},
	{"getAndBitwiseXorRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndBitwiseXorRelease)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndBitwiseXorRelease29},
	{"getAndSet", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndSet)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndSet30},
	{"getAndSetAcquire", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndSetAcquire)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndSetAcquire31},
	{"getAndSetRelease", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getAndSetRelease)), nullptr, nullptr, _VarHandle_MethodAnnotations_getAndSetRelease32},
	{"getMethodHandle", "(I)Ljava/lang/invoke/MethodHandle;", nullptr, 0, nullptr, nullptr, nullptr, _VarHandle_MethodAnnotations_getMethodHandle33},
	{"getMethodHandleUncached", "(I)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$MethodHandle*(VarHandle::*)(int32_t)>(&VarHandle::getMethodHandleUncached))},
	{"getOpaque", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getOpaque)), nullptr, nullptr, _VarHandle_MethodAnnotations_getOpaque35},
	{"getTypesAndInvokers", "()Ljava/lang/invoke/VarHandle$TypesAndInvokers;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$VarHandle$TypesAndInvokers*(VarHandle::*)()>(&VarHandle::getTypesAndInvokers)), nullptr, nullptr, _VarHandle_MethodAnnotations_getTypesAndInvokers36},
	{"getVolatile", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<$Object*(VarHandle::*)($ObjectArray*)>(&VarHandle::getVolatile)), nullptr, nullptr, _VarHandle_MethodAnnotations_getVolatile37},
	{"hasInvokeExactBehavior", "()Z", nullptr, $PUBLIC},
	{"isAccessModeSupported", "(Ljava/lang/invoke/VarHandle$AccessMode;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(VarHandle::*)($VarHandle$AccessMode*)>(&VarHandle::isAccessModeSupported))},
	{"isDirect", "()Z", nullptr, 0},
	{"loadLoadFence", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&VarHandle::loadLoadFence)), nullptr, nullptr, _VarHandle_MethodAnnotations_loadLoadFence41},
	{"releaseFence", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&VarHandle::releaseFence)), nullptr, nullptr, _VarHandle_MethodAnnotations_releaseFence42},
	{"set", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<void(VarHandle::*)($ObjectArray*)>(&VarHandle::set)), nullptr, nullptr, _VarHandle_MethodAnnotations_set43},
	{"setOpaque", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<void(VarHandle::*)($ObjectArray*)>(&VarHandle::setOpaque)), nullptr, nullptr, _VarHandle_MethodAnnotations_setOpaque44},
	{"setRelease", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<void(VarHandle::*)($ObjectArray*)>(&VarHandle::setRelease)), nullptr, nullptr, _VarHandle_MethodAnnotations_setRelease45},
	{"setVolatile", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<void(VarHandle::*)($ObjectArray*)>(&VarHandle::setVolatile)), nullptr, nullptr, _VarHandle_MethodAnnotations_setVolatile46},
	{"storeStoreFence", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&VarHandle::storeStoreFence)), nullptr, nullptr, _VarHandle_MethodAnnotations_storeStoreFence47},
	{"target", "()Ljava/lang/invoke/VarHandle;", nullptr, 0},
	{"throwWrongMethodTypeException", "(Ljava/lang/invoke/VarHandle$AccessDescriptor;)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(VarHandle::*)($VarHandle$AccessDescriptor*)>(&VarHandle::throwWrongMethodTypeException)), nullptr, nullptr, _VarHandle_MethodAnnotations_throwWrongMethodTypeException49},
	{"toMethodHandle", "(Ljava/lang/invoke/VarHandle$AccessMode;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"unsupported", "()Ljava/lang/RuntimeException;", nullptr, 0},
	{"updateVarForm", "(Ljava/lang/invoke/VarForm;)V", nullptr, $FINAL, $method(static_cast<void(VarHandle::*)($VarForm*)>(&VarHandle::updateVarForm))},
	{"varType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"weakCompareAndSet", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<bool(VarHandle::*)($ObjectArray*)>(&VarHandle::weakCompareAndSet)), nullptr, nullptr, _VarHandle_MethodAnnotations_weakCompareAndSet55},
	{"weakCompareAndSetAcquire", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<bool(VarHandle::*)($ObjectArray*)>(&VarHandle::weakCompareAndSetAcquire)), nullptr, nullptr, _VarHandle_MethodAnnotations_weakCompareAndSetAcquire56},
	{"weakCompareAndSetPlain", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<bool(VarHandle::*)($ObjectArray*)>(&VarHandle::weakCompareAndSetPlain)), nullptr, nullptr, _VarHandle_MethodAnnotations_weakCompareAndSetPlain57},
	{"weakCompareAndSetRelease", "([Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL | $TRANSIENT | $NATIVE, $method(static_cast<bool(VarHandle::*)($ObjectArray*)>(&VarHandle::weakCompareAndSetRelease)), nullptr, nullptr, _VarHandle_MethodAnnotations_weakCompareAndSetRelease58},
	{"withInvokeBehavior", "()Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{"withInvokeExactBehavior", "()Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

#define _METHOD_INDEX_compareAndExchange 9
#define _METHOD_INDEX_compareAndExchangeAcquire 10
#define _METHOD_INDEX_compareAndExchangeRelease 11
#define _METHOD_INDEX_compareAndSet 12
#define _METHOD_INDEX_get 16
#define _METHOD_INDEX_getAcquire 17
#define _METHOD_INDEX_getAndAdd 18
#define _METHOD_INDEX_getAndAddAcquire 19
#define _METHOD_INDEX_getAndAddRelease 20
#define _METHOD_INDEX_getAndBitwiseAnd 21
#define _METHOD_INDEX_getAndBitwiseAndAcquire 22
#define _METHOD_INDEX_getAndBitwiseAndRelease 23
#define _METHOD_INDEX_getAndBitwiseOr 24
#define _METHOD_INDEX_getAndBitwiseOrAcquire 25
#define _METHOD_INDEX_getAndBitwiseOrRelease 26
#define _METHOD_INDEX_getAndBitwiseXor 27
#define _METHOD_INDEX_getAndBitwiseXorAcquire 28
#define _METHOD_INDEX_getAndBitwiseXorRelease 29
#define _METHOD_INDEX_getAndSet 30
#define _METHOD_INDEX_getAndSetAcquire 31
#define _METHOD_INDEX_getAndSetRelease 32
#define _METHOD_INDEX_getOpaque 35
#define _METHOD_INDEX_getVolatile 37
#define _METHOD_INDEX_set 43
#define _METHOD_INDEX_setOpaque 44
#define _METHOD_INDEX_setRelease 45
#define _METHOD_INDEX_setVolatile 46
#define _METHOD_INDEX_weakCompareAndSet 55
#define _METHOD_INDEX_weakCompareAndSetAcquire 56
#define _METHOD_INDEX_weakCompareAndSetPlain 57
#define _METHOD_INDEX_weakCompareAndSetRelease 58

$InnerClassInfo _VarHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandle$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"java.lang.invoke.VarHandle$VarHandleDesc", "java.lang.invoke.VarHandle", "VarHandleDesc", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.invoke.VarHandle$TypesAndInvokers", "java.lang.invoke.VarHandle", "TypesAndInvokers", $STATIC},
	{"java.lang.invoke.VarHandle$AccessDescriptor", "java.lang.invoke.VarHandle", "AccessDescriptor", $STATIC | $FINAL},
	{"java.lang.invoke.VarHandle$AccessMode", "java.lang.invoke.VarHandle", "AccessMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.lang.invoke.VarHandle$AccessType", "java.lang.invoke.VarHandle", "AccessType", $STATIC | $FINAL | $ENUM},
	{"java.lang.invoke.VarHandle$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _VarHandle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.invoke.VarHandle",
	"java.lang.Object",
	"java.lang.constant.Constable",
	_VarHandle_FieldInfo_,
	_VarHandle_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandle$2,java.lang.invoke.VarHandle$VarHandleDesc,java.lang.invoke.VarHandle$VarHandleDesc$Kind,java.lang.invoke.VarHandle$TypesAndInvokers,java.lang.invoke.VarHandle$AccessDescriptor,java.lang.invoke.VarHandle$AccessMode,java.lang.invoke.VarHandle$AccessType,java.lang.invoke.VarHandle$1"
};

$Object* allocate$VarHandle($Class* clazz) {
	return $of($alloc(VarHandle));
}

bool VarHandle::$assertionsDisabled = false;
$BiFunction* VarHandle::AIOOBE_SUPPLIER = nullptr;
int64_t VarHandle::VFORM_OFFSET = 0;

void VarHandle::init$($VarForm* vform) {
	VarHandle::init$(vform, false);
}

void VarHandle::init$($VarForm* vform, bool exact) {
	$set(this, vform, vform);
	this->exact = exact;
}

$RuntimeException* VarHandle::unsupported() {
	return $new($UnsupportedOperationException);
}

bool VarHandle::isDirect() {
	return true;
}

VarHandle* VarHandle::asDirect() {
	return this;
}

VarHandle* VarHandle::target() {
	return nullptr;
}

bool VarHandle::hasInvokeExactBehavior() {
	return this->exact;
}

$Object* VarHandle::get($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_get(this, args);
}

void VarHandle::set($ObjectArray* args){
	_Java_java_lang_invoke_VarHandle_set(this, args);
}

$Object* VarHandle::getVolatile($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getVolatile(this, args);
}

void VarHandle::setVolatile($ObjectArray* args){
	_Java_java_lang_invoke_VarHandle_setVolatile(this, args);
}

$Object* VarHandle::getOpaque($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getOpaque(this, args);
}

void VarHandle::setOpaque($ObjectArray* args){
	_Java_java_lang_invoke_VarHandle_setOpaque(this, args);
}

$Object* VarHandle::getAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAcquire(this, args);
}

void VarHandle::setRelease($ObjectArray* args){
	_Java_java_lang_invoke_VarHandle_setRelease(this, args);
}

bool VarHandle::compareAndSet($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_compareAndSet(this, args);
}

$Object* VarHandle::compareAndExchange($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_compareAndExchange(this, args);
}

$Object* VarHandle::compareAndExchangeAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_compareAndExchangeAcquire(this, args);
}

$Object* VarHandle::compareAndExchangeRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_compareAndExchangeRelease(this, args);
}

bool VarHandle::weakCompareAndSetPlain($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_weakCompareAndSetPlain(this, args);
}

bool VarHandle::weakCompareAndSet($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_weakCompareAndSet(this, args);
}

bool VarHandle::weakCompareAndSetAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_weakCompareAndSetAcquire(this, args);
}

bool VarHandle::weakCompareAndSetRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_weakCompareAndSetRelease(this, args);
}

$Object* VarHandle::getAndSet($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndSet(this, args);
}

$Object* VarHandle::getAndSetAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndSetAcquire(this, args);
}

$Object* VarHandle::getAndSetRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndSetRelease(this, args);
}

$Object* VarHandle::getAndAdd($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndAdd(this, args);
}

$Object* VarHandle::getAndAddAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndAddAcquire(this, args);
}

$Object* VarHandle::getAndAddRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndAddRelease(this, args);
}

$Object* VarHandle::getAndBitwiseOr($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseOr(this, args);
}

$Object* VarHandle::getAndBitwiseOrAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseOrAcquire(this, args);
}

$Object* VarHandle::getAndBitwiseOrRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseOrRelease(this, args);
}

$Object* VarHandle::getAndBitwiseAnd($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseAnd(this, args);
}

$Object* VarHandle::getAndBitwiseAndAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseAndAcquire(this, args);
}

$Object* VarHandle::getAndBitwiseAndRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseAndRelease(this, args);
}

$Object* VarHandle::getAndBitwiseXor($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseXor(this, args);
}

$Object* VarHandle::getAndBitwiseXorAcquire($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseXorAcquire(this, args);
}

$Object* VarHandle::getAndBitwiseXorRelease($ObjectArray* args){
	return _Java_java_lang_invoke_VarHandle_getAndBitwiseXorRelease(this, args);
}

$String* VarHandle::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("VarHandle[varType=%s, coord=%s]"_s, $$new($ObjectArray, {
		$($of($nc(varType())->getName())),
		$($of(coordinateTypes()))
	}));
}

$Class* VarHandle::varType() {
	$init($VarHandle$AccessMode);
	$var($MethodType, typeSet, accessModeType($VarHandle$AccessMode::SET));
	return $cast($Class, $nc(typeSet)->parameterType(typeSet->parameterCount() - 1));
}

$List* VarHandle::coordinateTypes() {
	$init($VarHandle$AccessMode);
	$var($MethodType, typeGet, accessModeType($VarHandle$AccessMode::GET));
	return $nc(typeGet)->parameterList();
}

$MethodType* VarHandle::accessModeType($VarHandle$AccessMode* accessMode) {
	return accessModeType($nc(accessMode)->at->ordinal());
}

void VarHandle::checkExactAccessMode($VarHandle$AccessDescriptor* ad) {
	if (this->exact && accessModeType($nc(ad)->type) != $nc(ad)->symbolicMethodTypeExact) {
		throwWrongMethodTypeException(ad);
	}
}

void VarHandle::throwWrongMethodTypeException($VarHandle$AccessDescriptor* ad) {
	$useLocalCurrentObjectStackCache();
	$throwNew($WrongMethodTypeException, $$str({"expected "_s, $(accessModeType($nc(ad)->type)), " but found "_s, $nc(ad)->symbolicMethodTypeExact}));
}

$MethodType* VarHandle::accessModeType(int32_t accessTypeOrdinal) {
	$useLocalCurrentObjectStackCache();
	$var($VarHandle$TypesAndInvokers, tis, getTypesAndInvokers());
	$var($MethodType, mt, $nc($nc(tis)->methodType_table)->get(accessTypeOrdinal));
	if (mt == nullptr) {
		$assign(mt, ($nc(tis->methodType_table)->set(accessTypeOrdinal, $(accessModeTypeUncached(accessTypeOrdinal)))));
	}
	return mt;
}

$MethodType* VarHandle::accessModeTypeUncached(int32_t accessTypeOrdinal) {
	return accessModeTypeUncached($($VarHandle$AccessType::values())->get(accessTypeOrdinal));
}

bool VarHandle::isAccessModeSupported($VarHandle$AccessMode* accessMode) {
	return $nc(this->vform)->getMemberNameOrNull($nc(accessMode)->ordinal()) != nullptr;
}

$MethodHandle* VarHandle::toMethodHandle($VarHandle$AccessMode* accessMode) {
	$useLocalCurrentObjectStackCache();
	if (isAccessModeSupported(accessMode)) {
		$var($MethodHandle, mh, getMethodHandle($nc(accessMode)->ordinal()));
		return $nc(mh)->bindTo(this);
	} else {
		return $nc($($MethodHandles::varHandleInvoker(accessMode, $(accessModeType(accessMode)))))->bindTo(this);
	}
}

$Optional* VarHandle::describeConstable() {
	return $Optional::empty();
}

$VarHandle$TypesAndInvokers* VarHandle::getTypesAndInvokers() {
	$var($VarHandle$TypesAndInvokers, tis, this->typesAndInvokers);
	if (tis == nullptr) {
		$assign(tis, ($set(this, typesAndInvokers, $new($VarHandle$TypesAndInvokers))));
	}
	return tis;
}

$MethodHandle* VarHandle::getMethodHandle(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($VarHandle$TypesAndInvokers, tis, getTypesAndInvokers());
	$var($MethodHandle, mh, $nc($nc(tis)->methodHandle_table)->get(mode));
	if (mh == nullptr) {
		$assign(mh, ($nc(tis->methodHandle_table)->set(mode, $(getMethodHandleUncached(mode)))));
	}
	return mh;
}

$MethodHandle* VarHandle::getMethodHandleUncached(int32_t mode) {
	$useLocalCurrentObjectStackCache();
	$var($MethodType, mt, $nc($(accessModeType($($VarHandle$AccessMode::values())->get(mode))))->insertParameterTypes(0, $$new($ClassArray, {VarHandle::class$})));
	$var($MemberName, mn, $nc(this->vform)->getMemberName(mode));
	$var($DirectMethodHandle, dmh, $DirectMethodHandle::make(mn));
	$var($MethodHandle, mh, $nc(dmh)->copyWith(mt, dmh->form));
	bool var$0 = !VarHandle::$assertionsDisabled;
	if (var$0) {
		var$0 = !($nc($($nc(mh)->type()))->erase() == $nc($($nc(mn)->getMethodType()))->erase());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	return mh;
}

void VarHandle::updateVarForm($VarForm* newVForm) {
	if (this->vform == newVForm) {
		return;
	}
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->putReference(this, VarHandle::VFORM_OFFSET, newVForm);
	$nc($MethodHandleStatics::UNSAFE)->fullFence();
}

void VarHandle::fullFence() {
	$init(VarHandle);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->fullFence();
}

void VarHandle::acquireFence() {
	$init(VarHandle);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->loadFence();
}

void VarHandle::releaseFence() {
	$init(VarHandle);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->storeFence();
}

void VarHandle::loadLoadFence() {
	$init(VarHandle);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->loadLoadFence();
}

void VarHandle::storeStoreFence() {
	$init(VarHandle);
	$init($MethodHandleStatics);
	$nc($MethodHandleStatics::UNSAFE)->storeStoreFence();
}

void clinit$VarHandle($Class* class$) {
	VarHandle::$assertionsDisabled = !VarHandle::class$->desiredAssertionStatus();
	$assignStatic(VarHandle::AIOOBE_SUPPLIER, $Preconditions::outOfBoundsExceptionFormatter($$new($VarHandle$1)));
	{
		$init($MethodHandleStatics);
		VarHandle::VFORM_OFFSET = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset(VarHandle::class$, "vform"_s);
		$load($VarHandleGuards);
		$nc($MethodHandleStatics::UNSAFE)->ensureClassInitialized($VarHandleGuards::class$);
	}
}

VarHandle::VarHandle() {
}

$Class* VarHandle::load$($String* name, bool initialize) {
	$loadClass(VarHandle, name, initialize, &_VarHandle_ClassInfo_, clinit$VarHandle, allocate$VarHandle);
	return class$;
}

$Class* VarHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java