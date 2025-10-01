#include <jdk/internal/invoke/NativeEntryPoint.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jdk/internal/invoke/ABIDescriptorProxy.h>
#include <jdk/internal/invoke/VMStorageProxy.h>
#include <jcpp.h>

using $VMStorageProxyArray = $Array<::jdk::internal::invoke::VMStorageProxy>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;
using $ABIDescriptorProxy = ::jdk::internal::invoke::ABIDescriptorProxy;
using $VMStorageProxy = ::jdk::internal::invoke::VMStorageProxy;

namespace jdk {
	namespace internal {
		namespace invoke {

$FieldInfo _NativeEntryPoint_FieldInfo_[] = {
	{"shadowSpace", "I", nullptr, $PRIVATE | $FINAL, $field(NativeEntryPoint, shadowSpace)},
	{"argMoves", "[J", nullptr, $PRIVATE | $FINAL, $field(NativeEntryPoint, argMoves)},
	{"returnMoves", "[J", nullptr, $PRIVATE | $FINAL, $field(NativeEntryPoint, returnMoves)},
	{"needTransition", "Z", nullptr, $PRIVATE | $FINAL, $field(NativeEntryPoint, needTransition)},
	{"methodType", "Ljava/lang/invoke/MethodType;", nullptr, $PRIVATE | $FINAL, $field(NativeEntryPoint, methodType)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NativeEntryPoint, name)},
	{}
};

$MethodInfo _NativeEntryPoint_MethodInfo_[] = {
	{"<init>", "(I[J[JZLjava/lang/invoke/MethodType;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(NativeEntryPoint::*)(int32_t,$longs*,$longs*,bool,$MethodType*,$String*)>(&NativeEntryPoint::init$))},
	{"encodeVMStorages", "([Ljdk/internal/invoke/VMStorageProxy;)[J", nullptr, $PRIVATE | $STATIC, $method(static_cast<$longs*(*)($VMStorageProxyArray*)>(&NativeEntryPoint::encodeVMStorages))},
	{"make", "(Ljava/lang/String;Ljdk/internal/invoke/ABIDescriptorProxy;[Ljdk/internal/invoke/VMStorageProxy;[Ljdk/internal/invoke/VMStorageProxy;ZLjava/lang/invoke/MethodType;)Ljdk/internal/invoke/NativeEntryPoint;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NativeEntryPoint*(*)($String*,$ABIDescriptorProxy*,$VMStorageProxyArray*,$VMStorageProxyArray*,bool,$MethodType*)>(&NativeEntryPoint::make))},
	{"registerNatives", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&NativeEntryPoint::registerNatives))},
	{"type", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC},
	{"vmStorageToVMReg", "(II)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t,int32_t)>(&NativeEntryPoint::vmStorageToVMReg))},
	{}
};

#define _METHOD_INDEX_registerNatives 3
#define _METHOD_INDEX_vmStorageToVMReg 5

$ClassInfo _NativeEntryPoint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.invoke.NativeEntryPoint",
	"java.lang.Object",
	nullptr,
	_NativeEntryPoint_FieldInfo_,
	_NativeEntryPoint_MethodInfo_
};

$Object* allocate$NativeEntryPoint($Class* clazz) {
	return $of($alloc(NativeEntryPoint));
}

void NativeEntryPoint::init$(int32_t shadowSpace, $longs* argMoves, $longs* returnMoves, bool needTransition, $MethodType* methodType, $String* name) {
	this->shadowSpace = shadowSpace;
	$set(this, argMoves, $cast($longs, $Objects::requireNonNull(argMoves)));
	$set(this, returnMoves, $cast($longs, $Objects::requireNonNull(returnMoves)));
	this->needTransition = needTransition;
	$set(this, methodType, methodType);
	$set(this, name, name);
}

NativeEntryPoint* NativeEntryPoint::make($String* name, $ABIDescriptorProxy* abi, $VMStorageProxyArray* argMoves, $VMStorageProxyArray* returnMoves, bool needTransition, $MethodType* methodType) {
	$init(NativeEntryPoint);
	if ($nc(returnMoves)->length > 1) {
		$throwNew($IllegalArgumentException, "Multiple register return not supported"_s);
	}
	int32_t var$0 = $nc(abi)->shadowSpaceBytes();
	$var($longs, var$1, encodeVMStorages(argMoves));
	return $new(NativeEntryPoint, var$0, var$1, $(encodeVMStorages(returnMoves)), needTransition, methodType, name);
}

$longs* NativeEntryPoint::encodeVMStorages($VMStorageProxyArray* moves) {
	$init(NativeEntryPoint);
	$var($longs, out, $new($longs, $nc(moves)->length));
	for (int32_t i = 0; i < moves->length; ++i) {
		int32_t var$0 = $nc(moves->get(i))->type();
		out->set(i, vmStorageToVMReg(var$0, $nc(moves->get(i))->index()));
	}
	return out;
}

int64_t NativeEntryPoint::vmStorageToVMReg(int32_t type, int32_t index) {
	$init(NativeEntryPoint);
	int64_t $ret = 0;
	$prepareNativeStatic(NativeEntryPoint, vmStorageToVMReg, int64_t, int32_t type, int32_t index);
	$ret = $invokeNativeStatic(NativeEntryPoint, vmStorageToVMReg, type, index);
	$finishNativeStatic();
	return $ret;
}

$MethodType* NativeEntryPoint::type() {
	return this->methodType;
}

void NativeEntryPoint::registerNatives() {
	$init(NativeEntryPoint);
	$prepareNativeStatic(NativeEntryPoint, registerNatives, void);
	$invokeNativeStatic(NativeEntryPoint, registerNatives);
	$finishNativeStatic();
}

void clinit$NativeEntryPoint($Class* class$) {
	{
		NativeEntryPoint::registerNatives();
	}
}

NativeEntryPoint::NativeEntryPoint() {
}

$Class* NativeEntryPoint::load$($String* name, bool initialize) {
	$loadClass(NativeEntryPoint, name, initialize, &_NativeEntryPoint_ClassInfo_, clinit$NativeEntryPoint, allocate$NativeEntryPoint);
	return class$;
}

$Class* NativeEntryPoint::class$ = nullptr;

		} // invoke
	} // internal
} // jdk