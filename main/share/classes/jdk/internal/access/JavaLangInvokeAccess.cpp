#include <jdk/internal/access/JavaLangInvokeAccess.h>

#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/nio/ByteOrder.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/invoke/NativeEntryPoint.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $ByteOrder = ::java::nio::ByteOrder;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Stream = ::java::util::stream::Stream;
using $NativeEntryPoint = ::jdk::internal::invoke::NativeEntryPoint;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaLangInvokeAccess_MethodInfo_[] = {
	{"collectCoordinates", "(Ljava/lang/invoke/VarHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, collectCoordinates, $VarHandle*, $VarHandle*, int32_t, $MethodHandle*)},
	{"dropCoordinates", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/Class<*>;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, dropCoordinates, $VarHandle*, $VarHandle*, int32_t, $ClassArray*)},
	{"ensureCustomized", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, ensureCustomized, void, $MethodHandle*)},
	{"filterCoordinates", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, filterCoordinates, $VarHandle*, $VarHandle*, int32_t, $MethodHandleArray*)},
	{"filterValue", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, filterValue, $VarHandle*, $VarHandle*, $MethodHandle*, $MethodHandle*)},
	{"generateHolderClasses", "(Ljava/util/stream/Stream;)Ljava/util/Map;", "(Ljava/util/stream/Stream<Ljava/lang/String;>;)Ljava/util/Map<Ljava/lang/String;[B>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, generateHolderClasses, $Map*, $Stream*)},
	{"getDeclaringClass", "(Ljava/lang/Object;)Ljava/lang/Class;", "(Ljava/lang/Object;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, getDeclaringClass, $Class*, Object$*)},
	{"getMethodDescriptor", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, getMethodDescriptor, $String*, Object$*)},
	{"getMethodType", "(Ljava/lang/Object;)Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, getMethodType, $MethodType*, Object$*)},
	{"getName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, getName, $String*, Object$*)},
	{"insertCoordinates", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/Object;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, insertCoordinates, $VarHandle*, $VarHandle*, int32_t, $ObjectArray*)},
	{"isNative", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, isNative, bool, Object$*)},
	{"memoryAccessVarHandle", "(Ljava/lang/Class;ZJLjava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/Class<*>;ZJLjava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, memoryAccessVarHandle, $VarHandle*, $Class*, bool, int64_t, $ByteOrder*)},
	{"nativeMethodHandle", "(Ljdk/internal/invoke/NativeEntryPoint;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, nativeMethodHandle, $MethodHandle*, $NativeEntryPoint*, $MethodHandle*)},
	{"newMemberName", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, newMemberName, $Object*)},
	{"permuteCoordinates", "(Ljava/lang/invoke/VarHandle;Ljava/util/List;[I)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/invoke/VarHandle;Ljava/util/List<Ljava/lang/Class<*>;>;[I)Ljava/lang/invoke/VarHandle;", $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(JavaLangInvokeAccess, permuteCoordinates, $VarHandle*, $VarHandle*, $List*, $ints*)},
	{}
};

$ClassInfo _JavaLangInvokeAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaLangInvokeAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaLangInvokeAccess_MethodInfo_
};

$Object* allocate$JavaLangInvokeAccess($Class* clazz) {
	return $of($alloc(JavaLangInvokeAccess));
}

$Class* JavaLangInvokeAccess::load$($String* name, bool initialize) {
	$loadClass(JavaLangInvokeAccess, name, initialize, &_JavaLangInvokeAccess_ClassInfo_, allocate$JavaLangInvokeAccess);
	return class$;
}

$Class* JavaLangInvokeAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk