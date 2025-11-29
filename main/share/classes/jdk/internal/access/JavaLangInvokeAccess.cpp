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

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaLangInvokeAccess_MethodInfo_[] = {
	{"collectCoordinates", "(Ljava/lang/invoke/VarHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{"dropCoordinates", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/Class<*>;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"ensureCustomized", "(Ljava/lang/invoke/MethodHandle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"filterCoordinates", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"filterValue", "(Ljava/lang/invoke/VarHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{"generateHolderClasses", "(Ljava/util/stream/Stream;)Ljava/util/Map;", "(Ljava/util/stream/Stream<Ljava/lang/String;>;)Ljava/util/Map<Ljava/lang/String;[B>;", $PUBLIC | $ABSTRACT},
	{"getDeclaringClass", "(Ljava/lang/Object;)Ljava/lang/Class;", "(Ljava/lang/Object;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"getMethodDescriptor", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMethodType", "(Ljava/lang/Object;)Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"insertCoordinates", "(Ljava/lang/invoke/VarHandle;I[Ljava/lang/Object;)Ljava/lang/invoke/VarHandle;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"isNative", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"memoryAccessVarHandle", "(Ljava/lang/Class;ZJLjava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/Class<*>;ZJLjava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;", $PUBLIC | $ABSTRACT},
	{"nativeMethodHandle", "(Ljdk/internal/invoke/NativeEntryPoint;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $ABSTRACT},
	{"newMemberName", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"permuteCoordinates", "(Ljava/lang/invoke/VarHandle;Ljava/util/List;[I)Ljava/lang/invoke/VarHandle;", "(Ljava/lang/invoke/VarHandle;Ljava/util/List<Ljava/lang/Class<*>;>;[I)Ljava/lang/invoke/VarHandle;", $PUBLIC | $TRANSIENT | $ABSTRACT},
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