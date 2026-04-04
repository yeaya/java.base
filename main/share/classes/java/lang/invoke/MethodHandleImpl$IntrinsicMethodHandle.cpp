#include <java/lang/invoke/MethodHandleImpl$IntrinsicMethodHandle.h>
#include <java/lang/invoke/DelegatingMethodHandle.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$Intrinsic.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodType.h>
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
	return this->intrinsicData$;
}

$MethodHandle* MethodHandleImpl$IntrinsicMethodHandle::asTypeUncached($MethodType* newType) {
	return $set(this, asTypeCache, $nc(this->target)->asType(newType));
}

$Object* MethodHandleImpl$IntrinsicMethodHandle::internalProperties() {
	return $of($str({$$cast($String, $DelegatingMethodHandle::internalProperties()), "\n& Intrinsic="_s, this->intrinsicName$}));
}

$MethodHandle* MethodHandleImpl$IntrinsicMethodHandle::asCollector($Class* arrayType, int32_t arrayLength) {
	$useLocalObjectStack();
	$init($MethodHandleImpl$Intrinsic);
	if (this->intrinsicName$ == $MethodHandleImpl$Intrinsic::IDENTITY) {
		$var($MethodType, resultType, $$nc(type())->asCollectorType(arrayType, $$nc(type())->parameterCount() - 1, arrayLength));
		$var($MethodHandle, newArray, $MethodHandleImpl::varargsArray(arrayType, arrayLength));
		return $nc(newArray)->asType(resultType);
	}
	return $DelegatingMethodHandle::asCollector(arrayType, arrayLength);
}

MethodHandleImpl$IntrinsicMethodHandle::MethodHandleImpl$IntrinsicMethodHandle() {
}

$Class* MethodHandleImpl$IntrinsicMethodHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$IntrinsicMethodHandle, target)},
		{"intrinsicName", "Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$IntrinsicMethodHandle, intrinsicName$)},
		{"intrinsicData", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(MethodHandleImpl$IntrinsicMethodHandle, intrinsicData$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandleImpl$Intrinsic;)V", nullptr, 0, $method(MethodHandleImpl$IntrinsicMethodHandle, init$, void, $MethodHandle*, $MethodHandleImpl$Intrinsic*)},
		{"<init>", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandleImpl$Intrinsic;Ljava/lang/Object;)V", nullptr, 0, $method(MethodHandleImpl$IntrinsicMethodHandle, init$, void, $MethodHandle*, $MethodHandleImpl$Intrinsic*, Object$*)},
		{"asCollector", "(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;I)Ljava/lang/invoke/MethodHandle;", $PUBLIC, $virtualMethod(MethodHandleImpl$IntrinsicMethodHandle, asCollector, $MethodHandle*, $Class*, int32_t)},
		{"asTypeUncached", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$IntrinsicMethodHandle, asTypeUncached, $MethodHandle*, $MethodType*)},
		{"getTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PROTECTED, $virtualMethod(MethodHandleImpl$IntrinsicMethodHandle, getTarget, $MethodHandle*)},
		{"internalProperties", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MethodHandleImpl$IntrinsicMethodHandle, internalProperties, $Object*)},
		{"intrinsicData", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(MethodHandleImpl$IntrinsicMethodHandle, intrinsicData, $Object*)},
		{"intrinsicName", "()Ljava/lang/invoke/MethodHandleImpl$Intrinsic;", nullptr, 0, $virtualMethod(MethodHandleImpl$IntrinsicMethodHandle, intrinsicName, $MethodHandleImpl$Intrinsic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandleImpl$IntrinsicMethodHandle", "java.lang.invoke.MethodHandleImpl", "IntrinsicMethodHandle", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.MethodHandleImpl$IntrinsicMethodHandle",
		"java.lang.invoke.DelegatingMethodHandle",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.MethodHandleImpl"
	};
	$loadClass(MethodHandleImpl$IntrinsicMethodHandle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleImpl$IntrinsicMethodHandle);
	});
	return class$;
}

$Class* MethodHandleImpl$IntrinsicMethodHandle::class$ = nullptr;

		} // invoke
	} // lang
} // java