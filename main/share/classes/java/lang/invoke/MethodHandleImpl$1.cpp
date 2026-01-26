#include <java/lang/invoke/MethodHandleImpl$1.h>

#include <java/lang/invoke/GenerateJLIClassesHelper.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/NativeMethodHandle.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/invoke/VarHandles.h>
#include <java/nio/ByteOrder.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/invoke/NativeEntryPoint.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GenerateJLIClassesHelper = ::java::lang::invoke::GenerateJLIClassesHelper;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $NativeMethodHandle = ::java::lang::invoke::NativeMethodHandle;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $VarHandles = ::java::lang::invoke::VarHandles;
using $ByteOrder = ::java::nio::ByteOrder;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Stream = ::java::util::stream::Stream;
using $NativeEntryPoint = ::jdk::internal::invoke::NativeEntryPoint;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _MethodHandleImpl$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(MethodHandleImpl$1, init$, void)},
	{"collectCoordinates", "(Ljava/lang/invoke/VarHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$1, collectCoordinates, $VarHandle*, $VarHandle*, int32_t, $MethodHandle*)},
	{"dropCoordinates", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/Class<*>;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $TRANSIENT, $virtualMethod(MethodHandleImpl$1, dropCoordinates, $VarHandle*, $VarHandle*, int32_t, $ClassArray*)},
	{"ensureCustomized", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$1, ensureCustomized, void, $MethodHandle*)},
	{"filterCoordinates", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(MethodHandleImpl$1, filterCoordinates, $VarHandle*, $VarHandle*, int32_t, $MethodHandleArray*)},
	{"filterValue", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$1, filterValue, $VarHandle*, $VarHandle*, $MethodHandle*, $MethodHandle*)},
	{"generateHolderClasses", "(Ljava/util/stream/Stream;)Ljava/util/Map;", "(Ljava/util/stream/Stream<Ljava/lang/String;>;)Ljava/util/Map<Ljava/lang/String;[B>;", $PUBLIC, $virtualMethod(MethodHandleImpl$1, generateHolderClasses, $Map*, $Stream*)},
	{"getDeclaringClass", "(Ljava/lang/Object;)Ljava/lang/Class;", "(Ljava/lang/Object;)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(MethodHandleImpl$1, getDeclaringClass, $Class*, Object$*)},
	{"getMethodDescriptor", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$1, getMethodDescriptor, $String*, Object$*)},
	{"getMethodType", "(Ljava/lang/Object;)Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$1, getMethodType, $MethodType*, Object$*)},
	{"getName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$1, getName, $String*, Object$*)},
	{"insertCoordinates", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/Object;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(MethodHandleImpl$1, insertCoordinates, $VarHandle*, $VarHandle*, int32_t, $ObjectArray*)},
	{"isNative", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$1, isNative, bool, Object$*)},
	{"memoryAccessVarHandle", "(Ljava/lang/Class;ZJLjava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/Class<*>;ZJLjava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;", $PUBLIC, $virtualMethod(MethodHandleImpl$1, memoryAccessVarHandle, $VarHandle*, $Class*, bool, int64_t, $ByteOrder*)},
	{"nativeMethodHandle", "(Ljdk/internal/invoke/NativeEntryPoint;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$1, nativeMethodHandle, $MethodHandle*, $NativeEntryPoint*, $MethodHandle*)},
	{"newMemberName", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$1, newMemberName, $Object*)},
	{"permuteCoordinates", "(Ljava/lang/invoke/VarHandle;Ljava/util/List;[I)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/invoke/VarHandle;Ljava/util/List<Ljava/lang/Class<*>;>;[I)Ljava/lang/invoke/VarHandle;", $PUBLIC | $TRANSIENT, $virtualMethod(MethodHandleImpl$1, permuteCoordinates, $VarHandle*, $VarHandle*, $List*, $ints*)},
	{}
};

$EnclosingMethodInfo _MethodHandleImpl$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandleImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _MethodHandleImpl$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$1",
	"java.lang.Object",
	"jdk.internal.access.JavaLangInvokeAccess",
	nullptr,
	_MethodHandleImpl$1_MethodInfo_,
	nullptr,
	&_MethodHandleImpl$1_EnclosingMethodInfo_,
	_MethodHandleImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$1($Class* clazz) {
	return $of($alloc(MethodHandleImpl$1));
}

void MethodHandleImpl$1::init$() {
}

$Object* MethodHandleImpl$1::newMemberName() {
	return $of($new($MemberName));
}

$String* MethodHandleImpl$1::getName(Object$* mname) {
	$var($MemberName, memberName, $cast($MemberName, mname));
	return $nc(memberName)->getName();
}

$Class* MethodHandleImpl$1::getDeclaringClass(Object$* mname) {
	$var($MemberName, memberName, $cast($MemberName, mname));
	return $nc(memberName)->getDeclaringClass();
}

$MethodType* MethodHandleImpl$1::getMethodType(Object$* mname) {
	$var($MemberName, memberName, $cast($MemberName, mname));
	return $nc(memberName)->getMethodType();
}

$String* MethodHandleImpl$1::getMethodDescriptor(Object$* mname) {
	$var($MemberName, memberName, $cast($MemberName, mname));
	return $nc(memberName)->getMethodDescriptor();
}

bool MethodHandleImpl$1::isNative(Object$* mname) {
	$var($MemberName, memberName, $cast($MemberName, mname));
	return $nc(memberName)->isNative();
}

$Map* MethodHandleImpl$1::generateHolderClasses($Stream* traces) {
	return $GenerateJLIClassesHelper::generateHolderClasses(traces);
}

void MethodHandleImpl$1::ensureCustomized($MethodHandle* mh) {
	$nc(mh)->customize();
}

$VarHandle* MethodHandleImpl$1::memoryAccessVarHandle($Class* carrier, bool skipAlignmentMaskCheck, int64_t alignmentMask, $ByteOrder* order) {
	return $VarHandles::makeMemoryAddressViewHandle(carrier, skipAlignmentMaskCheck, alignmentMask, order);
}

$MethodHandle* MethodHandleImpl$1::nativeMethodHandle($NativeEntryPoint* nep, $MethodHandle* fallback) {
	return $NativeMethodHandle::make(nep, fallback);
}

$VarHandle* MethodHandleImpl$1::filterValue($VarHandle* target, $MethodHandle* filterToTarget, $MethodHandle* filterFromTarget) {
	return $VarHandles::filterValue(target, filterToTarget, filterFromTarget);
}

$VarHandle* MethodHandleImpl$1::filterCoordinates($VarHandle* target, int32_t pos, $MethodHandleArray* filters) {
	return $VarHandles::filterCoordinates(target, pos, filters);
}

$VarHandle* MethodHandleImpl$1::dropCoordinates($VarHandle* target, int32_t pos, $ClassArray* valueTypes) {
	return $VarHandles::dropCoordinates(target, pos, valueTypes);
}

$VarHandle* MethodHandleImpl$1::permuteCoordinates($VarHandle* target, $List* newCoordinates, $ints* reorder) {
	return $VarHandles::permuteCoordinates(target, newCoordinates, reorder);
}

$VarHandle* MethodHandleImpl$1::collectCoordinates($VarHandle* target, int32_t pos, $MethodHandle* filter) {
	return $VarHandles::collectCoordinates(target, pos, filter);
}

$VarHandle* MethodHandleImpl$1::insertCoordinates($VarHandle* target, int32_t pos, $ObjectArray* values) {
	return $VarHandles::insertCoordinates(target, pos, values);
}

MethodHandleImpl$1::MethodHandleImpl$1() {
}

$Class* MethodHandleImpl$1::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$1, name, initialize, &_MethodHandleImpl$1_ClassInfo_, allocate$MethodHandleImpl$1);
	return class$;
}

$Class* MethodHandleImpl$1::class$ = nullptr;

		} // invoke
	} // lang
} // java