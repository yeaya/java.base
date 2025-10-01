#include <java/lang/invoke/MethodHandleImpl$IntrinsicMethodHandle.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef IDENTITY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DelegatingMethodHandle = ::java::lang::invoke::DelegatingMethodHandle;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleImpl$Intrinsic = ::java::lang::invoke::MethodHandleImpl$Intrinsic;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleImpl$IntrinsicMethodHandle_FieldInfo_[] = {
	{"target", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$IntrinsicMethodHandle, target)},
	{"intrinsicName", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$IntrinsicMethodHandle, intrinsicName$)},
	{"intrinsicData", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$IntrinsicMethodHandle, intrinsicData$)},
	{}
};

$MethodInfo _MethodHandleImpl$IntrinsicMethodHandle_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandleImpl$Intrinsic;)V", nullptr, 0, $method(static_cast<void(MethodHandleImpl$IntrinsicMethodHandle::*)($MethodHandle*,$MethodHandleImpl$Intrinsic*)>(&MethodHandleImpl$IntrinsicMethodHandle::init$))},
	{"<init>", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandleImpl$Intrinsic;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(MethodHandleImpl$IntrinsicMethodHandle::*)($MethodHandle*,$MethodHandleImpl$Intrinsic*,Object$*)>(&MethodHandleImpl$IntrinsicMethodHandle::init$))},
	{"asCollector", "(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;I)Ljava/lang/invoke/MethodHandle;", $PUBLIC},
	{"asTypeUncached", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC},
	{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PROTECTED},
	{"internalProperties", "()Ljava/lang/String;", nullptr, 0},
	{"intrinsicData", "()Ljava/lang/Object;", nullptr, 0},
	{"intrinsicName", "()Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, 0},
	{}
};

$InnerClassInfo _MethodHandleImpl$IntrinsicMethodHandle_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$IntrinsicMethodHandle", "java.lang.invoke.MethodHandleImpl", "IntrinsicMethodHandle", $STATIC | $FINAL},
	{}
};

$ClassInfo _MethodHandleImpl$IntrinsicMethodHandle_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$IntrinsicMethodHandle",
	"java.lang.invoke.DelegatingMethodHandle",
	nullptr,
	_MethodHandleImpl$IntrinsicMethodHandle_FieldInfo_,
	_MethodHandleImpl$IntrinsicMethodHandle_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleImpl$IntrinsicMethodHandle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$IntrinsicMethodHandle($Class* clazz) {
	return $of($alloc(MethodHandleImpl$IntrinsicMethodHandle));
}

void MethodHandleImpl$IntrinsicMethodHandle::init$($MethodHandle* target, $MethodHandleImpl$Intrinsic* intrinsicName) {
	MethodHandleImpl$IntrinsicMethodHandle::init$(target, intrinsicName, nullptr);
}

void MethodHandleImpl$IntrinsicMethodHandle::init$($MethodHandle* target, $MethodHandleImpl$Intrinsic* intrinsicName, Object$* intrinsicData) {
	$DelegatingMethodHandle::init$($($nc(target)->type()), target);
	$set(this, target, target);
	$set(this, intrinsicName$, intrinsicName);
	$set(this, intrinsicData$, intrinsicData);
}

$MethodHandle* MethodHandleImpl$IntrinsicMethodHandle::getTarget() {
	return this->target;
}

$MethodHandleImpl$Intrinsic* MethodHandleImpl$IntrinsicMethodHandle::intrinsicName() {
	return this->intrinsicName$;
}

$Object* MethodHandleImpl$IntrinsicMethodHandle::intrinsicData() {
	return $of(this->intrinsicData$);
}

$MethodHandle* MethodHandleImpl$IntrinsicMethodHandle::asTypeUncached($MethodType* newType) {
	return $assignField(this, asTypeCache, $nc(this->target)->asType(newType));
}

$Object* MethodHandleImpl$IntrinsicMethodHandle::internalProperties() {
	return $of($str({$($cast($String, $DelegatingMethodHandle::internalProperties())), "\n& Intrinsic="_s, this->intrinsicName$}));
}

$MethodHandle* MethodHandleImpl$IntrinsicMethodHandle::asCollector($Class* arrayType, int32_t arrayLength) {
	$init($MethodHandleImpl$Intrinsic);
	if (this->intrinsicName$ == $MethodHandleImpl$Intrinsic::IDENTITY) {
		$var($MethodType, resultType, $nc($(type()))->asCollectorType(arrayType, $nc($(type()))->parameterCount() - 1, arrayLength));
		$var($MethodHandle, newArray, $MethodHandleImpl::varargsArray(arrayType, arrayLength));
		return $nc(newArray)->asType(resultType);
	}
	return $DelegatingMethodHandle::asCollector(arrayType, arrayLength);
}

MethodHandleImpl$IntrinsicMethodHandle::MethodHandleImpl$IntrinsicMethodHandle() {
}

$Class* MethodHandleImpl$IntrinsicMethodHandle::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$IntrinsicMethodHandle, name, initialize, &_MethodHandleImpl$IntrinsicMethodHandle_ClassInfo_, allocate$MethodHandleImpl$IntrinsicMethodHandle);
	return class$;
}

$Class* MethodHandleImpl$IntrinsicMethodHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java